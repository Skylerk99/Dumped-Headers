/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <itunesstored/itunesstored-Structs.h>
@class NSString, NSObject, NSDictionary, SSXPCConnection, NSData, NSArray, NSMutableDictionary, NSMutableIndexSet;

@interface XPCClient : NSObject {

	NSString* _clientIdentifier;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDictionary* _entitlements;
	BOOL _legacyEntitlements;
	SSXPCConnection* _outputConnection;
	char _appleSigned;
	unsigned _applicationState;
	NSData* _auditTokenData;
	NSArray* _backgroundModes;
	NSMutableDictionary* _backgroundTasks;
	long long _clientType;
	NSString* _clientVersion;
	NSMutableIndexSet* _inflightMessages;
	NSObject*<OS_xpc_object> _inputConnection;
	char _isNewsstandApp;
	int _pid;
	id _stateChangeObserver;

}

@property (getter=isAppleSigned,readonly) BOOL appleSigned; 
@property (readonly) unsigned applicationState; 
@property (readonly) NSData * auditTokenData; 
@property (readonly) BOOL canReceiveMessages; 
@property (readonly) NSString * clientIdentifier; 
@property (readonly) NSString * clientIdentifierHeader; 
@property (readonly) long long clientType; 
@property (readonly) BOOL hasEntitlements; 
@property (getter=isNewsstandApp,readonly) BOOL newsstandApp; 
@property (readonly) int processIdentifier; 
@property (readonly) NSString * userAgent; 
@property (readonly) SSXPCConnection * outputConnection; 
@property (nonatomic,readonly) unsigned _applicationState; 
@property (nonatomic,readonly) long long _clientType; 
-(id)initWithInputConnection:(id)arg1 ;
-(void)setOutputConnectionWithConnection:(id)arg1 ;
-(SSXPCConnection *)outputConnection;
-(BOOL)isAppleSigned;
-(id)copyInputConnection;
-(BOOL)hasEntitlements;
-(long long)_clientType;
-(id)_applicationBackgroundModes;
-(void)_handleOutputConnectionDisconnect;
-(id)initWithApplicationIdentifier:(id)arg1 isAppleSigned:(BOOL)arg2 ;
-(NSData *)auditTokenData;
-(id)beginBackgroundTaskWithReason:(unsigned)arg1 expirationBlock:(/*^block*/id)arg2 ;
-(BOOL)canReceiveMessages;
-(id)copyApplicationBackgroundModes;
-(void)endBackgroundTaskWithIdentifier:(id)arg1 ;
-(void)loadSpringBoardStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendCoalescedMessageWithIdentifier:(unsigned long long)arg1 ;
-(void)_invalidateBackgroundTaskAssertion:(SBSProcessAssertionRef)arg1 ;
-(unsigned)_applicationState;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)_isNewsstandApp;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)applicationState;
-(int)processIdentifier;
-(NSString *)userAgent;
-(void)_applicationStateChanged:(id)arg1 ;
-(long long)clientType;
-(NSString *)clientIdentifier;
-(BOOL)isNewsstandApp;
-(NSString *)clientIdentifierHeader;
-(id)_initCommon;
@end

