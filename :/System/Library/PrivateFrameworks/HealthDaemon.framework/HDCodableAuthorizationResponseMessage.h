/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableAuthorizationResponseMessage : PBCodable <NSCopying> {

	NSString* _appBundleIdentifier;
	NSString* _errorDescription;
	NSString* _hostAppName;
	NSData* _requestIdentifier;
	BOOL _shouldPrompt;
	SCD_Struct_HD22 _has;

}

@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSData * requestIdentifier;                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasShouldPrompt; 
@property (assign,nonatomic) BOOL shouldPrompt;                           //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (nonatomic,readonly) BOOL hasHostAppName; 
@property (nonatomic,retain) NSString * hostAppName;                      //@synthesize hostAppName=_hostAppName - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;                 //@synthesize errorDescription=_errorDescription - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setHostAppName:(NSString *)arg1 ;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(BOOL)hasRequestIdentifier;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(void)setHasShouldPrompt:(BOOL)arg1 ;
-(BOOL)hasShouldPrompt;
-(BOOL)hasHostAppName;
-(BOOL)hasErrorDescription;
-(BOOL)shouldPrompt;
-(NSString *)hostAppName;
-(NSString *)errorDescription;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)requestIdentifier;
-(void)setRequestIdentifier:(NSData *)arg1 ;
@end

