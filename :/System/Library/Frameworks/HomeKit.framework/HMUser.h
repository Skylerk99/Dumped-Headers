/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, HMHomeAccessControl, HMHome, HMDelegateCaller, NSObject;

@interface HMUser : NSObject <NSSecureCoding, HMObjectMerge> {

	BOOL _administrator;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	HMHomeAccessControl* _homeAccessControl;
	NSString* _userID;
	HMHome* _home;
	NSUUID* _uuid;
	HMDelegateCaller* _delegateCaller;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) HMHomeAccessControl * homeAccessControl;                 //@synthesize homeAccessControl=_homeAccessControl - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                    //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL administrator;                                      //@synthesize administrator=_administrator - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                       //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,copy) NSString * userID;                                         //@synthesize userID=_userID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(HMDelegateCaller *)delegateCaller;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 ;
-(void)_unconfigure;
-(id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 ;
-(id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 isAdministrator:(BOOL)arg5 ;
-(HMHomeAccessControl *)homeAccessControl;
-(void)setAdministrator:(BOOL)arg1 ;
-(void)setHomeAccessControl:(HMHomeAccessControl *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(BOOL)administrator;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

