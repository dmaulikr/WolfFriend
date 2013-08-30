//
//  WolfFriendAppDelegate.h
//  WolfFriend
//
//  Created by Jiang Chuncheng on 8/21/11.
//  Copyright 2011 SenseForce. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WolfFriendAppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>

@property (nonatomic, strong) IBOutlet UIWindow *window;

@property (nonatomic, strong) IBOutlet UITabBarController *tabBarController;

@end
