//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/Expressions/Helpers/SymbolManagement/ClassHelper.java
//
//  Created by chinthan on 1/6/14.
//

#ifndef _ClassHelper_H_
#define _ClassHelper_H_

#import "SymbolBuilder.h"

@interface ClassHelper : NSObject {
}

+ (void)loadClassDefinitionsWithHandler:(Handler *)handler;

+ (NSString *)replaceAliasWithJavaUtilHashMap:(NSMutableDictionary *)aliases
                                 withNSString:(NSString *)nodeValue;
+ (NSString *)validateDescriptorWithNSString:(NSString *)descriptor;
- (id)init;
+(NSString *)addObject:(id)obj;
+(void)addObject:(NSString *)name withObject:(id)obj;
+(id)removeObject:(NSString *)name;
+(id)getObject:(NSString *)name;

@end

#endif // _ClassHelper_H_
