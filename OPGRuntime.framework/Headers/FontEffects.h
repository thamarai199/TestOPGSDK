//
//  FontEffects.h
//  OnePoint.Runtime
//
//  Created by ChinthanMac on 3/3/15.
//  Copyright (c) 2015 OnePointGlobal. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    feUnderline = 0x0001,
    feItalic = 0x0002,
    feBold = 0x0004,
    feStrikethrough = 0x0008,
    feOverline = 0x0010,
    feBlink = 0x0020,
    feSuperscript = 0x0040,
    feSubscript = 0x0080,
} FontEffectsEnum;


@protocol FontEffects
-(FontEffectsEnum)getEnum:(NSString *)value;
@end

@interface FontEffects :NSObject<FontEffects>{
    FontEffectsEnum enumValue;
}

@property(nonatomic,assign) FontEffectsEnum enumValue;


-(FontEffectsEnum)getEnum;
-(void)setEnum:(NSString *)value;
-(FontEffectsEnum)getEnum:(NSString *)value;

@end


