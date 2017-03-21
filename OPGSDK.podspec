#
# Be sure to run `pod lib lint OPGSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'OPGSDK'
  s.version          = '0.1.4'
  s.summary          = 'A short description of OPGSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/thamarai199@outlook.com/TestOPGSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'thamarai199@outlook.com' => 'chinthanm@gmail.com' }
  s.source           = { :git => 'https://github.com/thamarai199@outlook.com/TestOPGSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

# s.source_files = 'module/module.modulemap'

#s.ios.vendored_library = 'libOnePointSDK.a'
 s.ios.vendored_frameworks = 'OPGFramework.framework'
s.resource_bundles = {
'BlinkingLabel' => ['OPGSDK/Assets/*.bundle']
}
s.frameworks = 'UIKit', 'MapKit'
# s.preserve_path = 'module/module.modulemap'
# s.module_map = 'module/module.modulemap'
# s.xcconfig = { 'HEADER_SEARCH_PATHS' => '$(inherited)' '"${PODS_ROOT}/module"' '"$(SRCROOT)/module"' "$(SRCROOT)/Pods/Headers/", 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES' }

#s.pod_target_xcconfig = { 'HEADER_SEARCH_PATHS' => '$(PODS_ROOT)/mypod/module' }
#s.xcconfig = { 'HEADER_SEARCH_PATHS' => '$(SDKROOT)/usr/include/libxml2 $(PODS_ROOT)/mypod/module' }

#s.library = 'xml2', 'c++', 'iconv', 'z'
# s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC'}

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
