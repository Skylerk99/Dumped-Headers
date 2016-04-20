/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVWeakReferencingDelegateStorage, AVCaptureIrisStillImageSettings, AVCaptureIrisResolvedStillImageSettings;

@interface AVCaptureIrisRequest : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	unsigned _callbacksFired;
	AVCaptureIrisStillImageSettings* _unresolvedSettings;
	AVCaptureIrisResolvedStillImageSettings* _resolvedSettings;
	unsigned _firedCallbackFlags;

}

@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;                              //@synthesize delegateStorage=_delegateStorage - In the implementation block
@property (readonly) AVCaptureIrisStillImageSettings * unresolvedSettings;                            //@synthesize unresolvedSettings=_unresolvedSettings - In the implementation block
@property (nonatomic,retain) AVCaptureIrisResolvedStillImageSettings * resolvedSettings;              //@synthesize resolvedSettings=_resolvedSettings - In the implementation block
@property (assign,nonatomic) unsigned firedCallbackFlags;                                             //@synthesize firedCallbackFlags=_firedCallbackFlags - In the implementation block
+(id)requestWithDelegate:(id)arg1 settings:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 settings:(id)arg2 ;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(AVCaptureIrisStillImageSettings *)unresolvedSettings;
-(AVCaptureIrisResolvedStillImageSettings *)resolvedSettings;
-(void)setResolvedSettings:(AVCaptureIrisResolvedStillImageSettings *)arg1 ;
-(unsigned)firedCallbackFlags;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(void)dealloc;
@end

