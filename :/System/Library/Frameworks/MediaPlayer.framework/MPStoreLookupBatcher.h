/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSMutableDictionary, NSError, NSObject, SSLookupRequest;

@interface MPStoreLookupBatcher : NSObject {

	BOOL _hasCalledCompletionHandler;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _completeResponseDictionary;
	NSMutableDictionary* _completeResponseResultsDictionary;
	/*^block*/id _completionHandler;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SSLookupRequest* _lookupRequest;
	unsigned long long _batchSize;

}

@property (nonatomic,readonly) SSLookupRequest * lookupRequest;              //@synthesize lookupRequest=_lookupRequest - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                   //@synthesize batchSize=_batchSize - In the implementation block
+(id)_copyLookupRequest:(id)arg1 ;
+(id)_incompleteChildrenIDsForStoreResult:(id)arg1 ;
-(id)initWithLookupRequest:(id)arg1 ;
-(void)performBatchedRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_batchOperationDidComplete:(id)arg1 ;
-(void)_callCompletionHandlerIfNecessary;
-(void)_onSerialQueue_mergeResponseDictionaryIntoCompleteResponseDictionary:(id)arg1 ;
-(SSLookupRequest *)lookupRequest;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
@end

