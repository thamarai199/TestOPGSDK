//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/Common/AliasMap/Alias.java
//
//  Created by chinthan on 1/15/14.
//

#import <Foundation/Foundation.h>

#import "IAlias.h"

@interface Alias : NSObject <IAlias> {
 @public
  long __Index_;
  NSString *__Name_;
  id __Reference_;
}

- (long)getIndex;
- (void)setIndexWithLong:(long)value;
- (NSString *)getName;
- (void)setNameWithNSString:(NSString *)value;
- (id)getReference;
- (void)setReferenceWithId:(id)value;
- (id)init;
- (id)initWithIndex:(long)index withName:(NSString *)name;
- (id)initWithIndex:(long)index withName:(NSString *)name withID:(id)reference;


@end

