/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, SKUIMediaSocialAuthor, NSMutableDictionary;

@interface MSCLAccountStore : NSObject {

	ACAccountStore* _accountStore;
	SKUIMediaSocialAuthor* _author;
	NSMutableDictionary* _externalServices;

}

@property (nonatomic,readonly) SKUIMediaSocialAuthor * author;              //@synthesize author=_author - In the implementation block
-(void)dealloc;
-(BOOL)removeAccount:(id)arg1 ;
-(BOOL)saveAccount:(id)arg1 ;
-(void)verifyUserName:(id)arg1 password:(id)arg2 serviceIdentifier:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(id)accountForServiceIdentifier:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)requestAccessToAccountForServiceIdentifier:(id)arg1 permissions:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)createAccountForServiceIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)permissionForServiceIdentifier:(id)arg1 ;
-(void)registerExternalDestination:(id)arg1 forAccount:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_handleAccountStoreDidChange:(id)arg1 ;
-(id)_facebookAppId;
-(SKUIMediaSocialAuthor *)author;
-(id)initWithAuthor:(id)arg1 ;
@end

