//
//  NSCalendar+NSCalendar_Atipik.h
//  RruleParser
//
//  Created by Fabien Di Tore on 06.01.12.
//  Copyright (c) 2012 Atipik Sarl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSCalendar (NSCalendar_Atipik)

-(NSDate*) dateFromYear:(NSUInteger) year month:(NSUInteger) month day:(NSUInteger) day;

-(NSDate*) dateFromYear:(NSUInteger) year month:(NSUInteger) month day:(NSUInteger) day hour:(NSUInteger) hour minute:(NSUInteger) minute;
@end
