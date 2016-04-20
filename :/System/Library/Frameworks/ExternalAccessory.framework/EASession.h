/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAAccessory, NSString, NSInputStream, NSOutputStream;

@interface EASession : NSObject {

	EAAccessory* _accessory;
	unsigned _sessionID;
	NSString* _protocolString;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	BOOL _openCompleted;
	int _sock;

}

@property (nonatomic,readonly) EAAccessory * accessory;                    //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSString * protocolString;                  //@synthesize protocolString=_protocolString - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(NSString *)protocolString;
-(unsigned)_sessionID;
-(void)_streamClosed;
-(id)initWithAccessory:(id)arg1 forProtocol:(id)arg2 ;
-(void)_endStreams;
-(BOOL)isOpenCompleted;
-(void)setOpenCompleted:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(EAAccessory *)accessory;
-(NSOutputStream *)outputStream;
-(id)_shortDescription;
-(NSInputStream *)inputStream;
@end

