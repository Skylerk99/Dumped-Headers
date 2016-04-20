/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUUtility : NSObject
+(id)errorWithCode:(long long)arg1 ;
+(id)taskQueue;
+(id)gregorianCalendar;
+(unsigned long long)cacheDelete:(id)arg1 ;
+(BOOL)createInstallationKeybag:(id)arg1 ;
+(id)currentProductVersion;
+(id)currentProductBuild;
+(id)currentProductType;
+(id)currentReleaseType;
+(void)assignError:(id*)arg1 withCode:(long long)arg2 ;
+(void)assignError:(id*)arg1 withError:(id)arg2 translate:(BOOL)arg3 ;
+(BOOL)isDaemon;
+(unsigned long long)totalPurgeableSpace:(id)arg1 ;
+(BOOL)createInstallationKeybag:(id)arg1 forUnattendedInstall:(BOOL)arg2 ;
+(int)installationKeybagState;
+(BOOL)isPasswordProtected;
+(id)errorWithCode:(long long)arg1 originalError:(id)arg2 ;
+(id)translateError:(id)arg1 ;
+(id)translateError:(id)arg1 withAddedUserInfo:(id)arg2 ;
+(long long)translateErrorCodeFromError:(id)arg1 ;
+(long long)sortAppsToPurge:(id)arg1 sortedArray:(id*)arg2 spaceNeeded:(id)arg3 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 deltaSpaceNeeded:(unsigned long long*)arg2 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 deltaSpaceNeeded:(unsigned long long*)arg2 isAutoDownload:(BOOL)arg3 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 deltaSpaceNeeded:(unsigned long long*)arg2 isAutoDownload:(BOOL)arg3 includePurging:(BOOL)arg4 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 deltaSpaceNeeded:(unsigned long long*)arg2 isAutoDownload:(BOOL)arg3 disableCDLevelFour:(BOOL)arg4 disableCDLevelThree:(BOOL)arg5 disableSiriDeletion:(BOOL)arg6 disableAppDemotion:(BOOL)arg7 ;
+(unsigned long long)appDemoteableSpace;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(BOOL)arg3 ;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(BOOL)arg3 disableCDLevelFour:(BOOL)arg4 disableSiriDeletion:(BOOL)arg5 disableAppDemotion:(BOOL)arg6 ;
+(unsigned long long)demoteApps:(unsigned long long)arg1 withError:(id*)arg2 ;
+(BOOL)isRestoringFromCloud;
+(void)setIsDaemon:(BOOL)arg1 ;
+(BOOL)isWiFiCapable;
+(BOOL)isCellularDataCapable;
+(BOOL)hasCellularRadio;
+(BOOL)cellularDataIsEnabled;
+(id)currentProductCategory;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 ;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 ;
+(id)URLIfFileExists:(id)arg1 ;
+(id)addToDate:(id)arg1 numberOfDays:(long long)arg2 ;
+(id)prettyPrintDate:(id)arg1 ;
+(BOOL)isPasscodeLocked;
+(id)serialNumber;
+(void)setCacheable:(BOOL)arg1 ;
@end

