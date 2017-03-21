//
//  BorderStyles.h
//  OnePoint.Runtime
//
//  Created by ChinthanMac on 3/3/15.
//  Copyright (c) 2015 OnePointGlobal. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    bsNone = 0,
    bsSolid = 1,
    bsDouble = 2,
    bsGroove = 3,
    bsRidge = 4,
    bsInset = 5,
    bsOutset = 6,
} BorderStylesEnum;

@protocol BorderStyles
-(BorderStylesEnum)getEnum:(NSString *)value;
@end

@interface BorderStyles :NSObject<BorderStyles>{
    BorderStylesEnum enumValue;
}

@property(nonatomic,assign) BorderStylesEnum enumValue;

-(BorderStylesEnum)getEnum;
-(void)setEnum:(NSString *)value;
-(BorderStylesEnum)getEnum:(NSString *)value;
@end
