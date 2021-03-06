/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BiometricKitDelegate.h>

@protocol GAXTouchIDManagerDelegate;
@class BiometricKit, AXAccessQueueTimer, NSString;

@interface GAXTouchIDManager : NSObject <BiometricKitDelegate> {

	BOOL _touchIDCurrentlyActive;
	id<GAXTouchIDManagerDelegate> _delegate;
	BiometricKit* _biometricKit;
	AXAccessQueueTimer* _touchIDActiveTimer;

}

@property (assign,nonatomic) id<GAXTouchIDManagerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BiometricKit * biometricKit;                                              //@synthesize biometricKit=_biometricKit - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * touchIDActiveTimer;                                  //@synthesize touchIDActiveTimer=_touchIDActiveTimer - In the implementation block
@property (assign,getter=isTouchIDCurrentlyActive,nonatomic) BOOL touchIDCurrentlyActive;              //@synthesize touchIDCurrentlyActive=_touchIDCurrentlyActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateTouchIDActivationStatus:(BOOL)arg1 ;
-(void)setTouchIDActiveTimer:(AXAccessQueueTimer *)arg1 ;
-(BOOL)isTouchIDCurrentlyActive;
-(AXAccessQueueTimer *)touchIDActiveTimer;
-(void)setTouchIDCurrentlyActive:(BOOL)arg1 ;
-(void)cancelListeningForTouchIDAttempts;
-(void)brieflyListenForTouchIDAttempts;
-(BOOL)_loadBiometricKit;
-(void)setDelegate:(id<GAXTouchIDManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<GAXTouchIDManagerDelegate>)delegate;
-(BiometricKit *)biometricKit;
-(void)setBiometricKit:(BiometricKit *)arg1 ;
-(void)matchResult:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)homeButtonPressed;
@end

