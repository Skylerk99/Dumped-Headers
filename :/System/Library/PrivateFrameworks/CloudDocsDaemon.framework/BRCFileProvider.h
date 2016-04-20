/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProvider.h>

@protocol OS_dispatch_queue;
@class NSURL, NSOperationQueue, NSString, BRCAccountSession, NSMutableDictionary, NSObject;

@interface BRCFileProvider : NSObject <NSFileProvider> {

	BRCAccountSession* _session;
	NSURL* _url;
	NSOperationQueue* _queue;
	NSMutableDictionary* _presentersIDsByKey;
	NSObject*<OS_dispatch_queue> _privQueue;

}

@property (nonatomic,retain) BRCAccountSession * session;                          //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * _providedItemsURL; 
@property (readonly) NSOperationQueue * _providedItemsOperationQueue; 
@property (copy,readonly) NSString * _fileReactorID; 
+(id)prettyNameForFilePresenterID:(id)arg1 ;
-(NSURL *)_providedItemsURL;
-(NSOperationQueue *)_providedItemsOperationQueue;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3 ;
-(BRCAccountSession *)session;
-(void)suspend;
-(void)resume;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(void)dumpToContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 name:(id)arg2 ;
-(id)_keyForURL:(id)arg1 andID:(id)arg2 ;
-(id)_keyForURL:(id)arg1 ;
-(void)_unregisterPresenterForKey:(id)arg1 ;
-(void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 session:(id)arg3 ;
@end

