/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIDisintegrateWithMaskTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputMaskImage;
	NSNumber* inputTime;
	NSNumber* inputShadowRadius;
	NSNumber* inputShadowDensity;
	CIVector* inputShadowOffset;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputShadowRadius; 
@property (nonatomic,retain) NSNumber * inputShadowDensity; 
@property (nonatomic,retain) CIVector * inputShadowOffset; 
+(id)customAttributes;
-(CIImage *)inputTargetImage;
-(NSNumber *)inputTime;
-(id)_kernel;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(NSNumber *)inputShadowRadius;
-(void)setInputShadowRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputShadowDensity;
-(void)setInputShadowDensity:(NSNumber *)arg1 ;
-(CIVector *)inputShadowOffset;
-(void)setInputShadowOffset:(CIVector *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputTime:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

