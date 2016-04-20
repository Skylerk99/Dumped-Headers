/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSCLAccountStore, NSMutableDictionary;

@interface MSCLFacebookAccountsRequest : NSObject {

	MSCLAccountStore* _accountStore;
	/*^block*/id _responseBlock;
	NSMutableDictionary* _services;

}
-(void)_finishWithPages:(id)arg1 accessToken:(id)arg2 error:(id)arg3 ;
-(void)_getPagesWithAccessToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_updateCredentialsForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_pagesWithResponseDictionary:(id)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
@end

