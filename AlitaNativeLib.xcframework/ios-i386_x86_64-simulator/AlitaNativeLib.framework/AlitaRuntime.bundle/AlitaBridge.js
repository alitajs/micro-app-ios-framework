function setupWebViewJavascriptBridge(callback) {
  if (window.WebViewJavascriptBridge) {
    return callback(WebViewJavascriptBridge);
  }

  if (window.WVJBCallbacks) {
    return window.WVJBCallbacks.push(callback);
  }

  window.WVJBCallbacks = [callback];
  var WVJBIframe = document.createElement('iframe');
  WVJBIframe.style.display = 'none';
  WVJBIframe.src = 'https://__bridge_loaded__';
  document.documentElement.appendChild(WVJBIframe);
  setTimeout(function () {
    document.documentElement.removeChild(WVJBIframe);
  }, 0);
}

var device = {
  pluginName: 'device',
  methodsList: ['platform']
};

var media = {
  pluginName: 'media',
  methodsList: ['chooseImage']
};

if (!window.alita) {
  window.alita = {};
}

var plugins = [device, media];
/**
 * 初始化单个插件
 * @param any plugin 插件
 */

function registerPlugin(plugin) {
  var pluginName = plugin.pluginName,
      methodsList = plugin.methodsList;

  if (!window.alita[pluginName]) {
    window.alita[pluginName] = {};
  }

  methodsList.forEach(function (methodName) {
    window.alita[pluginName][methodName] = function (data) {
      return new Promise(function (resolve, reject) {
        WebViewJavascriptBridge.callHandler("".concat(pluginName, ".").concat(methodName), data === undefined ? null : data, function (responseData) {
          resolve(responseData);
        });
      });
    };
  });
}
/**
 * 初始化内置插件
 */

function registerPlugins() {
  plugins.forEach(function (plugin) {
    registerPlugin(plugin);
  });
}

setupWebViewJavascriptBridge(function (bridge) {
  bridge.fireDocumentEvent = function (type, data) {
    var event = new CustomEvent(type, {
      detail: data
    });
    document.dispatchEvent(event);
  };

  registerPlugins();
});
