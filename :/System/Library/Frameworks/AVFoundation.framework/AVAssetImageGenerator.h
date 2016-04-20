/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetImageGeneratorInternal, AVAsset, NSString, AVVideoComposition;

@interface AVAssetImageGenerator : NSObject {

	AVAssetImageGeneratorInternal* _priv;

}

@property (nonatomic,readonly) AVAsset * asset; 
@property (assign,nonatomic) BOOL appliesPreferredTrackTransform; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (nonatomic,copy) NSString * apertureMode; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@property (nonatomic,readonly) id<AVVideoCompositing> customVideoCompositor; 
@property (assign,nonatomic) SCD_Struct_CM5 requestedTimeToleranceBefore; 
@property (assign,nonatomic) SCD_Struct_CM5 requestedTimeToleranceAfter; 
+(id)assetImageGeneratorWithAsset:(id)arg1 ;
-(BOOL)appliesPreferredTrackTransform;
-(NSString *)apertureMode;
-(SCD_Struct_CM5)requestedTimeToleranceBefore;
-(SCD_Struct_CM5)requestedTimeToleranceAfter;
-(AVVideoComposition *)videoComposition;
-(id)_NSErrorForError:(int)arg1 ;
-(CGSize)_scaledSizeForRenderSize:(CGSize)arg1 ;
-(CFDictionaryRef)_createPixelBufferAttributesWithSize:(CGSize)arg1 ;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(id)_makeAutoreleasedAssetReader;
-(CGImageRef)_copyCGImageAtTime:(SCD_Struct_CM5)arg1 usingAssetReader:(id)arg2 error:(id*)arg3 ;
-(id)_optionsDictionary;
-(BOOL)_ensureFigAssetImageGeneratorReturningError:(id*)arg1 ;
-(id<AVVideoCompositing>)customVideoCompositor;
-(id)_requestWithRequestID:(id)arg1 ;
-(void)_didGenerateCGImage:(id)arg1 ;
-(void)_failedToGenerateCGImage:(id)arg1 ;
-(void)_serverDied;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(CGImageRef)copyCGImageAtTime:(SCD_Struct_CM5)arg1 actualTime:(SCD_Struct_CM5*)arg2 error:(id*)arg3 ;
-(void)setApertureMode:(NSString *)arg1 ;
-(void)setRequestedTimeToleranceBefore:(SCD_Struct_CM5)arg1 ;
-(void)setRequestedTimeToleranceAfter:(SCD_Struct_CM5)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelAllCGImageGeneration;
-(void)dealloc;
-(id)init;
-(id)initWithAsset:(id)arg1 ;
-(AVAsset *)asset;
-(CGSize)maximumSize;
-(void)finalize;
@end

