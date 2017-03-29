Pod::Spec.new do |s|

  s.name         = "SWMenuController"

  s.version      = "1.0.1"

  s.homepage      = 'https://github.com/zhoushaowen/SWMenuController'

  s.ios.deployment_target = '7.0'

  s.summary      = "侧滑手势框架"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }

  s.author       = { "Zhoushaowen" => "348345883@qq.com" }

  s.source       = { :git => "https://github.com/zhoushaowen/SWMenuController.git", :tag => s.version }
  
  s.source_files  = "SWMenuController/SWMenuController/*.{h,m}"
  
  s.requires_arc = true

end