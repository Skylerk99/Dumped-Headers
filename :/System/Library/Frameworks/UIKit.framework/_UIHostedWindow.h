/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@class UITraitCollection, UIColor, _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow {

	BOOL _wantsTraitPropagation;
	BOOL __hostViewUnderlapsStatusBar;
	long long _hostTintAdjustmentMode;
	UITraitCollection* _hostTraitCollection;
	UIColor* __hostTintColor;

}

@property (nonatomic,readonly) _UIHostedWindowHostingHandle * hostingHandle; 
@property (assign,setter=_setHostTintAdjustmentMode:,nonatomic) long long _hostTintAdjustmentMode;                  //@synthesize hostTintAdjustmentMode=_hostTintAdjustmentMode - In the implementation block
@property (setter=_setHostTraitCollection:,nonatomic,retain) UITraitCollection * _hostTraitCollection;              //@synthesize hostTraitCollection=_hostTraitCollection - In the implementation block
@property (assign,setter=_setWantsTraitPropigation:,nonatomic) BOOL _wantsTraitPropagation;                         //@synthesize wantsTraitPropagation=_wantsTraitPropagation - In the implementation block
@property (setter=_setHostTintColor:,nonatomic,retain) UIColor * _hostTintColor;                                    //@synthesize _hostTintColor=__hostTintColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)_needsShakesWhenInactive;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_isConstrainedByScreenJail;
-(BOOL)_usesWindowServerHitTesting;
-(void)setScreen:(id)arg1 ;
-(long long)_orientationForViewTransform;
-(long long)_orientationForRootTransform;
-(void)_updateTransformLayerForClassicPresentation;
-(void)_configureContextOptions:(id)arg1 ;
-(void)_updateWindowTraitsAndNotify:(BOOL)arg1 ;
-(BOOL)_shouldPropigateTraitCollectionChanges;
-(id)_traitCollectionForSize:(CGSize)arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(long long)arg3 virtualVerticalSizeClass:(long long)arg4 ;
-(BOOL)_canPromoteFromKeyWindowStack;
-(void)_updateAppTintView;
-(void)_registerScrollToTopView:(id)arg1 ;
-(void)_unregisterScrollToTopView:(id)arg1 ;
-(id)_normalInheritedTintColor;
-(BOOL)__hostViewUnderlapsStatusBar;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(long long)_defaultTintAdjustmentMode;
-(unsigned)contextID;
-(_UIHostedWindowHostingHandle *)hostingHandle;
-(UIColor *)_hostTintColor;
-(long long)_hostTintAdjustmentMode;
-(void)_setWantsTraitPropigation:(BOOL)arg1 ;
-(void)_setHostTintAdjustmentMode:(long long)arg1 ;
-(void)_setHostTraitCollection:(id)arg1 ;
-(BOOL)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(double)arg3 ;
-(UITraitCollection *)_hostTraitCollection;
-(BOOL)_wantsTraitPropagation;
-(void)_setHostTintColor:(id)arg1 ;
@end

