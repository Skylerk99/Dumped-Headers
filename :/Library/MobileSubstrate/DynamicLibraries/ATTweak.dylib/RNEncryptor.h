/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/ATTweak.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATTweak.dylib/ATTweak.dylib-Structs.h>
#import <ATTweak.dylib/RNCryptor.h>

@class NSData;

@interface RNEncryptor : RNCryptor {

	SCD_Struct_RN6 _HMACContext;
	BOOL _haveWrittenHeader;
	NSData* _encryptionSalt;
	NSData* _HMACSalt;
	NSData* _IV;

}

@property (nonatomic,retain) NSData * encryptionSalt;              //@synthesize encryptionSalt=_encryptionSalt - In the implementation block
@property (nonatomic,retain) NSData * HMACSalt;                    //@synthesize HMACSalt=_HMACSalt - In the implementation block
@property (nonatomic,retain) NSData * IV;                          //@synthesize IV=_IV - In the implementation block
@property (assign,nonatomic) BOOL haveWrittenHeader;               //@synthesize haveWrittenHeader=_haveWrittenHeader - In the implementation block
+(id)encryptData:(id)arg1 withSettings:(RNCryptorSettings)arg2 password:(id)arg3 error:(id*)arg4 ;
+(id)encryptData:(id)arg1 withSettings:(RNCryptorSettings)arg2 password:(id)arg3 IV:(id)arg4 encryptionSalt:(id)arg5 HMACSalt:(id)arg6 error:(id*)arg7 ;
+(id)encryptData:(id)arg1 withSettings:(RNCryptorSettings)arg2 encryptionKey:(id)arg3 HMACKey:(id)arg4 error:(id*)arg5 ;
+(id)encryptData:(id)arg1 withSettings:(RNCryptorSettings)arg2 encryptionKey:(id)arg3 HMACKey:(id)arg4 IV:(id)arg5 error:(id*)arg6 ;
-(id)initWithSettings:(RNCryptorSettings)arg1 password:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithSettings:(RNCryptorSettings)arg1 password:(id)arg2 IV:(id)arg3 encryptionSalt:(id)arg4 HMACSalt:(id)arg5 handler:(/*^block*/id)arg6 ;
-(id)initWithSettings:(RNCryptorSettings)arg1 encryptionKey:(id)arg2 HMACKey:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithSettings:(RNCryptorSettings)arg1 encryptionKey:(id)arg2 HMACKey:(id)arg3 IV:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)setIV:(NSData *)arg1 ;
-(NSData *)IV;
-(void)setEncryptionSalt:(NSData *)arg1 ;
-(void)setHMACSalt:(NSData *)arg1 ;
-(NSData *)encryptionSalt;
-(NSData *)HMACSalt;
-(BOOL)haveWrittenHeader;
-(void)setHaveWrittenHeader:(BOOL)arg1 ;
-(void)finish;
-(id)header;
-(void)addData:(id)arg1 ;
@end

