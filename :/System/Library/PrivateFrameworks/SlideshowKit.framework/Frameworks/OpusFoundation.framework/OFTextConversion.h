/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@interface OFTextConversion : NSObject
+(CGColorSpaceRef)newColorSpaceForDevice;
+(id)styleForFontDisplayName:(id)arg1 andFamilyName:(id)arg2 ;
+(id)weightForFontDisplayName:(id)arg1 andFamilyName:(id)arg2 ;
+(id)stretchForFontDisplayName:(id)arg1 andFamilyName:(id)arg2 ;
+(CGColorRef)blackCGColor;
+(id)stringFromCGColor:(CGColorRef)arg1 ;
+(id)stringFromTextAlignment:(long long)arg1 ;
+(id)textFormatFromUnderlineStyle:(unsigned long long)arg1 ;
+(id)stringFromLigature:(long long)arg1 ;
+(id)textFormatWithCTAttributesForText:(id)arg1 attributes:(id)arg2 scaleFactor:(double)arg3 ;
+(id)textFormatWithNSAttributesForText:(id)arg1 attributes:(id)arg2 scaleFactor:(double)arg3 ;
+(CGColorRef)CGColorFromString:(id)arg1 ;
+(long long)textAlignmentFromString:(id)arg1 ;
+(unsigned long long)underlineStyleFromTextFormat:(id)arg1 ;
+(long long)ligatureFromString:(id)arg1 ;
+(id)stringAttributesWithAttributedString:(id)arg1 scaleFactor:(double)arg2 ;
+(id)attributedStringWithCTAttributesFromStringAttributes:(id)arg1 scaleFactor:(double)arg2 ;
+(id)attributedStringWithNSAttributesFromStringAttributes:(id)arg1 scaleFactor:(double)arg2 ;
@end

