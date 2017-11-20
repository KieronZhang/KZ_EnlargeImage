
Pod::Spec.new do |s|

    s.name = 'KZ_EnlargeImage'
    s.version = '0.1'
    s.summary = 'iOS enlargeImage.'
    s.homepage = 'https://github.com/KieronZhang/KZ_EnlargeImage'
    s.license = {:type => 'MIT', :file => 'LICENSE'}
    s.author = {'KieronZhang.' => 'https://github.com/KieronZhang'}
    s.platform = :ios, '8.0'
    s.source = {:git => 'https://github.com/KieronZhang/KZ_EnlargeImage.git', :tag => s.version, :submodules => true}
    s.xcconfig = {'OTHER_LDFLAGS' => '-ObjC'}
    s.frameworks = 'Foundation', 'UIKit'
    s.vendored_frameworks = 'KZ_EnlargeImage/KZ_EnlargeImageFramework.framework'
    s.requires_arc = true

    s.dependency 'KZ_AFCacheNetworking'
    s.dependency 'KZ_ReuseScrollView'
    s.dependency 'KZ_Categories'
    s.dependency 'KZ_MacroDefinition'

end
