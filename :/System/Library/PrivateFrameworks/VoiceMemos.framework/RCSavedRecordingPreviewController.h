/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCPreviewController.h>

@class RCCompositionController;

@interface RCSavedRecordingPreviewController : RCPreviewController {

	BOOL _postPrepareShouldPlay;
	SCD_Struct_RC4 _postPrepareTimeRange;
	double _postPrepareStartTime;
	RCCompositionController* _compositionController;

}

@property (nonatomic,retain) RCCompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
+(id)sharedRecordingPreviewController;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(void)stop;
-(void)pause;
-(void)playerCurrentRateDidChange:(id)arg1 ;
-(void)playWithTimeRange:(SCD_Struct_RC4)arg1 startTime:(double)arg2 playbackContextName:(id)arg3 ;
-(void)setPlayableTimeRange:(SCD_Struct_RC4)arg1 ;
-(SCD_Struct_RC4)playableTimeRange;
-(RCCompositionController *)compositionController;
-(void)setCompositionController:(RCCompositionController *)arg1 ;
@end

