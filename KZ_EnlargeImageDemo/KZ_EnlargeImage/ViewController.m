//
//  ViewController.m
//  KZ_EnlargeImage
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import "ViewController.h"
#import "NavigationController.h"
#import "TestCell.h"
#import <KZ_AFCacheNetworkingFramework/KZ_WebCacheImageManager.h>

@interface ViewController () <UITableViewDataSource, UITableViewDelegate> {
    UITableView *mainTableView;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIBarButtonItem *rightButton = [[UIBarButtonItem alloc] initWithTitle:@"清除缓存" style:UIBarButtonItemStylePlain target:self action:@selector(rightButton)];
    self.navigationItem.rightBarButtonItem = rightButton;
    
    mainTableView = [[UITableView alloc] initWithFrame:self.view.bounds];
    mainTableView.delegate = self;
    mainTableView.dataSource = self;
    [self.view addSubview:mainTableView];
}

- (void)rightButton {
    [KZ_WebCacheImageManager deleteCacheImage:^{
        NSLog(@"清除缓存成功");
    }];
}

#pragma mark UITableViewDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 15;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    int count = (int)indexPath.row % 15 + 1;
    return [TestCell heightForRowWithCount:count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *TestCellName = @"TestCellName";
    TestCell *cell = [tableView dequeueReusableCellWithIdentifier:TestCellName];
    if (!cell) {
        cell = [[TestCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:TestCellName];
    }
    int count = (int)indexPath.row % 15 + 1;
    [cell resetCellWithCount:count];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
