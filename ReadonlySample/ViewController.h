//
//  ViewController.h
//  ReadonlySample
//
//  Created by 藤田 直 on 12/12/28.
//  Copyright (c) 2012年 藤田 直. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Data.h"
@interface ViewController : UIViewController

@property (nonatomic, retain)NSObject* obj;
@property (nonatomic, retain)Data* data;

- (IBAction)pressedSet:(id)sender;
- (IBAction)pressedRelease:(id)sender;
- (IBAction)pressedCheck:(id)sender;

@end
