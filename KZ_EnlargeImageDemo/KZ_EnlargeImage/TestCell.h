//
//  TestCell.h
//  KZ_EnlargeImage
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestCell : UITableViewCell

@property (nonatomic, weak) UIViewController *parentViewController;

- (void)resetCellWithCount:(int)count;
+ (CGFloat)heightForRowWithCount:(int)count;

@end
