//
//  TestCell.h
//  KZ_EnlargeImage_iOS
//
//  Created by Kieron Zhang on 2018/5/9.
//  Copyright © 2018年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestCell : UITableViewCell

@property (nonatomic, weak) UIViewController *parentViewController;

- (void)resetCellWithCount:(int)count;
+ (CGFloat)heightForRowWithCount:(int)count;

@end
