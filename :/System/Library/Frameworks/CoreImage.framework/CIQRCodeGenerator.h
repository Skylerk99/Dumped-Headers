/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSString;

@interface CIQRCodeGenerator : CICodeGenerator {

	NSString* inputCorrectionLevel;

}

@property (nonatomic,copy) NSString * inputCorrectionLevel; 
+(id)customAttributes;
-(void)setInputCorrectionLevel:(NSString *)arg1 ;
-(NSString *)inputCorrectionLevel;
-(CGImageRef)outputCGImage;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

