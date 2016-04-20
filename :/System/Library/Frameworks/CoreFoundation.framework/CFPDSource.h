/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject, CFPDDataBuffer;

@interface CFPDSource : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CFPDDataBuffer* _plist;
	CFArrayRef _pendingChangesQueue;
	unsigned long long _pendingChangesSize;
	CFStringRef _userName;
	CFStringRef _domain;
	const char* _actualPath;
	const char* _pathToTemporaryFileToWriteTo;
	NSObject*<OS_dispatch_group> _inProgressWriteGroup;
	unsigned _lastEuid;
	unsigned _lastEgid;
	int _owner;
	short _generationShmemIndex;
	unsigned _handlingRequest : 1;
	unsigned _dirty : 1;
	unsigned _byHost : 1;
	unsigned _managed : 1;
	unsigned _neverCache : 1;
	unsigned _checkedForNonPrefsPlist : 1;
	unsigned _hasDrainedPendingChangesSinceLastReplyToOwner : 1;
	unsigned _restrictedReadability : 1;
	unsigned _waitingForDeviceUnlock : 1;
	unsigned _unusedBits : 7;

}
+(void)withSourceCache:(/*^block*/id)arg1 ;
+(void)synchronousWithSourceCache:(/*^block*/id)arg1 ;
+(void)withSourceForDomain:(CFStringRef)arg1 inContainer:(CFStringRef)arg2 user:(CFStringRef)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 synchronously:(BOOL)arg6 perform:(/*^block*/id)arg7 ;
-(unsigned char)_backingPlistChangedSinceLastSync:(unsigned long long*)arg1 ;
-(BOOL)clearCacheIfStale:(unsigned long long*)arg1 ;
-(BOOL)acceptLocalMessage:(id)arg1 withReply:(CFDictionaryRef)arg2 inode:(unsigned long long*)arg3 ;
-(BOOL)shouldBePurgable;
-(void)cacheActualPathCreatingIfNecessary:(BOOL)arg1 euid:(unsigned)arg2 egid:(unsigned)arg3 ;
-(BOOL)getUncanonicalizedPath:(char*)arg1 ;
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5 ;
-(void)lockedAsync:(/*^block*/id)arg1 ;
-(void)lockedSync:(/*^block*/id)arg1 ;
-(BOOL)hasEverHadMultipleOwners;
-(void)transitionToMultiOwner;
-(CFStringRef)debugDump;
-(void)updateShmemEntry;
-(void)drainPendingChanges;
-(void)_writeToDisk:(BOOL)arg1 ;
-(void)markNeedsToReloadFromDiskDueToFailedWrite;
-(void)handleOpenForWritingFailureWithErrno:(int)arg1 ;
-(void)syncWriteToDisk;
-(void)syncWriteToDiskAndFlushCache;
-(void)cacheActualPath;
-(void)corruptedPlistFileDetected;
-(void)handleDeviceUnlock;
-(id)propertyListWithoutDrainingPendingChanges;
-(BOOL)validateAccessToken:(int)arg1 accessType:(int)arg2 ;
-(BOOL)validateSandboxForWrite:(id)arg1 containerPath:(const char*)arg2 ;
-(BOOL)validateSandboxForRead:(id)arg1 containerPath:(const char*)arg2 ;
-(int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(BOOL*)arg3 ;
-(int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char*)arg2 accessType:(int)arg3 ;
-(void)asyncWriteToDisk;
-(void)handleAvoidCache;
-(void)handleEUIDorEGIDMismatch;
-(void)cacheActualAndTemporaryPathsWithEUID:(unsigned)arg1 egid:(unsigned)arg2 ;
-(int)validateMessage:(id)arg1 withNewKey:(CFStringRef)arg2 newValue:(void*)arg3 currentPlistData:(id)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(void)enqueueNewKey:(CFStringRef)arg1 value:(void*)arg2 size:(unsigned long long)arg3 ;
-(void)handleRootWrite;
-(void)handleSynchronous;
-(void)handleNoPlistFound;
-(void)handleNeverCache;
-(void)beginHandlingRequest;
-(void)endHandlingRequest;
-(BOOL)managed;
-(void)addOwner:(id)arg1 ;
-(void)removeOwner;
-(BOOL)byHost;
-(short)shmemIndex;
-(void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long long)arg2 ;
-(id)acceptMessage:(id)arg1 ;
-(CFStringRef)user;
-(id)propertyList;
-(void)dealloc;
-(id)description;
-(CFStringRef)domain;
-(CFStringRef)container;
-(void)setDirty:(BOOL)arg1 ;
-(void)clearCache;
-(void)setPlist:(id)arg1 ;
@end

