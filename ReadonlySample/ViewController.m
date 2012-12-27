//
//  ViewController.m
//  ReadonlySample
//
//  Created by 藤田 直 on 12/12/28.
//  Copyright (c) 2012年 藤田 直. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.obj = [NSObject new];
    self.obj = [[NSObject alloc] init];
    
    NSLog(@"self.objのretainカウントは?");
}



- (IBAction)pressedSet:(id)sender {
    self.data = [Data new];
    [self.data setData:self.obj];
    NSLog(@"self.objのretainカウントは?");
}

- (IBAction)pressedRelease:(id)sender {
    self.data = nil;
    NSLog(@"self.objのretainカウントは?");
}

- (IBAction)pressedCheck:(id)sender {
    NSLog(@"self.objのretainカウントは?");
}


@end
