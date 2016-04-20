/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSessionObject.h>

@class NSString, NSArray;

@interface AFSpeechPacket : NSObject <AFSessionObject> {

	NSString* _aceId;
	NSString* _refId;
	NSArray* _packets;
	long long _packetNumber;

}

@property (nonatomic,retain) NSArray * packets;                     //@synthesize packets=_packets - In the implementation block
@property (assign,nonatomic) long long packetNumber;                //@synthesize packetNumber=_packetNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId;                        //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy) NSString * refId;                        //@synthesize refId=_refId - In the implementation block
-(NSString *)description;
-(id)serializedAceDataError:(id*)arg1 ;
-(BOOL)af_bufferingAllowedDuringActiveSession;
-(void)af_logDiagnostics;
-(NSString *)aceId;
-(void)setAceId:(NSString *)arg1 ;
-(NSString *)refId;
-(void)setRefId:(NSString *)arg1 ;
-(long long)packetNumber;
-(void)setPacketNumber:(long long)arg1 ;
-(NSArray *)packets;
-(void)setPackets:(NSArray *)arg1 ;
@end

