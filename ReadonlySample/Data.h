//
//  Data.h
//  ReadonlySample
//
//  Created by 藤田 直 on 12/12/28.
//  Copyright (c) 2012年 藤田 直. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Data.h"
@interface Data : NSObject
@property (nonatomic, readonly) NSObject* cuurentData;
- (void)setData:(NSObject*)data;

@end
