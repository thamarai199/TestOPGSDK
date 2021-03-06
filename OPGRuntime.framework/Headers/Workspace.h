//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/VirtualMachine/Workspace.java
//
//  Created by chinthan on 12/2/13.
//


#import "RecordContext.h"
@class OPGMethod;
@class OnePointClass;
@protocol IRender;
@protocol IPlayer;
#import "SavePoints.h"
#import "SavePoint.h"
#import "OnePointClass.h"
#import "Executor.h"

@interface Workspace : NSObject {
 @public
  RecordContext *__Context_;
  Executor *__Executor_;
  OnePointClass *__MetaClass_;
  NSMutableDictionary *__NativeMethods_;
  OnePointClass *__StringClass_;
  NSMutableDictionary *__SuperClasses_;
  id<IRender> __Render_;
    id<IPlayer> __Player;
}

- (id)initWithRecordContext:(RecordContext *)context;
- (RecordContext *)getContext;
- (void)setContextWithRecordContext:(RecordContext *)value;
- (Executor *)getExecutor;
- (void)setExecutorWithExecutor:(Executor *)value;
- (OnePointClass *)getMetaClass;
- (void)setMetaClassWithOnePointClass:(OnePointClass *)value;
- (NSMutableDictionary *)getNativeMethods;
- (void)setNativeMethodsWithJavaUtilHashMap:(NSMutableDictionary *)value;
- (OnePointClass *)getStringClass;
- (void)setStringClassWithOnePointClass:(OnePointClass *)value;
- (NSMutableDictionary *)getSuperClasses;
- (void)setSuperClassesWithJavaUtilHashMap:(NSMutableDictionary *)value;
- (id<IRender>)getRender;
- (void)setRenderWithIRender:(id<IRender>)value;
- (id<IPlayer>)getPlayer;
- (void)setPlayerWithIPlayer:(id<IPlayer>)value;
- (void)executeWithNSStringArray:(NSMutableArray *)args;
//- (void)buildSuperClassReferences;
//- (OPGMethod *)createBootStrapMethod;
- (void)Continue:(NSString *)gotoValue;
-(Interview *)loadInterview;
@end


