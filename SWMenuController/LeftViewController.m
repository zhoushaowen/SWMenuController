//
//  LeftViewController.m
//  SWMenuController
//
//  Created by zhoushaowen on 2017/3/7.
//  Copyright © 2017年 Yidu. All rights reserved.
//

#import "LeftViewController.h"
#import "SWMenuController.h"

@interface LeftViewController ()

@end

@implementation LeftViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationController.navigationBarHidden = YES;
    self.view.backgroundColor = [UIColor redColor];
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn setTitle:@"push" forState:UIControlStateNormal];
    btn.frame = CGRectMake(20, 100, 200, 50);
    [btn addTarget:self action:@selector(btnClick:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
}

- (void)btnClick:(UIButton *)sender
{
    UIViewController *vc = [UIViewController new];
    vc.view.backgroundColor = [UIColor cyanColor];
    [self.menuController showRootViewController:NO];
    UINavigationController *nav = (UINavigationController *)self.menuController.rootViewController;
    [nav pushViewController:vc animated:YES];
}



@end
