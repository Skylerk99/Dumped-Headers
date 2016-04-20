/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSDictionary, NSString;

@interface __NSVariableWidthString : NSString {

	NSDictionary* _variants;
	NSString* _defaultString;

}

@property (readonly) unsigned long long length; 
-(id)initWithString:(id)arg1 widthVariants:(id)arg2 ;
-(id)initWithWidthVariants:(id)arg1 ;
-(id)formatConfiguration;
-(id)initWithWidthContexts:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(id)variantFittingPresentationWidth:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

