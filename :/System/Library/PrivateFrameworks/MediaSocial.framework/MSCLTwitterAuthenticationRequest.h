/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MSCLTwitterAuthenticationRequest : NSObject {

	NSString* _password;
	/*^block*/id _responseBlock;
	NSString* _username;

}
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(void)_finishWithAuthenticatedAccount:(id)arg1 error:(id)arg2 ;
-(void)_authenticateUsername:(id)arg1 password:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_consumerKey;
-(id)_consumerSecret;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
@end

