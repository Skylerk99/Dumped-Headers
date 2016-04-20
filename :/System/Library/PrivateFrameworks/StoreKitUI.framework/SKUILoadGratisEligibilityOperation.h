/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSArray, SKUIClientContext, NSObject;

@interface SKUILoadGratisEligibilityOperation : NSOperation {

	NSArray* _bundleIDs;
	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2 ;
-(id)outputBlock;
-(id)_bodyData;
@end

