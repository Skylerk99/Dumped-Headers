/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface TRAdvertisingInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSData* _pairingPublicKey;
	NSData* _wirelessProximityIdentifier;

}

@property (nonatomic,copy,readonly) NSData * pairingPublicKey;                         //@synthesize pairingPublicKey=_pairingPublicKey - In the implementation block
@property (nonatomic,copy,readonly) NSData * wirelessProximityIdentifier;              //@synthesize wirelessProximityIdentifier=_wirelessProximityIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_initWithTXTRecordRepresentation:(id)arg1 ;
-(NSData *)pairingPublicKey;
-(id)_TXTRecordRepresentation;
-(NSData *)wirelessProximityIdentifier;
@end

