/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, NSArray, NSMutableDictionary;

@interface CKDGetSubscriptionsURLRequest : CKDURLRequest {

	NSMutableArray* _subscriptions;
	/*^block*/id _subscriptionFetchedBlock;
	NSArray* _subscriptionIDs;
	NSMutableDictionary* _subscriptionIDByRequestID;

}

@property (nonatomic,retain) NSArray * subscriptions;                                      //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,copy) id subscriptionFetchedBlock;                                    //@synthesize subscriptionFetchedBlock=_subscriptionFetchedBlock - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDs;                                    //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionIDByRequestID;              //@synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID - In the implementation block
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSMutableDictionary *)subscriptionIDByRequestID;
-(void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg1 ;
-(NSArray *)subscriptionIDs;
-(NSArray *)subscriptions;
-(id)subscriptionFetchedBlock;
-(id)initWithSubscriptionIDs:(id)arg1 ;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(void)setSubscriptionFetchedBlock:(id)arg1 ;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(int)operationType;
@end

