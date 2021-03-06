//
//  LFPAppEngineManager.h
//  仿手机QQ的侧拉菜单
//
//  Created by 蜗牛 on 16/9/1.
//  Copyright © 2016年 关于蜗牛：一枚九零后码农  蜗牛-----QQ:3197857495-----李富棚  个人微信：woniu1308822159  微信公众号：woniuxueios  简书：蜗牛学IOS  地址：http://www.jianshu.com/users/a664a9fcb096/latest_articles  简书专题：蜗牛学IOS  地址：http://www.jianshu.com/collection/bfcf49bf5d27    蜗牛     */. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LFPAppBaseViewController;//相当于整个容器
@class LFPTabBarController;
@class UINavigationController;

@interface LFPAppEngineManager : NSObject

@property (nonatomic, strong) UINavigationController    *baseNavController;
@property (nonatomic, strong) LFPAppBaseViewController     *baseViewController;
@property (nonatomic, strong) LFPTabBarController      *TabBarController;

+ (instancetype)sharedInstance;

@end
