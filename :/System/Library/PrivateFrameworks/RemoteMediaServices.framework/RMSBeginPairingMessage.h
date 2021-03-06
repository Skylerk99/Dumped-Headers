/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSBeginPairingMessage : PBCodable <NSCopying> {

	NSString* _appName;
	NSString* _deviceModel;
	NSString* _deviceName;
	NSString* _passcode;

}

@property (nonatomic,readonly) BOOL hasAppName; 
@property (nonatomic,retain) NSString * appName;                  //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasPasscode; 
@property (nonatomic,retain) NSString * passcode;                 //@synthesize passcode=_passcode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)passcode;
-(NSString *)deviceName;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
-(BOOL)hasAppName;
-(BOOL)hasDeviceModel;
-(BOOL)hasPasscode;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
-(BOOL)hasDeviceName;
@end

