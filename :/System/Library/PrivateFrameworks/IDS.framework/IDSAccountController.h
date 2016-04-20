/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSAccountController, NSSet;

@interface IDSAccountController : NSObject {

	_IDSAccountController* _internal;

}

@property (nonatomic,retain,readonly) NSSet * accounts; 
-(id)_internal;
-(id)serviceName;
-(void)dealloc;
-(id)accountWithLoginID:(id)arg1 service:(id)arg2 ;
-(void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithService:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(id)_initWithService:(id)arg1 onIDSQueue:(BOOL)arg2 ;
-(id)accountWithUniqueID:(id)arg1 ;
-(void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 aliases:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_initWithService:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(void)enableAccount:(id)arg1 ;
-(id)enabledAccounts;
-(void)_removeAccount:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(NSSet *)accounts;
@end

