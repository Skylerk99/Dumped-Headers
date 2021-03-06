/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsOperationInfo : CKOperationInfo {

	long long _discoverable;
	NSString* _applicationBundleID;

}

@property (assign,nonatomic) long long discoverable;                    //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;              //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
-(id)init;
-(NSString *)applicationBundleID;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
@end

