/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.sbd.xpc/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.sbd/SecureBackupProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSData, NSError, NSObject, NSString;

@interface SecureBackupDaemon : NSObject <SecureBackupProtocol, NSXPCListenerDelegate> {

	BOOL _needInitialBackup;
	NSURL* _cacheDirURL;
	NSData* _iCDPKeybag;
	NSError* _KVSError;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (retain) NSURL * cacheDirURL;                                                //@synthesize cacheDirURL=_cacheDirURL - In the implementation block
@property (retain,readonly) NSURL * cachedKeychainURL; 
@property (retain,readonly) NSURL * cachedManifestURL; 
@property (readonly) NSData * iCDPKeybag;                                              //@synthesize iCDPKeybag=_iCDPKeybag - In the implementation block
@property (retain) NSError * KVSError;                                                 //@synthesize KVSError=_KVSError - In the implementation block
@property (readonly) BOOL forceICDP; 
@property (retain,readonly) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (assign) BOOL needInitialBackup;                                             //@synthesize needInitialBackup=_needInitialBackup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_getProtectedKeychainAndKeybagDigestFromKVS:(id*)arg1 ;
-(void)_storeProtectedKeychainInKVS:(id)arg1 keybagDigest:(id)arg2 ;
-(void)_removeCachedKeychain;
-(id)_getKeychainItemForKey:(id)arg1 status:(int*)arg2 ;
-(id)_backupFullKeychain;
-(id)_pushCachedKeychainToKVS;
-(id)_backupKeychainFully:(BOOL)arg1 ;
-(BOOL)_backupEnabled;
-(id)_setAutobackupEnabled:(BOOL)arg1 ;
-(BOOL)_usesEscrow;
-(int)_checkEscrowTrust;
-(id)_consumeFullBackup;
-(id)_consumeBackupJournal;
-(void)_removeKeychainItemForKey:(id)arg1 ;
-(void)_removeKVSKeybag;
-(void)_removeMetadata;
-(void)_removeProtectedKeychain;
-(void)_setBackupEnabled:(BOOL)arg1 ;
-(void)_removeVeeTwoBackup;
-(id)_createBackupKeybagWithPassword:(id)arg1 ;
-(void)_saveKeychainItem:(id)arg1 forKey:(id)arg2 ;
-(void)_storeVeeTwoBackupInKVS:(id)arg1 ;
-(id)derDataFromDict:(id)arg1 ;
-(void)storeDERBackupInKVS:(id)arg1 ;
-(id)_getVeeTwoBackupFromKVS;
-(id)_getDERBackupFromKVS;
-(id)_getLastBackupTimestamp;
-(void)_setUsesEscrow:(BOOL)arg1 ;
-(void)_removeUsesEscrow;
-(id)_metadata;
-(void)_setBackupUUID:(id)arg1 ;
-(id)_getBackupUUID;
-(void)_setKVSKeybag:(id)arg1 ;
-(id)_KVSKeybag;
-(id)_backupKeychain;
-(void)_disableBackup;
-(void)disableiCDPBackup;
-(id)normalizeSMSTarget:(id)arg1 error:(id*)arg2 ;
-(void)_setMetadata:(id)arg1 ;
-(NSURL *)cachedKeychainURL;
-(void)setNeedInitialBackup:(BOOL)arg1 ;
-(void)setCacheDirURL:(NSURL *)arg1 ;
-(NSURL *)cacheDirURL;
-(BOOL)needInitialBackup;
-(void)_handleKVStoreChangedNotification:(id)arg1 ;
-(id)massageIncomingMetadataFromInfo:(id)arg1 ;
-(id)filteriCDPRecords:(id)arg1 ;
-(BOOL)forceICDP;
-(NSError *)KVSError;
-(void)setKVSError:(NSError *)arg1 ;
-(id)massageOutgoingMetadataFromInfo:(id)arg1 ;
-(id)restoreBackup:(id)arg1 withName:(id)arg2 recordID:(id)arg3 keybag:(id)arg4 password:(id)arg5 ;
-(id)recordIDForSilentAttempt:(id)arg1 passphraseLength:(unsigned long long*)arg2 ;
-(id)_restoreKeychainWithBackupBag:(id)arg1 password:(id)arg2 recordID:(id)arg3 ;
-(void)deleteAlliCDPRecordsWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSURL *)cachedManifestURL;
-(NSData *)iCDPKeybag;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)enableWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)recoverWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disableWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)updateMetadataWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)uncachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getCountrySMSCodesWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)backupWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)backOffDateWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setBackOffDateWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cachePassphraseWithInfoAsync:(id)arg1 ;
-(void)uncachePassphraseWithInfoAsync:(id)arg1 ;
-(void)notificationOccurred:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
@end

