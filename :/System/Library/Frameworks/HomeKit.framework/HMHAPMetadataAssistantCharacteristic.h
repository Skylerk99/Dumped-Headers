/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface HMHAPMetadataAssistantCharacteristic : NSObject <NSSecureCoding> {

	BOOL _supportsLocalization;
	NSString* _name;
	NSString* _readHAPCharacteristicName;
	NSString* _writeHAPCharacteristicName;
	NSString* _format;
	NSDictionary* _values;
	NSDictionary* _outValues;
	NSString* _readHAPCharacteristicType;
	NSString* _writeHAPCharacteristicType;

}

@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * readHAPCharacteristicName;               //@synthesize readHAPCharacteristicName=_readHAPCharacteristicName - In the implementation block
@property (nonatomic,retain) NSString * writeHAPCharacteristicName;              //@synthesize writeHAPCharacteristicName=_writeHAPCharacteristicName - In the implementation block
@property (nonatomic,retain) NSString * format;                                  //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) BOOL supportsLocalization;                          //@synthesize supportsLocalization=_supportsLocalization - In the implementation block
@property (nonatomic,retain) NSDictionary * values;                              //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSDictionary * outValues;                           //@synthesize outValues=_outValues - In the implementation block
@property (nonatomic,retain) NSString * readHAPCharacteristicType;               //@synthesize readHAPCharacteristicType=_readHAPCharacteristicType - In the implementation block
@property (nonatomic,retain) NSString * writeHAPCharacteristicType;              //@synthesize writeHAPCharacteristicType=_writeHAPCharacteristicType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValues:(NSDictionary *)arg1 ;
-(NSDictionary *)values;
-(NSString *)readHAPCharacteristicName;
-(NSString *)writeHAPCharacteristicName;
-(BOOL)supportsLocalization;
-(NSDictionary *)outValues;
-(void)setOutValues:(NSDictionary *)arg1 ;
-(void)setSupportsLocalization:(BOOL)arg1 ;
-(void)setReadHAPCharacteristicName:(NSString *)arg1 ;
-(void)setWriteHAPCharacteristicName:(NSString *)arg1 ;
-(NSString *)readHAPCharacteristicType;
-(void)setReadHAPCharacteristicType:(NSString *)arg1 ;
-(NSString *)writeHAPCharacteristicType;
-(void)setWriteHAPCharacteristicType:(NSString *)arg1 ;
@end

