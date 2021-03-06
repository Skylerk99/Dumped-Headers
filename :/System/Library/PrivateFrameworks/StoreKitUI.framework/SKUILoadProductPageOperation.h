/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject, SSMetricsPageEvent, NSURLRequest;

@interface SKUILoadProductPageOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _itemID;
	SSMetricsPageEvent* _metricsPageEvent;
	/*^block*/id _outputBlock;
	NSURLRequest* _urlRequest;

}

@property (copy) id outputBlock; 
@property (readonly) SSMetricsPageEvent * metricsPageEvent; 
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(id)outputBlock;
-(id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2 ;
-(id)_initSKUILoadProductPageOperation;
@end

