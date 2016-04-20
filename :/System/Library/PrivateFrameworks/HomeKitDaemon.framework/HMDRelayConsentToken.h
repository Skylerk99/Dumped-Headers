/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDAccessory, HMDUser, NSData, NSDate;

@interface HMDRelayConsentToken : NSObject <NSSecureCoding> {

	NSUUID* _accessoryIdentifier;
	NSUUID* _userIdentifier;
	NSUUID* _identifier;
	HMDAccessory* _accessory;
	HMDUser* _user;
	NSData* _consentToken;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) HMDUser * user;                        //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSData * consentToken;                 //@synthesize consentToken=_consentToken - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryIdentifier;               //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * userIdentifier;                      //@synthesize userIdentifier=_userIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)userIdentifier;
-(HMDUser *)user;
-(void)setUser:(HMDUser *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(NSDate *)expirationDate;
-(HMDAccessory *)accessory;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(void)configureWithHome:(id)arg1 ;
-(NSUUID *)accessoryIdentifier;
-(id)initWithConsentToken:(id)arg1 expiration:(id)arg2 accessory:(id)arg3 user:(id)arg4 ;
-(NSData *)consentToken;
-(void)setUserIdentifier:(NSUUID *)arg1 ;
@end

