/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class AVAsset, PFVideoAdjustments, PFSlowMotionTimeRangeMapper, AVAudioMix, AVVideoComposition;

@interface PFVideoAVObjectBuilder : NSObject {

	AVAsset* _videoAsset;
	PFVideoAdjustments* _videoAdjustments;
	PFSlowMotionTimeRangeMapper* __timeRangeMapperForPlayback;
	PFSlowMotionTimeRangeMapper* __timeRangeMapperForExport;
	AVAsset* __finalAsset;
	AVAudioMix* __finalAudioMix;
	AVVideoComposition* __finalVideoComposition;

}

@property (nonatomic,readonly) AVAsset * videoAsset;                                                   //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) PFVideoAdjustments * videoAdjustments;                                  //@synthesize videoAdjustments=_videoAdjustments - In the implementation block
@property (nonatomic,readonly) PFSlowMotionTimeRangeMapper * _timeRangeMapperForPlayback;              //@synthesize _timeRangeMapperForPlayback=__timeRangeMapperForPlayback - In the implementation block
@property (nonatomic,readonly) PFSlowMotionTimeRangeMapper * _timeRangeMapperForExport;                //@synthesize _timeRangeMapperForExport=__timeRangeMapperForExport - In the implementation block
@property (nonatomic,readonly) AVAsset * _finalAsset;                                                  //@synthesize _finalAsset=__finalAsset - In the implementation block
@property (nonatomic,readonly) AVAudioMix * _finalAudioMix;                                            //@synthesize _finalAudioMix=__finalAudioMix - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * _finalVideoComposition;                            //@synthesize _finalVideoComposition=__finalVideoComposition - In the implementation block
-(SCD_Struct_PF0)convertToScaledTimeFromOriginalTime:(SCD_Struct_PF0)arg1 forExport:(BOOL)arg2 ;
-(SCD_Struct_PF0)convertToOriginalTimeFromScaledTime:(SCD_Struct_PF0)arg1 forExport:(BOOL)arg2 ;
-(id)_getOrCreateTimeRangeMapperForExport:(BOOL)arg1 ;
-(SCD_Struct_PF1)slowMotionRampInRangeForExport:(BOOL)arg1 ;
-(SCD_Struct_PF1)slowMotionRampOutRangeForExport:(BOOL)arg1 ;
-(id)initWithVideoAsset:(id)arg1 videoAdjustments:(id)arg2 ;
-(void)requestPlayerItemWithResultHandler:(/*^block*/id)arg1 ;
-(PFVideoAdjustments *)videoAdjustments;
-(AVAsset *)videoAsset;
-(void)requestExportSessionWithExportPreset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)description;
-(void)requestAVAssetForExport:(BOOL)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)requestAVAssetWithResultHandler:(/*^block*/id)arg1 ;
-(id)initWithAsset:(id)arg1 audioMix:(id)arg2 videoComposition:(id)arg3 ;
-(PFSlowMotionTimeRangeMapper *)_timeRangeMapperForPlayback;
-(PFSlowMotionTimeRangeMapper *)_timeRangeMapperForExport;
-(AVAsset *)_finalAsset;
-(AVAudioMix *)_finalAudioMix;
-(AVVideoComposition *)_finalVideoComposition;
@end

