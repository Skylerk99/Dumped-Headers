/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class NSMapTable, NSString, NSMutableSet, NSMutableDictionary, NSSet;

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol> {

	id _delegateContext;
	NSMapTable* _delegateToInfo;
	NSString* _serviceToken;
	NSString* _service;
	NSMutableSet* _cachedAccounts;
	NSMutableSet* _enabledAccounts;
	NSMutableDictionary* _transactionIDToHandlersMap;
	BOOL _accountsLoaded;
	BOOL _isLocalAccountVisible;

}

@property (nonatomic,retain,readonly) NSSet * accounts; 
@property (nonatomic,retain,readonly) NSSet * enabledAccounts; 
@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceName;
-(void)dealloc;
-(id)accountWithLoginID:(id)arg1 service:(id)arg2 ;
-(void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)accountAdded:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_removeAndDeregisterAccount:(id)arg1 ;
-(void)daemonDisconnected;
-(void)accountUpdated:(id)arg1 ;
-(void)accountsChanged:(id)arg1 forTopic:(id)arg2 ;
-(void)accountEnabled:(id)arg1 onService:(id)arg2 ;
-(void)accountDisabled:(id)arg1 onService:(id)arg2 ;
-(void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithService:(id)arg1 delegateContext:(id)arg2 ;
-(id)accountWithUniqueID:(id)arg1 ;
-(void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 aliases:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_loadCachedAccounts;
-(void)_updateLocalAccountVisibility;
-(void)_loadCachedAccountsWithDictionaries:(id)arg1 ;
-(void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2 ;
-(id)internalAccounts;
-(void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)accountRemoved:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(void)enableAccount:(id)arg1 ;
-(NSSet *)enabledAccounts;
-(void)_removeAccount:(id)arg1 ;
-(void)_connect;
-(void)removeDelegate:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(NSSet *)accounts;
@end

