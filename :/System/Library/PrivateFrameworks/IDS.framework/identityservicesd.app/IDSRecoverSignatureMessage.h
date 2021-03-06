/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface IDSRecoverSignatureMessage : FTIDSMessage <NSCopying> {

	NSData* _responseSignature;
	NSString* _protocolVersion;

}

@property (copy) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (copy) NSData * responseSignature;              //@synthesize responseSignature=_responseSignature - In the implementation block
-(NSData *)responseSignature;
-(void)setResponseSignature:(NSData *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bagKey;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(double)anisetteHeadersTimeout;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
@end

