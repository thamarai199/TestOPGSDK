//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/VirtualMachine/Core/ConstantField.java
//
//  Created by chinthan on 12/2/13.
//


#import "Constant.h"

@interface ConstantField : Constant {
 @public
  NSMutableArray *constants_;
  short int __ClassIndex_;
  NSMutableData *__Code_;
  short int __NameAndTypeIndex_;
}

- (id)initWithByte:(char)tag
         withShort:(short int)classIdx
         withShort:(short int)nameAndTypeIdx;
- (id)initWithByte:(char)tag
         withShort:(short int)classIdx
         withShort:(short int)nameAndTypeIdx
withConstantArray:(NSMutableArray *)consts;
- (id)initWithByte:(char)tag
         withShort:(short int)classIdx
         withShort:(short int)nameAndTypeIdx
     withByteArray:(NSMutableData *)code;
- (short int)getClassIndex;
- (void)setClassIndexWithShort:(short int)value;
- (NSMutableData *)getCode;
- (void)setCodeWithByteArray:(NSMutableData *)value;
- (short int)getNameAndTypeIndex;
- (void)setNameAndTypeIndexWithShort:(short int)value;
- (NSString *)getClassName;
- (NSString *)getMethodName;
- (NSString *)getFieldName;
@end


