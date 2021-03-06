/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAccount;

@interface LogoutOperation : ISOperation {

	SSAccount* _account;

}

@property (readonly) SSAccount * account; 
-(void)_disableAutomaticDownloadKinds;
-(void)_disableBookkeeper;
-(void)_sendLogoutRequest;
-(id)_sbsyncData;
-(void)run;
-(id)initWithAccount:(id)arg1 ;
-(SSAccount *)account;
-(id)_copyAuthenticationContext;
@end

