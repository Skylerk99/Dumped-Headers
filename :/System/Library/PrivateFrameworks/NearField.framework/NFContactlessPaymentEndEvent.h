/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NFApplet, NSDecimalNumber, NSData;

@interface NFContactlessPaymentEndEvent : NSObject <NSSecureCoding> {

	NSString* _appletIdentifier;
	BOOL _didError;
	unsigned short _command;
	unsigned short _status;
	unsigned short _type;
	unsigned short _result;
	unsigned short _informative;
	NFApplet* _applet;
	NSString* _transactionIdentifier;
	NSDecimalNumber* _amount;
	NSString* _currency;
	NSData* _tlv;

}

@property (nonatomic,readonly) NFApplet * applet;                             //@synthesize applet=_applet - In the implementation block
@property (nonatomic,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL didError;                                 //@synthesize didError=_didError - In the implementation block
@property (nonatomic,readonly) unsigned short command;                        //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) unsigned short status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned short type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) unsigned short informative;                    //@synthesize informative=_informative - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * amount;                      //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) NSString * currency;                           //@synthesize currency=_currency - In the implementation block
@property (nonatomic,readonly) NSData * tlv;                                  //@synthesize tlv=_tlv - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)logsTransactionDetails;
-(unsigned short)command;
-(NSString *)transactionIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned short)type;
-(NSDecimalNumber *)amount;
-(unsigned short)result;
-(unsigned short)status;
-(id)asDictionary;
-(id)appletIdentifier;
-(void)_setApplet:(id)arg1 ;
-(NSData *)tlv;
-(NFApplet *)applet;
-(BOOL)didError;
-(NSString *)currency;
-(unsigned short)informative;
@end

