/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAutoRotatingWindow.h>
#import <UIKit/_UIScreenBasedObject.h>

@class NSDictionary, NSString, UIScreen;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject> {

	BOOL _inDealloc;
	unsigned long long _activeEffectsCount;
	double _defaultWindowLevel;
	CGPoint _hostedWindowOffset;
	NSDictionary* _perScreenOptions;
	unsigned long long _activeRemoteViewCount;
	unsigned long long _windowLevelCount;
	double _windowLevelStack[5];
	CGSize _hostedSceneSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned contextID; 
@property (assign,nonatomic) double defaultWindowLevel;               //@synthesize defaultWindowLevel=_defaultWindowLevel - In the implementation block
@property (assign,nonatomic) CGPoint hostedWindowOffset;              //@synthesize hostedWindowOffset=_hostedWindowOffset - In the implementation block
@property (nonatomic,readonly) CGRect hostedFrame; 
@property (assign,nonatomic) CGSize hostedSceneSize;                  //@synthesize hostedSceneSize=_hostedSceneSize - In the implementation block
+(id)activeTextEffectsWindowForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindowForScreen:(id)arg1 ;
+(id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(BOOL)arg2 allowHosted:(BOOL)arg3 matchesStatusBarOrientationOnAccess:(BOOL)arg4 ;
+(id)sharedTextEffectsWindow;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(void)releaseSharedInstances;
+(void)raiseTextEffectsWindowsForShowNotificationCenter;
+(void)lowerTextEffectsWindowsForHideNotificationCenter;
-(NSDictionary *)_options;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(id)_initBasicWithScreen:(id)arg1 options:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(long long)interfaceOrientation;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(void)_updateTransformLayer;
-(BOOL)_isTextEffectsWindow;
-(CGRect)_sceneReferenceBounds;
-(BOOL)_shouldTintStatusBar;
-(void)_willSnapshot;
-(void)_didSnapshot;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(BOOL)_shouldParticipateInVirtualResizing;
-(BOOL)_canAffectStatusBarAppearance;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(CGRect)_sceneBounds;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(BOOL)isInternalWindow;
-(void)_sceneBoundsDidChange;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(void)_updateTransformLayerForClassicPresentation;
-(void)_configureContextOptions:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(BOOL)_shouldResizeWithScene;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(void)didAddSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(CGRect)actualSceneBounds;
-(CGPoint)hostedWindowOffset;
-(void)_matchDeviceOrientation;
-(CGSize)hostedSceneSize;
-(CGRect)actualSceneBoundsForLandscape:(BOOL)arg1 ;
-(BOOL)_isFullscreen;
-(void)setDefaultWindowLevel:(double)arg1 ;
-(double)defaultWindowLevel;
-(void)_commonTextEffectsInit;
-(CGPoint)_forHostedProcessConvertPoint:(CGPoint)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(CGRect)_forHostedProcessConvertRect:(CGRect)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(void)delayHideWindow;
-(void)sortSubviews;
-(void)updateForOrientation:(long long)arg1 ;
-(void)updateForOrientation:(long long)arg1 forceResetTransform:(BOOL)arg2 ;
-(id)aboveStatusBarWindow;
-(unsigned)contextID;
-(void)_setWindowLevel:(double)arg1 ;
-(void)_restoreWindowLevel;
-(CGRect)hostedFrame;
-(CGPoint)magnifierConvertPoint:(CGPoint)arg1 forWindow:(id)arg2 ;
-(void)resetTransform;
-(void)updateSubviewOrdering;
-(void)setHostedWindowOffset:(CGPoint)arg1 ;
-(void)setHostedSceneSize:(CGSize)arg1 ;
@end

