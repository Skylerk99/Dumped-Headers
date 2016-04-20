/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDIDSMessageCenter, NSString, NSData, HDIDSOutgoingResponse;

@interface HDIDSIncomingRequest : NSObject {

	BOOL _expectsResponse;
	unsigned short _messageID;
	HDIDSMessageCenter* _messageCenter;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	HDIDSOutgoingResponse* _response;
	id _pbRequest;

}

@property (assign,nonatomic,__weak) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                            //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                                   //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) HDIDSOutgoingResponse * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id pbRequest;                                           //@synthesize pbRequest=_pbRequest - In the implementation block
-(void)dealloc;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(HDIDSOutgoingResponse *)response;
-(unsigned short)messageID;
-(void)setResponse:(HDIDSOutgoingResponse *)arg1 ;
-(id)pbRequest;
-(NSString *)idsIdentifier;
-(void)setPbRequest:(id)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(void)configureResponse;
-(BOOL)expectsResponse;
@end

