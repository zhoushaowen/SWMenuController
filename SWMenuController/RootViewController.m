//
//  RootViewController.m
//  SWMenuController
//
//  Created by zhoushaowen on 2017/3/7.
//  Copyright © 2017年 Yidu. All rights reserved.
//

#import "RootViewController.h"
#import "SWMenuController.h"

@interface RootViewController ()

@end

@implementation RootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"next" style:UIBarButtonItemStylePlain target:self action:@selector(rightItemClick)];
}

- (void)rightItemClick
{
    UIViewController *vc = [UIViewController new];
    vc.view.backgroundColor = [UIColor yellowColor];
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
    self.menuController.panGesture.enabled = NO;
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    self.menuController.panGesture.enabled = YES;
}




@end
