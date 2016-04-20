/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayLayoutMonitorClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, FBSDisplayLayout, FBSDisplayLayoutMonitorClient, NSString;

@interface FBSDisplayLayoutMonitor : NSObject <FBSDisplayLayoutMonitorClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	unsigned long long _displayType;
	BOOL _queue_invalidated;
	NSHashTable* _queue_observers;
	FBSDisplayLayout* _queue_currentLayout;
	/*^block*/id _queue_handler;
	FBSDisplayLayoutMonitorClient* _queue_client;
	BOOL _sharedInstance;

}

@property (nonatomic,readonly) unsigned long long displayType;                       //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplayLayout * currentLayout; 
@property (nonatomic,copy) id handler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitorForDisplayType:(unsigned long long)arg1 ;
-(id)_observers;
-(void)dealloc;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(unsigned long long)displayType;
-(FBSDisplayLayout *)currentLayout;
-(id)initWithDisplayType:(unsigned long long)arg1 ;
-(void)_queue_updateClient;
-(void)_calloutQueue_postLayout:(id)arg1 withContext:(id)arg2 toObserver:(id)arg3 ;
-(void)_queue_updateLayout:(id)arg1 withContext:(id)arg2 ;
-(unsigned long long)clientDisplayType:(id)arg1 ;
-(void)client:(id)arg1 handleNewDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(id)initWithDisplayType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
@end

