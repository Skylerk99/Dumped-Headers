/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPContext;

@interface CDPSecureBackupController : NSObject {

	CDPContext* _context;

}

@property (nonatomic,readonly) CDPContext * context;              //@synthesize context=_context - In the implementation block
-(CDPContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)recoverSecureBackupWithSecret:(id)arg1 device:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_dateWithSecureBackupDateString:(id)arg1 ;
-(void)_enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)disableSecureBackupWithCompletion:(/*^block*/id)arg1 ;
-(void)getBackupRecordDevicesWithCompletion:(/*^block*/id)arg1 ;
-(id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)_sanitizedInfoDictionary:(id)arg1 ;
-(void)_recoverSecureBackupWithSecret:(id)arg1 isSilentAttempt:(BOOL)arg2 device:(id)arg3 useCachedSecret:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(int)_circleStatus;
-(void)isEligibleForCDPWithUIProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)backupRecordsArePresentWithCompletion:(/*^block*/id)arg1 ;
-(void)enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)attemptSilentRecoveryWithLocalSecret:(id)arg1 useCachedSecret:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllBackupRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)lockAccountOutWithCompletion:(/*^block*/id)arg1 ;
-(void)isAccountLockedWithCompletiom:(/*^block*/id)arg1 ;
@end

