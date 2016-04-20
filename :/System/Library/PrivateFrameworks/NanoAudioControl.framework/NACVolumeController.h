/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NACVolumeController <NSObject>
@property (assign,nonatomic,__weak) id<NACVolumeControllerDelegate> delegate; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (getter=isVolumeWarningEnabled,nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volumeValue; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@property (assign,nonatomic) float hapticIntensity; 
@property (assign,getter=isSystemMuted,nonatomic) BOOL systemMuted; 
@required
-(void)setVolumeValue:(float)arg1;
-(void)setMuted:(BOOL)arg1;
-(float)EUVolumeLimit;
-(id)initWithAudioCategory:(id)arg1;
-(float)volumeValue;
-(void)setDelegate:(id)arg1;
-(id)init;
-(id<NACVolumeControllerDelegate>)delegate;
-(void)beginObservingVolume;
-(void)endObservingVolume;
-(void)setHapticIntensity:(float)arg1;
-(void)setSystemMuted:(BOOL)arg1;
-(BOOL)isVolumeControlAvailable;
-(BOOL)isVolumeWarningEnabled;
-(void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3;
-(float)hapticIntensity;
-(BOOL)isSystemMuted;
-(BOOL)isMuted;

@end

