/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFDeviceLockController.h>

@class SecureBackup;

@interface SBDeviceLockController : SBFDeviceLockController {

	SecureBackup* _secureBackupHelper;
	BOOL _inSecureMode;

}
+(id)_sharedControllerCreateIfNecessary:(BOOL)arg1 ;
+(id)sharedController;
-(void)_setSecureMode:(BOOL)arg1 postNotification:(BOOL)arg2 ;
-(BOOL)_isInSecureMode;
-(BOOL)shouldAllowUnlockToApplication:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)_shouldSuppressLockOnInit;
-(void)_lockStateChangedFrom:(int)arg1 to:(int)arg2 ;
-(BOOL)_shouldLockDeviceNow;
-(BOOL)attemptDeviceUnlockWithPassword:(id)arg1 appRequested:(BOOL)arg2 ;
-(void)_wipeDevice;
-(void)setBlockedForThermalCondition:(BOOL)arg1 ;
-(void)_cachePassword:(id)arg1 ;
-(void)_uncachePasscodeIfNecessary;
-(void)_keybagLockStateChangedTo:(int)arg1 ;
@end

