/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PKAssertion, NSMutableSet, NSMutableIndexSet, NSDate, NSObject;

@interface PKAutomaticPassPresentationSuppressor : NSObject {

	PKAssertion* _suppressionAssertion;
	NSMutableSet* _permissionRequestCompletionBlocks;
	NSMutableIndexSet* _suppressionRequestTokens;
	NSMutableIndexSet* _backgrounedSuppressionIdentifiers;
	NSDate* _backgroundedDate;
	long long _permissionState;
	unsigned long long _nextRequestToken;
	NSObject*<OS_dispatch_queue> _suppressorQueue;

}

@property (nonatomic,readonly) BOOL isSuppressing; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)requestSuppressionWithResponseHandler:(/*^block*/id)arg1 ;
-(void)endSuppressionWithRequestToken:(unsigned long long)arg1 ;
-(BOOL)isSuppressing;
-(void)_requestPermissionAndAquireSupressionAssertionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_acquireSuppressionAssertionIfNeededWithCompletion:(/*^block*/id)arg1 ;
@end

