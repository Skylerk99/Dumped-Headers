/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKRequestDelegate;
@class SKPaymentQueueClient, SKXPCConnection;

@interface SKRequestInternal : NSObject {

	long long _backgroundTaskIdentifier;
	SKPaymentQueueClient* _client;
	SKXPCConnection* _connection;
	id<SKRequestDelegate> _delegate;
	long long _state;

}
-(void)dealloc;
@end

