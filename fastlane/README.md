fastlane documentation
================
# Installation

Make sure you have the latest version of the Xcode command line tools installed:

```
xcode-select --install
```

Install _fastlane_ using
```
[sudo] gem install fastlane -NV
```
or alternatively using `brew install fastlane`

# Available Actions
## iOS
### ios custom_lane
```
fastlane ios custom_lane
```
Description of what the lane does
### ios clone_source_code
```
fastlane ios clone_source_code
```
Clone source code

#### Options

* **source_code_url** source code git url

* **target_path** target path to clone source code
### ios build_framework
```
fastlane ios build_framework
```
build AlitaNativeLib.framework

#### Options

* **source_code_url** source code git url

----

This README.md is auto-generated and will be re-generated every time [fastlane](https://fastlane.tools) is run.
More information about fastlane can be found on [fastlane.tools](https://fastlane.tools).
The documentation of fastlane can be found on [docs.fastlane.tools](https://docs.fastlane.tools).
