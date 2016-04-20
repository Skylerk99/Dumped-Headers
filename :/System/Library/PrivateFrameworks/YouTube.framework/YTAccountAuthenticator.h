/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSString;

@interface YTAccountAuthenticator : NSObject <NSURLConnectionDelegate> {

	NSString* _account;
	NSString* _accountYouTubeName;
	NSString* _accountToken;
	NSString* _accountRefreshToken;

}

@property (nonatomic,retain) NSString * accountToken;                     //@synthesize accountToken=_accountToken - In the implementation block
@property (nonatomic,retain) NSString * accountRefreshToken;              //@synthesize accountRefreshToken=_accountRefreshToken - In the implementation block
@property (nonatomic,retain) NSString * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * accountYouTubeName;               //@synthesize accountYouTubeName=_accountYouTubeName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAuthenticator;
+(id)_keychainServiceForLegacyPassword;
+(id)_keychainServiceForCredentialComponent:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)account;
-(void)invalidateToken;
-(NSString *)accountYouTubeName;
-(void)_readCredentialsFromKeychain;
-(void)_writeCredentialsToKeychain;
-(void)_purgeCachedCredentials;
-(void)_postNewAccountTokenAvailable;
-(void)_removeCredentialsFromKeychain;
-(void)setAccountYouTubeName:(NSString *)arg1 ;
-(void)setAccountToken:(NSString *)arg1 ;
-(void)setAccountRefreshToken:(NSString *)arg1 ;
-(void)clearAccountInfo;
-(BOOL)cachedCredentialsValid;
-(BOOL)loadStoredCredentials;
-(id)accountUsername;
-(id)tokenForCurrentAccount;
-(id)refreshTokenForCurrentAccount;
-(void)setAuthenticatedUsername:(id)arg1 oauth2Token:(id)arg2 oauth2RefreshToken:(id)arg3 youTubeName:(id)arg4 ;
-(void)setAuthenticatedOAuth2Token:(id)arg1 ;
-(void)_postAccountTokenGenerationFailedWithError:(id)arg1 ;
-(NSString *)accountToken;
-(NSString *)accountRefreshToken;
@end

