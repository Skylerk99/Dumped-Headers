/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIOuterGlowOrShadowFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRange;
	NSNumber* inputRadius;
	NSNumber* inputSize;
	NSNumber* inputSpread;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRange; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputSpread; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(id)_kernel;
-(NSNumber *)inputSize;
-(void)setInputSize:(NSNumber *)arg1 ;
-(void)setInputOffset:(CIVector *)arg1 ;
-(CIVector *)inputOffset;
-(void)setInputSpread:(NSNumber *)arg1 ;
-(NSNumber *)inputSpread;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setDefaults;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(NSNumber *)inputRange;
-(void)setInputRange:(NSNumber *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end

