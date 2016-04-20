/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSyncEngine.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class SYStartSyncSession, NSURL, _SYOutputStreamer, _SYInputStreamer, IDSService, NSObject, NSMutableIndexSet, NSMutableArray, NSDictionary, NSString;

@interface SYFileTransferSyncEngine : SYSyncEngine <IDSServiceDelegate> {

	BOOL _inSession;
	BOOL _sessionCanceled;
	SYStartSyncSession* _sessionStartMessage;
	NSURL* _outputFileURL;
	_SYOutputStreamer* _outputStream;
	NSURL* _inputFileURL;
	_SYInputStreamer* _inputStream;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _idsQueue;
	NSMutableIndexSet* _messageRows;
	NSMutableArray* _deferredIncomingSessions;
	NSDictionary* _customIDSOptions;

}

@property (nonatomic,copy) NSDictionary * customIDSOptions;              //@synthesize customIDSOptions=_customIDSOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suspend;
-(void)endSession;
-(NSDictionary *)customIDSOptions;
-(void)setCustomIDSOptions:(NSDictionary *)arg1 ;
-(void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)beginSession;
-(id)initWithService:(id)arg1 queue:(id)arg2 ;
-(id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(BOOL)buffersSessions;
-(void)_cancelSession;
-(id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3 ;
-(id)_fileTransferHeader;
-(id)idsOptions:(id)arg1 ;
-(void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 ;
-(void)_handleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(/*^block*/id)arg5 ;
-(BOOL)_shouldTreatAsSessionEnd:(id)arg1 ;
-(void)_reallyHandleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(/*^block*/id)arg5 ;
-(id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 ;
-(void)_handleIncomingStreamDataWithIdentifier:(id)arg1 ;
-(id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3 ;
-(void)_readNextProtobuf:(/*^block*/id)arg1 ;
-(BOOL)isInSession;
-(id)_assumeOwnershipOfURL:(id)arg1 error:(id*)arg2 ;
-(void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(BOOL)resume:(id*)arg1 ;
@end

