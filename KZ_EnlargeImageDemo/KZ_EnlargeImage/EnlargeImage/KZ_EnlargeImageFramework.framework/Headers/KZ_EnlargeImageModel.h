//
//  KZ_EnlargeImage.h
//  KZ_EnlargeImage
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KZ_EnlargeImageModel : NSObject

@property (nonatomic, strong) NSString *enlargeURL;
@property (nonatomic, strong) NSString *thumbnailURL;
@property (nonatomic, strong) UIImageView *thumbnailImageView;

@property (nonatomic, strong) UIImage *enlargeImage;
@property (nonatomic, strong) UIImage *thumbnailImage;

@property (nonatomic, strong, readonly) UIImage *currentImage;

- (void)getEnlargeImage:(void (^)(UIImage *image))largeImage;
- (void)getThumbnailImage:(void (^)(UIImage *image))thumbnailImage;

@end
