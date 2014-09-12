//
//  AppDelegate.h
//  UIKit-UICollectionView
//
//  Created by 王钱钧 on 14-9-11.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CollectionViewController;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) CollectionViewController *rootVC;

@end
