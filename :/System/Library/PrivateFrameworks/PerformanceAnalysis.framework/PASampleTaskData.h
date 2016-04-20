/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PASerializable.h>

@class NSArray, PASampleTimeInsensitiveTaskData, PASampleTaskDataPrivateData, NSSet, NSString, NSUUID;

@interface PASampleTaskData : NSObject <PASerializable> {

	NSArray* sampleThreadsArray;
	PASampleTimeInsensitiveTaskData* _timeInsensitiveTaskData;
	PASampleTaskDataPrivateData* _privateData;
	NSSet* _donatingPids;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int pid; 
@property (readonly) int ppid; 
@property (readonly) int rpid; 
@property (readonly) unsigned uid; 
@property (readonly) unsigned long long uniqueId; 
@property (readonly) NSString * name; 
@property (readonly) NSString * bundleName; 
@property (readonly) NSString * mainBinaryPath; 
@property (readonly) NSArray * imageInfos; 
@property (readonly) NSUUID * mainBinaryUuid; 
@property (readonly) unsigned long long mainBinaryOffset; 
@property (readonly) NSUUID * sharedCacheUUID; 
@property (readonly) unsigned long long sharedCacheOffset; 
@property (readonly) unsigned long long sharedCacheStart; 
@property (readonly) unsigned long long sharedCacheLength; 
@property (readonly) BOOL isUnresponsive; 
@property (readonly) double timeOfLastResponse; 
@property (readonly) BOOL usesSuddenTermination; 
@property (readonly) BOOL allowsIdleExit; 
@property (readonly) BOOL isDirty; 
@property (readonly) BOOL workQueueExceededConstrainedThreadLimit; 
@property (readonly) BOOL workQueueExceededTotalThreadLimit; 
@property (readonly) BOOL isThirdParty; 
@property (readonly) int suspendCount; 
@property (readonly) int taskSizeInPages; 
@property (readonly) int numberOfPageFaults; 
@property (readonly) int numberOfPageIns; 
@property (readonly) int numberOfCopyOnWritePageFaults; 
@property (readonly) unsigned latency_qos; 
@property (retain) NSSet * donatingPids;                                        //@synthesize donatingPids=_donatingPids - In the implementation block
@property (readonly) double mostRecentTimeSamplingOnlyMainThread; 
@property (readonly) unsigned ss_flags; 
@property (readonly) BOOL isTaskResourceFlagged; 
@property (readonly) BOOL isTerminatedSnapshot; 
@property (readonly) BOOL isPidSuspended; 
@property (readonly) BOOL isFrozen; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL isDarwinExtBG; 
@property (readonly) BOOL isVisible; 
@property (readonly) BOOL isNonVisible; 
@property (readonly) BOOL isForeground; 
@property (readonly) BOOL isBoosted; 
@property (readonly) BOOL isSuppressed; 
@property (readonly) BOOL isTimerThrottled; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(int)suspendCount;
-(void)dealloc;
-(NSString *)debugDescription;
-(NSString *)name;
-(BOOL)isFrozen;
-(BOOL)isVisible;
-(unsigned long long)uniqueId;
-(unsigned)uid;
-(BOOL)isForeground;
-(unsigned long long)sharedCacheStart;
-(unsigned long long)sharedCacheLength;
-(NSArray *)imageInfos;
-(unsigned long long)sharedCacheOffset;
-(NSUUID *)sharedCacheUUID;
-(BOOL)isUnresponsive;
-(BOOL)isDarwinBG;
-(BOOL)isSuppressed;
-(unsigned)ss_flags;
-(unsigned long long)mainBinaryOffset;
-(double)mostRecentTimeSamplingOnlyMainThread;
-(NSUUID *)mainBinaryUuid;
-(BOOL)isTerminatedSnapshot;
-(int)ppid;
-(int)rpid;
-(NSString *)mainBinaryPath;
-(id)architectureString;
-(double)timeOfLastResponse;
-(BOOL)usesSuddenTermination;
-(BOOL)allowsIdleExit;
-(BOOL)workQueueExceededConstrainedThreadLimit;
-(BOOL)workQueueExceededTotalThreadLimit;
-(BOOL)isThirdParty;
-(int)taskSizeInPages;
-(int)numberOfPageIns;
-(BOOL)isBoosted;
-(NSSet *)donatingPids;
-(unsigned)latency_qos;
-(BOOL)isTaskResourceFlagged;
-(BOOL)isPidSuspended;
-(BOOL)isDarwinExtBG;
-(BOOL)isNonVisible;
-(BOOL)isTimerThrottled;
-(int)numberOfPageFaults;
-(int)numberOfCopyOnWritePageFaults;
-(id)timeInsensitiveTaskData;
-(id)initWithStackshotTask:(id)arg1 andTimeInsensitiveTaskData:(id)arg2 ;
-(BOOL)isSameAsTask:(id)arg1 ;
-(void)setDonatingPids:(NSSet *)arg1 ;
-(BOOL)isDirty;
-(int)pid;
-(NSString *)bundleName;
@end

