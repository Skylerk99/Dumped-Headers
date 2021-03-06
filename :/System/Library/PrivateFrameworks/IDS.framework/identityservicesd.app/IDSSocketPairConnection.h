/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableData, IMWeakReference, NSObject, NSData, NSMutableArray, NSMutableDictionary, NSSet;

@interface IDSSocketPairConnection : NSObject {

	NSMutableData* _headerData;
	NSMutableData* _currentMessageData;
	IMWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_semaphore> _lock;
	unsigned long long _currentOutgoingDataIndex;
	NSData* _outgoingData;
	NSMutableArray* _outgoingMessageArray;
	unsigned _currentOutgoingFragmentedMessageID;
	unsigned long long _inFlightMessageCountLowWaterMark;
	NSMutableDictionary* _incomingDataFragments;
	unsigned _fragmentationSize;
	BOOL _isConnected;
	unsigned _currentDataLength;
	long long _bytesReceived;
	double _prevBPS;
	int _connectedSocket;
	BOOL _writeSocketIsResumed;
	double _lastDateCheck;
	BOOL _notifyWhenConnectionReceivesBytes;
	long long _priority;
	/*^block*/id _encryptionBlock;
	/*^block*/id _decryptionBlock;
	unsigned _maxAllowedMessageSize;

}

@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic) unsigned fragmentationSize; 
@property (nonatomic,readonly) unsigned long long inFlightMessageCount; 
@property (assign,nonatomic) unsigned long long inFlightMessageCountLowWaterMark; 
@property (nonatomic,readonly) NSSet * inFlightMessages; 
@property (assign,nonatomic) unsigned maxAllowedMessageSize;                                   //@synthesize maxAllowedMessageSize=_maxAllowedMessageSize - In the implementation block
-(long long)_read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)_queueNextOutgoingData;
-(BOOL)sendDataMessage:(id)arg1 canFragment:(BOOL)arg2 ;
-(id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 priority:(long long)arg4 ;
-(unsigned)fragmentationSize;
-(unsigned long long)inFlightMessageCount;
-(unsigned long long)inFlightMessageCountLowWaterMark;
-(void)setFragmentationSize:(unsigned)arg1 ;
-(void)setInFlightMessageCountLowWaterMark:(unsigned long long)arg1 ;
-(void)removePendingMessagesForProtectionClass:(unsigned)arg1 ;
-(void)processStoredIncomingMessage:(id)arg1 ;
-(BOOL)sendDataMessage:(id)arg1 ;
-(void)setNotifyWhenConnectionReceivesBytes:(BOOL)arg1 ;
-(void)setOTREncryptionBlock:(/*^block*/id)arg1 decryptionBlock:(/*^block*/id)arg2 ;
-(unsigned)maxAllowedMessageSize;
-(void)setMaxAllowedMessageSize:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)start;
-(void)endSession;
-(void)_endSession;
-(NSSet *)inFlightMessages;
-(BOOL)_processIncomingMessage:(id)arg1 ;
-(BOOL)isConnected;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)_processBytesAvailable;
-(void)_sendToConnectedSocket;
@end

