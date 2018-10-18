
Pod::Spec.new do |s|

    s.name = 'KZ_EnlargeImage'
    s.version = '0.1.2'
    s.summary = 'iOS enlargeImage.'
    s.homepage = 'https://github.com/KieronZhang/KZ_EnlargeImage'
    s.license = {:type => 'MIT', :file => 'LICENSE'}
    s.author = {'KieronZhang.' => 'https://github.com/KieronZhang'}

    s.source = {:git => 'https://github.com/KieronZhang/KZ_EnlargeImage.git', :tag => s.version, :submodules => true}
    s.xcconfig = {'OTHER_LDFLAGS' => '-ObjC'}
    s.requires_arc = true

    s.ios.frameworks = 'Foundation', 'UIKit'

    s.ios.deployment_target = '8.0'
    
    s.ios.vendored_frameworks = 'KZ_EnlargeImage/KZ_EnlargeImage_iOS.framework'

    s.dependency 'KZ_WebImage'
    s.dependency 'KZ_ReuseScrollView'
    s.dependency 'KZ_Categories'
    s.dependency 'KZ_MacroDefinition'

end
