//
//  AppDelegate.h
//  05-逻辑分支(if-else-if)
//
//  Created by mushroom on 2019/9/20.
//  Copyright © 2019 xiaomage. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

