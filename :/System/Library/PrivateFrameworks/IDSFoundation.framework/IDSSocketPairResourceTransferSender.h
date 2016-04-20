/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString, NSDictionary;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage {

	NSString* _resourcePath;
	NSDictionary* _metadata;
	NSDictionary* _resourceAttributes;
	BOOL _sentFirstMessage;
	unsigned long long _totalBytes;
	unsigned long long _nextByte;
	BOOL _done;
	int _fileDescriptor;
	unsigned _maxChunkSize;
	BOOL _resumeResourceTransfers;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressPayload;
	BOOL _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;

}

@property (nonatomic,readonly) BOOL sentFirstMessage;                      //@synthesize sentFirstMessage=_sentFirstMessage - In the implementation block
@property (nonatomic,readonly) BOOL isDone;                                //@synthesize done=_done - In the implementation block
@property (assign,nonatomic) unsigned maxChunkSize;                        //@synthesize maxChunkSize=_maxChunkSize - In the implementation block
@property (assign,nonatomic) BOOL resumeResourceTransfers;                 //@synthesize resumeResourceTransfers=_resumeResourceTransfers - In the implementation block
@property (assign,nonatomic) unsigned long long nextByte;                  //@synthesize nextByte=_nextByte - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                      //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain,readonly) NSString * messageUUID;              //@synthesize messageUUID=_messageUUID - In the implementation block
-(unsigned char)command;
-(void)dealloc;
-(id)description;
-(void)reset;
-(id)nextMessage;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(BOOL)isDone;
-(unsigned long long)nextByte;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(NSString *)messageUUID;
-(BOOL)readNextBytes:(id*)arg1 byteOffset:(unsigned long long*)arg2 ;
-(id)readNextBytes;
-(id)nextMessage_old;
-(id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(BOOL)arg5 wantsAppAck:(BOOL)arg6 compressPayload:(BOOL)arg7 compressed:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 ;
-(BOOL)sentFirstMessage;
-(unsigned)maxChunkSize;
-(void)setMaxChunkSize:(unsigned)arg1 ;
-(BOOL)resumeResourceTransfers;
-(void)setResumeResourceTransfers:(BOOL)arg1 ;
-(void)setNextByte:(unsigned long long)arg1 ;
@end

