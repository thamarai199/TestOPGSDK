//
//  LabelStyleTypes.h
//  OnePoint.Runtime
//
//  Created by ChinthanMac on 3/2/15.
//  Copyright (c) 2015 OnePointGlobal. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    lsQuestion = 0,
    lsCategory = 1,
    lsBanner = 2,
    lsError = 3,
    lsNavigation = 4,
    lsTitle = 5,
    
} LabelStyleTypesEnum;

@protocol LabelStyleTypes
-(LabelStyleTypesEnum)getEnum:(NSString *)value;
@end

@interface LabelStyleTypes :NSObject<LabelStyleTypes>{
    LabelStyleTypesEnum enumValue;
}

@property(nonatomic,assign) LabelStyleTypesEnum enumValue;


-(LabelStyleTypesEnum)getEnum;
-(void)setEnum:(NSString *)value;

-(LabelStyleTypesEnum)getEnum:(NSString *)value;
@end

