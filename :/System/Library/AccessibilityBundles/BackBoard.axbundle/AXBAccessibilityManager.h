/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BackBoard/BackBoard-Structs.h>
@class AXSimpleRuntimeManager;

@interface AXBAccessibilityManager : NSObject {

	BOOL _voiceOverItemChooserVisible;
	AXSimpleRuntimeManager* _runtimeManager;
	BOOL _accelerometerDisabled;

}

@property (assign,nonatomic) BOOL accelerometerDisabled;                    //@synthesize accelerometerDisabled=_accelerometerDisabled - In the implementation block
@property (assign,nonatomic) BOOL voiceOverItemChooserVisible;              //@synthesize voiceOverItemChooserVisible=_voiceOverItemChooserVisible - In the implementation block
+(void)initializeAccessibilityMonitor;
+(void)updateAccessibilitySettings;
+(id)sharedManager;
-(BOOL)accelerometerDisabled;
-(void)observerClientDied;
-(void)setAccelerometerDisabled:(BOOL)arg1 ;
-(void)resetAccessibilityUIHitPort;
-(void)_releasePendingEvents:(double)arg1 ;
-(void)resetAssistiveTouchHitPort;
-(BOOL)_screenReaderCapture:(id)arg1 ;
-(id)_accessibilitySystemApp;
-(void)_startPassiveResendThread;
-(BOOL)_accessibilityEventTapCallback:(id)arg1 ;
-(void)_sendDeviceChangeEvent:(int)arg1 ;
-(BOOL)_handleItemChooserVisible:(unsigned)arg1 ;
-(void)_undoContextShiftedPoints:(id)arg1 ;
-(void)_sendCancelTouchEvent;
-(double)_processPassiveEventQueue;
-(int)_handlePidForSpecialCases:(unsigned)arg1 ;
-(void)_userEventOccurred;
-(BOOL)voiceOverItemChooserVisible;
-(void)_accessibilityRepostEvent:(id)arg1 ;
-(CGRect)accessibilityConvertHostedViewFrame:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(CGRect)accessibilityConvertHostedViewFrame:(CGRect)arg1 toContextId:(unsigned)arg2 ;
-(void)_setDeviceOrientationCapability:(BOOL)arg1 ;
-(id)_accessibilitySystemAppApplicationPid;
-(int)_accessibilityApplicationForContextId:(unsigned)arg1 ;
-(CGPoint)accessibilityConvertHostedViewPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)_accessibilityViewPointFromHostedViewContext:(CGPoint)arg1 ;
-(void)_sendPressFingerEvent:(BOOL)arg1 location:(CGPoint)arg2 force:(double)arg3 flags:(unsigned)arg4 contextId:(unsigned)arg5 ;
-(id)_accessibilitySpringBoardApplication;
-(id)_accessibilityUIServerApplication;
-(id)_accessibilityAssistiveTouchApplication;
-(void)_sendFingerEvent:(unsigned)arg1 location:(CGPoint)arg2 force:(double)arg3 flags:(unsigned)arg4 contextId:(unsigned)arg5 ;
-(void)simulatePressAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 withDelay:(float)arg3 withForce:(double)arg4 ;
-(CGPoint)_accessibilityConvertHostedViewPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(id)windowServerDisplayForDisplayId:(unsigned)arg1 ;
-(BOOL)_accessibilityDisplayRequiresRotateForPoints:(id)arg1 ;
-(BOOL)_accessibilityIsInternalInstall;
-(id)_accessibilitySystemAppApplicationBundleId;
-(void)initializeAccessibility;
-(void)disableAccessibility;
-(id)accessibilityAttributeValue:(int)arg1 ;
-(BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 ;
-(id)init;
-(void)setVoiceOverItemChooserVisible:(BOOL)arg1 ;
-(id)allJobLabels;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(int)arg2 ;
-(id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2 ;
@end

