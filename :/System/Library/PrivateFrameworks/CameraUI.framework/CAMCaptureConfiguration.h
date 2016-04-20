/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMCaptureConfiguration : NSObject {

	long long _mode;
	long long _device;
	long long _flashMode;
	long long _torchMode;
	long long _HDRMode;
	long long _timerDuration;
	long long _irisMode;
	long long _photoModeEffectFilterType;
	long long _squareModeEffectFilterType;

}

@property (nonatomic,readonly) long long mode;                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) long long device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long flashMode;                               //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) long long torchMode;                               //@synthesize torchMode=_torchMode - In the implementation block
@property (nonatomic,readonly) long long HDRMode;                                 //@synthesize HDRMode=_HDRMode - In the implementation block
@property (nonatomic,readonly) long long timerDuration;                           //@synthesize timerDuration=_timerDuration - In the implementation block
@property (nonatomic,readonly) long long irisMode;                                //@synthesize irisMode=_irisMode - In the implementation block
@property (nonatomic,readonly) long long photoModeEffectFilterType;               //@synthesize photoModeEffectFilterType=_photoModeEffectFilterType - In the implementation block
@property (nonatomic,readonly) long long squareModeEffectFilterType;              //@synthesize squareModeEffectFilterType=_squareModeEffectFilterType - In the implementation block
+(long long)audioConfigurationForMode:(long long)arg1 device:(long long)arg2 ;
-(long long)mode;
-(long long)flashMode;
-(long long)irisMode;
-(long long)device;
-(long long)torchMode;
-(long long)HDRMode;
-(long long)timerDuration;
-(long long)photoModeEffectFilterType;
-(long long)squareModeEffectFilterType;
-(id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 flashMode:(long long)arg3 torchMode:(long long)arg4 HDRMode:(long long)arg5 irisMode:(long long)arg6 timerDuration:(long long)arg7 photoModeEffectFilterType:(long long)arg8 squareModeEffectFilterType:(long long)arg9 ;
-(CAMCaptureModeWithOptions)currentModeWithOptions;
@end

