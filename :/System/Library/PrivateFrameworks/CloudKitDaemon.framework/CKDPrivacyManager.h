/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface CKDPrivacyManager : NSObject {

	NSObject*<OS_dispatch_queue> _privacyManagerQueue;
	NSMutableSet* _requests;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> privacyManagerQueue;              //@synthesize privacyManagerQueue=_privacyManagerQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * requests;                                       //@synthesize requests=_requests - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)privacyManagerQueue;
-(void)_resetPrivacySettingsForAppContainerTuple:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetPrivacySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPrivacyManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)requests;
-(void)setRequests:(NSMutableSet *)arg1 ;
@end

