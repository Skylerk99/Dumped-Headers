/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, NSString;

@interface AAGrandSlamSigner : NSObject {

	ACAccount* _appleAccount;
	ACAccount* _grandSlamAccount;
	ACAccountStore* _store;
	NSString* _appTokenID;
	BOOL _useAltDSID;

}

@property (nonatomic,readonly) ACAccount * appleAccount;                   //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,readonly) ACAccount * grandSlamAccount;               //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL useAltDSID;                              //@synthesize useAltDSID=_useAltDSID - In the implementation block
-(ACAccountStore *)accountStore;
-(BOOL)signURLRequest:(id)arg1 ;
-(ACAccount *)grandSlamAccount;
-(BOOL)useAltDSID;
-(void)setUseAltDSID:(BOOL)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4 ;
-(BOOL)signURLRequest:(id)arg1 isUserInitiated:(BOOL)arg2 ;
-(ACAccount *)appleAccount;
@end

