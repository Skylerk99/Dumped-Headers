/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MBConnection, NSMutableDictionary, NSObject, NSString;

@interface MBBehaviorOptions : NSObject {

	MBConnection* _conn;
	NSMutableDictionary* _cachedPrefs;
	NSObject*<OS_dispatch_queue> _cachedPrefsQueue;

}

@property (nonatomic,copy) NSString * cloudKitContainerName; 
@property (assign,nonatomic) long long maxBatchCount; 
@property (assign,nonatomic) long long maxBatchSize; 
@property (assign,nonatomic) long long manifestPageSize; 
@property (assign,nonatomic) long long recordSaveAttempts; 
@property (assign,nonatomic) BOOL sqlTrace; 
@property (assign,nonatomic) long long maxDomainsToBackup; 
@property (assign,nonatomic) BOOL warnForLateiTunesBackups; 
@property (assign,nonatomic) long long sqlBatchCount; 
@property (assign,nonatomic) double sqlBatchTime; 
@property (assign,nonatomic) BOOL useBackgroundOperationsForBackup; 
@property (nonatomic,copy) NSString * minimumBuildVersionForFullBackup; 
@property (nonatomic,copy) NSString * minimumBuildVersionForPlaceholderCorrection; 
@property (nonatomic,retain) MBConnection * conn;                                               //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPrefs;                                 //@synthesize cachedPrefs=_cachedPrefs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedPrefsQueue;                     //@synthesize cachedPrefsQueue=_cachedPrefsQueue - In the implementation block
+(id)sharedOptions;
-(NSObject*<OS_dispatch_queue>)cachedPrefsQueue;
-(NSMutableDictionary *)cachedPrefs;
-(void)_startListeningForNotifications;
-(id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2 ;
-(int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2 ;
-(void)_setPref:(id)arg1 forKey:(id)arg2 ;
-(double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2 ;
-(id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setCachedPrefs:(NSMutableDictionary *)arg1 ;
-(void)setCachedPrefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)_behaviorContainerOptionForKey:(id)arg1 ;
-(id)_behaviorOptionForKey:(id)arg1 ;
-(long long)maxBatchSize;
-(void)setMaxBatchCount:(long long)arg1 ;
-(long long)maxBatchCount;
-(MBConnection *)conn;
-(void)setConn:(MBConnection *)arg1 ;
-(NSString *)cloudKitContainerName;
-(void)setCloudKitContainerName:(NSString *)arg1 ;
-(void)setMaxBatchSize:(long long)arg1 ;
-(long long)recordSaveAttempts;
-(void)setRecordSaveAttempts:(long long)arg1 ;
-(BOOL)sqlTrace;
-(void)setSQLTrace:(BOOL)arg1 ;
-(long long)manifestPageSize;
-(void)setManifestPageSize:(long long)arg1 ;
-(long long)maxDomainsToBackup;
-(void)setMaxDomainsToBackup:(long long)arg1 ;
-(BOOL)warnForLateiTunesBackups;
-(void)setWarnForLateiTunesBackups:(BOOL)arg1 ;
-(long long)sqlBatchCount;
-(void)setSqlBatchCount:(long long)arg1 ;
-(double)sqlBatchTime;
-(void)setSqlBatchTime:(double)arg1 ;
-(BOOL)useBackgroundOperationsForBackup;
-(void)setUseBackgroundOperationsForBackup:(BOOL)arg1 ;
-(NSString *)minimumBuildVersionForFullBackup;
-(void)setMinimumBuildVersionForFullBackup:(NSString *)arg1 ;
-(NSString *)minimumBuildVersionForPlaceholderCorrection;
-(void)setMinimumBuildVersionForPlaceholderCorrection:(NSString *)arg1 ;
@end

