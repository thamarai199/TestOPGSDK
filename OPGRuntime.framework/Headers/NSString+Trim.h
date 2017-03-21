//
//  NSString+Trim.h
//  OnePoint.Runtime
//
//  Created by ThamaraiD on 7/9/15.
//  Copyright (c) 2015 OnePointGlobal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Trim)

-(NSString*)stringByTrimmingLeadingCharactersInSet:(NSCharacterSet *)characterSet;
-(NSString*)stringByTrimmingTrailingCharactersInSet:(NSCharacterSet *)characterSet;

@end
