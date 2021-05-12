Pod::Spec.new do |s|

  s.name         = 'AC_ESPUtils'
  s.version      = '1.0.0'
  s.summary      = 'Update ESPUtils to GitHub for easy management.'

  s.homepage     = 'https://blog.csdn.net/weixin_42227660?spm=1001.2101.3001.5343'



  s.license      = 'MIT'

  s.ios.deployment_target = '9.0'
  s.author       = { 'Andy_Cheung' => '283151189@qq.com' }

  s.source       = { :git => 'https://github.com/Andy-Jack-Cheung/AC_ESPUtils.git', :tag => '1.0.0' }



  s.source_files  = 'AC_ESPUtils/*.{h,m}'


  s.framework  = 'UIKit'
  s.requires_arc = true


end

