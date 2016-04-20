/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {

	AVMutableVideoCompositionInstructionInternal* _mutableInstruction;

}

@property (assign,nonatomic) SCD_Struct_CM6 timeRange; 
@property (nonatomic,retain) CGColorRef backgroundColor; 
@property (nonatomic,copy) NSArray * layerInstructions; 
@property (assign,nonatomic) BOOL enablePostProcessing; 
+(id)videoCompositionInstruction;
-(NSArray *)layerInstructions;
-(BOOL)enablePostProcessing;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(void)setLayerInstructions:(NSArray *)arg1 ;
-(void)setTimeRange:(SCD_Struct_CM6)arg1 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(SCD_Struct_CM6)timeRange;
@end

