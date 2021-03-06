/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BackBoard/BackBoard-Structs.h>
@class NSString, AXAccessQueueTimer, NSMutableArray, NSLock;

@interface AXBHomeClickController : NSObject {

	BOOL _isAlertVisible;
	NSString* _eventTapIdentifier;
	SCRCMathAverageValue _xMotion;
	SCRCMathAverageValue _yMotion;
	double _startMotion;
	AXAccessQueueTimer* _shakeCancelerTimer;
	NSMutableArray* _menuButtonClientIds;
	NSLock* _menuButtonLock;
	BOOL isHearingAidControlVisible;
	BOOL switchControlRendersDeviceUnusable;
	BOOL _didShowHoldDurationTripleClickHelp;

}

@property (assign,nonatomic) BOOL isHearingAidControlVisible; 
@property (assign,nonatomic) BOOL switchControlRendersDeviceUnusable; 
@property (assign,nonatomic) BOOL didShowHoldDurationTripleClickHelp;              //@synthesize didShowHoldDurationTripleClickHelp=_didShowHoldDurationTripleClickHelp - In the implementation block
+(void)initializeMonitor;
+(id)controller;
-(void)_toggleGrayscale;
-(BOOL)isHearingAidControlVisible;
-(void)_updateHomeClickEnabled;
-(void)_updateTripleHomeSettings:(BOOL)arg1 ;
-(void)_springBoardDied:(id)arg1 ;
-(void)_toggleVoiceOver;
-(void)_toggleTouchAccommodations;
-(void)_toggleSwitchOver;
-(BOOL)_captureKeyboardCommands:(SCD_Struct_AX1*)arg1 ;
-(void)_updateHomeClickSpeed;
-(void)_toggleZoomOffMainThread;
-(void)_handleZoomInBuddyAlertResult:(long long)arg1 ;
-(BOOL)captureHomeClick:(id)arg1 ;
-(void)_triggerAppTransition;
-(void)setIsHearingAidControlVisible:(BOOL)arg1 ;
-(BOOL)_purpleBuddySetupComplete;
-(void)_toggleSwitchOverOffMainThread;
-(id)_eventTapIdentifier;
-(void)_setHearingAidControlVisible:(BOOL)arg1 ;
-(void)_toggleGuidedAccess;
-(void)_updateEventTapSettings;
-(void)_toggleAssistiveTouch;
-(void)_startVoiceOverSequence;
-(void)_fireHomeButtons:(BOOL)arg1 ;
-(void)_toggleWhiteOnBlack;
-(void)_toggleDisplayAskSheet;
-(void)_appTransition;
-(void)_didHideAlert;
-(void)_toggleZoom;
-(void)_willShowAlert;
-(void)_toggleWhiteOnBlackOffMainThread;
-(void)_toggleAssistiveTouchOffMainThread;
-(BOOL)didShowHoldDurationTripleClickHelp;
-(void)setDidShowHoldDurationTripleClickHelp:(BOOL)arg1 ;
-(BOOL)_checkIfZoomWasActivated:(id)arg1 stealEvent:(BOOL*)arg2 ;
-(void)_handleZoomActivationDuringBuddy;
-(BOOL)switchControlRendersDeviceUnusable;
-(void)dealloc;
-(void)initialize;
-(void)setSwitchControlRendersDeviceUnusable:(BOOL)arg1 ;
@end

