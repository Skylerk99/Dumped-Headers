/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIColor;

@interface CUIOuterBevelEmbossFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputSize;
	NSNumber* inputSoften;
	NSNumber* inputAngle;
	CIColor* inputHighlightColor;
	CIColor* inputShadowColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputSoften; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) CIColor * inputHighlightColor; 
@property (nonatomic,retain) CIColor * inputShadowColor; 
+(id)customAttributes;
-(NSNumber *)inputAngle;
-(id)_kernel;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(id)_kernelC;
-(NSNumber *)inputSize;
-(void)setInputSize:(NSNumber *)arg1 ;
-(NSNumber *)inputSoften;
-(void)setInputSoften:(NSNumber *)arg1 ;
-(CIColor *)inputHighlightColor;
-(void)setInputHighlightColor:(CIColor *)arg1 ;
-(CIColor *)inputShadowColor;
-(void)setInputShadowColor:(CIColor *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end

