/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>

@class NSArray, NSString;

@interface IDSReportSpamMessage : FTIDSMessage {

	NSArray* _spamMessages;
	NSString* _responseMessage;
	NSArray* _responseSpamMessages;

}

@property (copy) NSArray * spamMessages;                      //@synthesize spamMessages=_spamMessages - In the implementation block
@property (copy) NSString * responseMessage;                  //@synthesize responseMessage=_responseMessage - In the implementation block
@property (copy) NSArray * responseSpamMessages;              //@synthesize responseSpamMessages=_responseSpamMessages - In the implementation block
-(void)setSpamMessages:(NSArray *)arg1 ;
-(NSArray *)spamMessages;
-(NSString *)responseMessage;
-(void)setResponseMessage:(NSString *)arg1 ;
-(NSArray *)responseSpamMessages;
-(void)setResponseSpamMessages:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bagKey;
-(int)maxTimeoutRetries;
-(BOOL)wantsExtraTimeoutRetry;
-(BOOL)wantsManagedRetries;
-(double)anisetteHeadersTimeout;
-(BOOL)wantsBodySignature;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
-(id)messageBody;
@end

