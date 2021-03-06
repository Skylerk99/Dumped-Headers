/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface _LSUserActivityWasContinuedInfo : NSObject {

	BOOL _submitted;
	BOOL _fromPairedDevice;
	BOOL _browserFallback;
	BOOL _cancelled;
	int _interactionType;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	unsigned long long _payloadSize;
	double _transferSpeed;
	double _transferDuration;
	NSError* _error;

}

@property (copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * activityType;                                 //@synthesize activityType=_activityType - In the implementation block
@property (getter=isFromPairedDevice) BOOL fromPairedDevice;              //@synthesize fromPairedDevice=_fromPairedDevice - In the implementation block
@property (getter=isBrowserFallback) BOOL browserFallback;                //@synthesize browserFallback=_browserFallback - In the implementation block
@property (assign) unsigned long long payloadSize;                        //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign) double transferSpeed;                                  //@synthesize transferSpeed=_transferSpeed - In the implementation block
@property (assign) double transferDuration;                               //@synthesize transferDuration=_transferDuration - In the implementation block
@property (copy) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                            //@synthesize cancelled=_cancelled - In the implementation block
@property (assign) int interactionType;                                   //@synthesize interactionType=_interactionType - In the implementation block
-(double)transferSpeed;
-(BOOL)isBrowserFallback;
-(void)submitWasSuggestedInfo;
-(BOOL)isFromPairedDevice;
-(void)setFromPairedDevice:(BOOL)arg1 ;
-(void)setBrowserFallback:(BOOL)arg1 ;
-(void)setTransferSpeed:(double)arg1 ;
-(void)setTransferDuration:(double)arg1 ;
-(double)transferDuration;
-(void)setActivityType:(NSString *)arg1 ;
-(NSError *)error;
-(id)description;
-(void)setInteractionType:(int)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)activityType;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(int)interactionType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)submit;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(unsigned long long)payloadSize;
@end

