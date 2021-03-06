/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CMKBlurredSnapshotView : UIView {

	BOOL _blurred;
	BOOL _dimmed;
	BOOL __supportsBlur;
	long long _style;
	UIView* _snapshotView;
	UIView* __lowQualityBlurView;
	UIView* __dimmingView;
	CGRect _targetFrame;

}

@property (assign,nonatomic) long long style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * snapshotView;                     //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) BOOL blurred;                                //@synthesize blurred=_blurred - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                 //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                          //@synthesize targetFrame=_targetFrame - In the implementation block
@property (nonatomic,readonly) BOOL _supportsBlur;                        //@synthesize _supportsBlur=__supportsBlur - In the implementation block
@property (nonatomic,readonly) UIView * _lowQualityBlurView;              //@synthesize _lowQualityBlurView=__lowQualityBlurView - In the implementation block
@property (nonatomic,readonly) UIView * _dimmingView;                     //@synthesize _dimmingView=__dimmingView - In the implementation block
-(UIView *)snapshotView;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UIView *)_dimmingView;
-(id)initWithView:(id)arg1 ;
-(void)setTargetFrame:(CGRect)arg1 ;
-(CGRect)targetFrame;
-(void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_applySnapshotBlurAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_removeSnapshotBlurAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_applyLowQualityBlurAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_removeLowQualityBlurAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_prepareForApplyingBlurAnimation:(BOOL)arg1 inputRadiusAmount:(double*)arg2 inputRadiusDuration:(double*)arg3 inputRadiusDelay:(double*)arg4 inputRadiusTimingFunction:(id*)arg5 opacityAmount:(double*)arg6 opacityDuration:(double*)arg7 opacityDelay:(double*)arg8 opacityTimingFunction:(id*)arg9 ;
-(void)_prepareForApplyingLowQualityBlurAnimation:(BOOL)arg1 opacityAmount:(double*)arg2 opacityDuration:(double*)arg3 opacityDelay:(double*)arg4 opacityTimingFunction:(id*)arg5 targetView:(id*)arg6 ;
-(void)setBlurred:(BOOL)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_applySnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_removeSnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_setupBlurOnSnapshot;
-(UIView *)_lowQualityBlurView;
-(void)_setupLowQualityBlurOnSnapshot;
-(void)_setupDimOnSnapshot;
-(BOOL)blurred;
-(BOOL)dimmed;
-(BOOL)_supportsBlur;
@end

