//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/VirtualMachine/Bootstrapper.java
//
//  Created by chinthan on 12/2/13.
//

#ifndef _Bootstrapper_H_
#define _Bootstrapper_H_

@protocol IRender;
#import "IPlayer.h"


@interface Bootstrapper : NSObject {
}

+ (BOOL)load__WithByteArray:(Byte *)byteStream withLength:(int)length;
+ (BOOL)load__WithByteArray:(Byte *)byteStream withLength:(int)length withIRender:(id<IRender>)render withIPlayer:(id<IPlayer>)player;
+ (BOOL)load__WithFile:(NSString *)file withIRender:(id<IRender>)render withIPlayer:(id<IPlayer>)player;
+ (BOOL)load__WithByteArray:(Byte *)byteStream withLength:(int)length withLongStingByteArray:(Byte *)longByte withLongStrLength:(int)longStrLength withIRender:(id<IRender>)render withIPlayer:(id<IPlayer>)player;
- (id)init;
@end

#endif // _Bootstrapper_H_
