//
//  SWMenuController.h
//  SWMenuController
//
//  Created by zhoushaowen on 2017/3/7.
//  Copyright © 2017年 Yidu. All rights reserved.
//

#import <UIKit/UIKit.h>

//设置左边的view随着移动距离改变的方法
typedef void(^changeLeftView)(CGFloat x);
//设置右边的view随着移动距离改变的方法
typedef void(^changeRightView)(CGFloat x);
//设置中间的view随着移动距离改变的方法
typedef void(^changeRootView)(CGFloat x);

typedef NS_ENUM(NSUInteger, SWTransitionStyle) {
    SWTransitionStyleNormal         = 0,//平移
    SWTransitionStyleZoomSidebar    = 1,//缩小侧边栏
    SWTransitionStyleZoomRoot       = 2,//缩小主页面
    SWTransitionStyleQQ             = 3,//缩小主页面，放大侧边栏，像QQ一样
};

typedef NS_ENUM(NSUInteger, SWMenuControllerState) {
    SWMenuControllerStateNormal     = 0,//显示中间页面
    SWMenuControllerStateLeft       = 1,//显示左边页面
    SWMenuControllerStateRight      = 2,//显示右边页面
};


@interface SWMenuController : UIViewController
    
//中间的页面
@property (nonatomic, weak, readonly) UIViewController* rootViewController;
//左边的页面
@property (nonatomic, weak, readonly) UIViewController* leftViewController;
//右边的页面
@property (nonatomic, weak, readonly) UIViewController* rightViewController;

//向左滑动的最大距离，默认屏幕宽度的3/4
@property (nonatomic) CGFloat maxLeftOffset;
//向右滑动的最大距离，默认屏幕宽度的3/4
@property (nonatomic) CGFloat maxRightOffset;

//滑动手势
@property (nonatomic,strong,readonly) UIPanGestureRecognizer *panGesture;

//动画方式
@property (nonatomic) SWTransitionStyle transitionStyle;

//动画时间，默认0.25f
@property (nonatomic) NSTimeInterval duration;

//设置左边的view随着移动距离改变的方法
@property (nonatomic, strong) changeLeftView changeLeftView;

//设置右边的view随着移动距离改变的方法
@property (nonatomic, strong) changeRightView changeRightView;
//设置中间的view随着移动距离改变的方法
@property (nonatomic, strong) changeRootView changeRootView;

//当前显示的是哪个页面状态
@property (nonatomic,readonly) SWMenuControllerState state;

/**
 *  创建一个ZYMenuController
 *
 *  @param rootViewController  中间的页面
 *  @param leftViewController  左边的页面
 *  @param rightViewController 右边的页面
 *
 *  @return ZYMenuController对象
 */
- (instancetype)initWithRootViewController:(UIViewController* )rootViewController leftViewController:(UIViewController* )leftViewController rightViewController:(UIViewController* )rightViewController;

/**
 *  显示中间的页面
 *
 *  @param animated 是否使用动画
 */
- (void)showRootViewControllerAnimated:(BOOL)animated;
    
/**
 *  显示左边的页面
 *
 *  @param animated 是否使用动画
 */
- (void)showLeftViewControllerAnimated:(BOOL)animated;
    
/**
 *  显示右边的页面
 *
 *  @param animated 是否使用动画
 */
- (void)showRightViewControllerAnimated:(BOOL)animated;
    
@end

@interface UIViewController (SWMenuController)
    
@property (nonatomic, readonly) SWMenuController* menuController;


@end
