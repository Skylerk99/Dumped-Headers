/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface CKDPublicIdentityLookupRequest : NSObject {

	BOOL _isCancelled;
	/*^block*/id _perEmailProgressBlock;
	/*^block*/id _lookupCompletionBlock;
	NSMutableSet* _remainingEmailsToFetch;
	NSMutableDictionary* _emailsToProtectionInfo;
	NSMutableDictionary* _emailsToUserInfo;

}

@property (nonatomic,copy) id perEmailProgressBlock;                                    //@synthesize perEmailProgressBlock=_perEmailProgressBlock - In the implementation block
@property (nonatomic,copy) id lookupCompletionBlock;                                    //@synthesize lookupCompletionBlock=_lookupCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableSet * remainingEmailsToFetch;                     //@synthesize remainingEmailsToFetch=_remainingEmailsToFetch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * emailsToProtectionInfo;              //@synthesize emailsToProtectionInfo=_emailsToProtectionInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * emailsToUserInfo;                    //@synthesize emailsToUserInfo=_emailsToUserInfo - In the implementation block
@property (assign,nonatomic) BOOL isCancelled;                                          //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(id)initWithEmails:(id)arg1 ;
-(void)setPerEmailProgressBlock:(id)arg1 ;
-(void)setLookupCompletionBlock:(id)arg1 ;
-(void)receivedProtectionInfo:(id)arg1 userInfo:(id)arg2 forEmail:(id)arg3 ;
-(id)perEmailProgressBlock;
-(id)lookupCompletionBlock;
-(NSMutableSet *)remainingEmailsToFetch;
-(void)setRemainingEmailsToFetch:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)emailsToProtectionInfo;
-(void)setEmailsToProtectionInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)emailsToUserInfo;
-(void)setEmailsToUserInfo:(NSMutableDictionary *)arg1 ;
-(void)setIsCancelled:(BOOL)arg1 ;
@end

