/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(float)estimatedDataRate;
-(SCD_Struct_CM5)samplePresentationTimeForTrackTime:(SCD_Struct_CM5)arg1 ;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned)_figMediaType;
-(int)trackID;
-(id)mediaType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEnabled;
-(id)asset;
-(CGSize)dimensions;
-(CGSize)naturalSize;
-(SCD_Struct_CM6)timeRange;
-(void)finalize;
-(CGAffineTransform)preferredTransform;
@end

