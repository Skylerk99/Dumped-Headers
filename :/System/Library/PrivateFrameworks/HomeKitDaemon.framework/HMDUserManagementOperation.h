/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HAPTimerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMDUserManagementOperationDelegate, OS_dispatch_queue;
@class NSMutableArray, HMDUserManagementOperationManager, NSUUID, HMDUser, HMDAccessory, NSDate, NSObject, HAPTimer, NSArray, NSString;

@interface HMDUserManagementOperation : NSObject <HAPTimerDelegate, NSSecureCoding> {

	NSMutableArray* _dependencies;
	BOOL _executing;
	BOOL _backingOff;
	unsigned long long _state;
	HMDUserManagementOperationManager* _operationManager;
	id<HMDUserManagementOperationDelegate> _delegate;
	NSUUID* _identifier;
	unsigned long long _operationType;
	HMDUser* _user;
	HMDAccessory* _accessory;
	NSDate* _expirationDate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HAPTimer* _expirationTimer;
	double _backoffInterval;
	HAPTimer* _backoffTimer;

}

@property (__weak) id<HMDUserManagementOperationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long operationType;                                //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) HMDUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                                 //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) HAPTimer * expirationTimer;                                      //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) HMDUserManagementOperationManager * operationManager;              //@synthesize operationManager=_operationManager - In the implementation block
@property (nonatomic,readonly) double backoffInterval;                                          //@synthesize backoffInterval=_backoffInterval - In the implementation block
@property (nonatomic,retain) HAPTimer * backoffTimer;                                           //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (assign,getter=isBackingOff,nonatomic) BOOL backingOff;                               //@synthesize backingOff=_backingOff - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)addUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 ;
+(id)removeUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 ;
-(BOOL)isReady;
-(BOOL)_isFinished;
-(NSArray *)dependencies;
-(HMDUser *)user;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HMDUserManagementOperationDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDUserManagementOperationDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isValid;
-(BOOL)isCancelled;
-(id)shortDescription;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)_setupExpirationTimer;
-(void)setExecuting:(BOOL)arg1 ;
-(void)addDependency:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMDAccessory *)accessory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)mergeWithOperation:(id)arg1 ;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(void)executeWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)timerDidFire:(id)arg1 ;
-(void)setOperationManager:(HMDUserManagementOperationManager *)arg1 ;
-(id)initWithOperationType:(unsigned long long)arg1 user:(id)arg2 accessory:(id)arg3 expiration:(id)arg4 ;
-(HAPTimer *)expirationTimer;
-(BOOL)isBackingOff;
-(HMDUserManagementOperationManager *)operationManager;
-(double)backoffInterval;
-(double)nextBackoffInterval;
-(void)setBackingOff:(BOOL)arg1 ;
-(void)setBackoffTimer:(HAPTimer *)arg1 ;
-(void)_startBackoffTimer;
-(void)_addPairingToAccessory:(id)arg1 identifier:(id)arg2 publicKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_removePairingFromAccessory:(id)arg1 identifier:(id)arg2 publicKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(HAPTimer *)backoffTimer;
-(void)_endBackoffTimer;
-(BOOL)isExpired;
-(unsigned long long)operationType;
@end

