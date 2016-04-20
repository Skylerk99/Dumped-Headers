/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSRecursiveLock, IMTimer;

@interface IDSAppleRegistrationKeyManager : NSObject {

	NSRecursiveLock* _lock;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;
	IMTimer* _purgeTimer;
	IMTimer* _cleanupOldIdentityTimer;
	IMTimer* _regenerateIdentityTimer;
	BOOL _loaded;
	BOOL _identityLoaded;
	BOOL _detectedMigrationNeeded;
	BOOL _needsReRegister;
	BOOL _pendingIdentityRegeneration;
	IDSRegistrationKeyConfig* _config;

}
+(BOOL)setupKeys;
+(id)sharedInstance;
-(void)_loadIfNeeded:(BOOL)arg1 ;
-(void)regeneratePairingIdentitiesIncludingClassD:(BOOL)arg1 ;
-(void)loadPairingIdentities:(BOOL)arg1 ;
-(BOOL)_isUnderFirstDataProtectionLock;
-(void)_generateUnregisteredIdentity;
-(void)_notifyUnregisteredIdentityRegenerated;
-(void)_regenerateIdentityTimerHit;
-(id)_getPublicMessageProtectionDataForIdentity:(SecMPFullIdentityRef)arg1 ;
-(void)_loadClassAIdentityIfNeeded:(int*)arg1 ;
-(void)_loadClassCIdentityIfNeeded:(int*)arg1 ;
-(void)_loadClassDIdentityIfNeeded:(int*)arg1 ;
-(SecMPFullIdentityRef)latestCopyMessageProtectionIdentityForDataProtectionClass:(unsigned)arg1 ;
-(void)_generateIdentity:(SecMPFullIdentity*)arg1 withKeychainDataProtectionClass:(unsigned)arg2 ;
-(void)_saveClassXIdentity:(SecMPFullIdentity*)arg1 savedIdentity:(SecMPFullIdentity*)arg2 protectionClass:(unsigned)arg3 savedUnsavedIdentity:(BOOL*)arg4 ;
-(void)_purgeOldIdentity;
-(id)publicMessageProtectionDataToRegister;
-(void)_ensureIdentity:(SecMPFullIdentity*)arg1 savedIndentity:(SecMPFullIdentity*)arg2 protectionClass:(unsigned)arg3 didSaveIdentity:(BOOL*)arg4 ;
-(id)publicMessageProtectionDataToRegisterForClassA;
-(id)publicMessageProtectionDataToRegisterForClassC;
-(id)publicMessageProtectionDataToRegisterForClassD;
-(void)_purgeIdentity:(SecMPFullIdentityRef)arg1 error:(_CFError*)arg2 ;
-(void)generatePairingIdentitiesShouldRegenerateClassD:(BOOL)arg1 ;
-(BOOL)requiresKeychainMigration;
-(BOOL)_isSecurelyStoringIdentity:(SecMPFullIdentityRef)arg1 withExpectedProtectionClass:(unsigned)arg2 ;
-(CFStringRef)_copySecAttrDataProtectionClassForIdentity:(SecMPFullIdentityRef)arg1 ;
-(BOOL)_migrateIdentity:(SecMPFullIdentityRef)arg1 toProtectionClass:(unsigned)arg2 ;
-(BOOL)_migrateIdentity:(SecMPFullIdentityRef)arg1 toSecAttrDataProtectionClass:(void*)arg2 ;
-(id)generateCSRForUserID:(id)arg1 ;
-(SecMPFullIdentityRef)copyMessageProtectionIdentity;
-(SecMPFullIdentityRef)copyOldMessageProtectionIdentity;
-(id)publicMessageProtectionData;
-(void)didRegisterIdentity;
-(void)purgeMessageProtectionIdentity;
-(id)keyPairSignature;
-(void)regenerateRegistrationIdentity;
-(BOOL)needsPublicDataUpdated;
-(BOOL)isMigratedKeyPairSignature;
-(BOOL)isUsingSecureStorageForClassA;
-(BOOL)isUsingSecureStorageForClassC;
-(BOOL)migrateToSecureStorageForClassA;
-(BOOL)migrateToSecureStorageForClassC;
-(void)dealloc;
-(id)init;
-(void)_save;
-(void)_purgeMap;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)_setPurgeTimer;
-(_SecKey*)identityPrivateKey;
-(_SecKey*)identityPublicKey;
@end

