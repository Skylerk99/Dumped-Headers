/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation {

	BOOL _isFetchAllSubscriptionsOperation;
	NSArray* _subscriptions;
	/*^block*/id _subscriptionFetchedProgressBlock;
	NSArray* _subscriptionIDs;

}

@property (nonatomic,retain) NSArray * subscriptions;                            //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,copy) id subscriptionFetchedProgressBlock;                  //@synthesize subscriptionFetchedProgressBlock=_subscriptionFetchedProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDs;                          //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;              //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSubscriptionFetchedProgressBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)subscriptionIDs;
-(NSArray *)subscriptions;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(id)subscriptionFetchedProgressBlock;
-(void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3 ;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
@end

