/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDecimalNumber, NSDate;

@interface NFECommercePaymentRequest : NSObject <NSSecureCoding> {

	unsigned char _merchantCapabilities;
	unsigned _unpredictableNumber;
	NSString* _appletIdentifier;
	NSData* _merchantData;
	NSString* _currencyCode;
	NSString* _countryCode;
	NSDecimalNumber* _transactionAmount;
	NSDate* _transactionDate;

}

@property (nonatomic,retain) NSString * appletIdentifier;                      //@synthesize appletIdentifier=_appletIdentifier - In the implementation block
@property (nonatomic,retain) NSData * merchantData;                            //@synthesize merchantData=_merchantData - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                          //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                           //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * transactionAmount;              //@synthesize transactionAmount=_transactionAmount - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                         //@synthesize transactionDate=_transactionDate - In the implementation block
@property (assign,nonatomic) unsigned char merchantCapabilities;               //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (assign,nonatomic) unsigned unpredictableNumber;                     //@synthesize unpredictableNumber=_unpredictableNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(NSDecimalNumber *)transactionAmount;
-(void)setTransactionAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)appletIdentifier;
-(NSData *)merchantData;
-(unsigned)unpredictableNumber;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setAppletIdentifier:(NSString *)arg1 ;
-(void)setMerchantData:(NSData *)arg1 ;
-(void)setUnpredictableNumber:(unsigned)arg1 ;
-(void)setMerchantCapabilities:(unsigned char)arg1 ;
-(unsigned char)merchantCapabilities;
@end

