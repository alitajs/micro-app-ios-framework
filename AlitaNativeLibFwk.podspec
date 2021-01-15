#
#  Be sure to run `pod spec lint AlitaNativeLib.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "AlitaNativeLibFwk"
  spec.version      = "0.5.5"
  spec.summary      = "Alita Micro App iOS SDK"
  spec.description  = <<-DESC
                      An framework provide micro app platform ability.
                   DESC
  spec.homepage     = "https://micro.alitajs.com/"
  spec.license      = {
    :type => 'Copyright',
    :text => <<-LICENSE
      Copyright 2020 iwhalecloud.com. All rights reserved.
      LICENSE
  }

  spec.author             = { "Ashoka" => "savebtc11@gmail.com" }

  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  spec.platform     = :ios, "10.0"

  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  spec.source       = { :git => "https://github.com/WhaleCloudCamp/micro-app-ios-framework.git", :tag => "#{spec.version}" }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #



  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

  spec.vendored_frameworks = "AlitaNativeLib.framework"


  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  spec.requires_arc = true

  spec.dependency 'SSZipArchive', '~> 2.2'
  spec.dependency 'AFNetworking', '~> 4.0'
  spec.dependency "TZImagePickerController", "~> 3.4"
  spec.dependency 'LBXScan/UI','~> 2.5'
  spec.dependency 'LBXScan/LBXNative','~> 2.5'

end
