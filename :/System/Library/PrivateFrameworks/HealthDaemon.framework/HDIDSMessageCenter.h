/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_source, HDIDSMessageCenterDelegate, OS_dispatch_queue;
@class NSString, IDSService, NSMutableDictionary, HDIDSPersistentDictionary, NSDate, NSObject;

@interface HDIDSMessageCenter : NSObject <IDSServiceDelegate> {

	NSString* _serviceIdentifier;
	NSString* _launchNotification;
	IDSService* _service;
	NSMutableDictionary* _requestHandlers;
	NSMutableDictionary* _errorHandlers;
	NSMutableDictionary* _responseHandlers;
	NSMutableDictionary* _pbMapping;
	HDIDSPersistentDictionary* _persistentContextStore;
	NSDate* _nextExpireTimerFireDate;
	NSObject*<OS_dispatch_source> _expireTimer;
	NSString* _cacheDirectoryPath;
	id<HDIDSMessageCenterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSString * cacheDirectoryPath;                        //@synthesize cacheDirectoryPath=_cacheDirectoryPath - In the implementation block
@property (assign,nonatomic,__weak) id<HDIDSMessageCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IDSService * idsService; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<HDIDSMessageCenterDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<HDIDSMessageCenterDelegate>)delegate;
-(void)resume;
-(id)_queue;
-(id)initWithIDSServiceIdentifier:(id)arg1 launchOnDemandNotification:(id)arg2 cacheDirectoryPath:(id)arg3 ;
-(void)addRequestHandler:(SEL)arg1 forMessageID:(unsigned short)arg2 ;
-(void)addResponseHandler:(SEL)arg1 forMessageID:(unsigned short)arg2 ;
-(void)addErrorHandler:(SEL)arg1 forMessageID:(unsigned short)arg2 ;
-(void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3 ;
-(NSString *)cacheDirectoryPath;
-(void)_expireMessages;
-(void)_updateExpireTimerWithDate:(id)arg1 ;
-(void)_handleError:(id)arg1 context:(id)arg2 ;
-(id)_pbMappingForMessageID:(unsigned short)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(IDSService *)idsService;
-(void)_sendResponse:(id)arg1 ;
@end

