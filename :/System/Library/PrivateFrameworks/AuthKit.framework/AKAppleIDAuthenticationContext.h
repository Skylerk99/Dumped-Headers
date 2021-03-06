/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationLimitedUIProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSNumber, NSObject, NSUUID, NSArray, NSDictionary, AKAnisetteData, AKDevice;

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, NSSecureCoding> {

	NSString* _generatedCode;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSString* _deviceClass;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	CFUserNotificationRef _activeSecondFactoryEntryPrompt;
	/*^block*/id _secondFactoryEntryCompletion;
	NSObject*<OS_dispatch_queue> _secondFactorQueue;
	BOOL _isProxyingForApp;
	BOOL _isPasswordEditable;
	BOOL _isUsernameEditable;
	BOOL _shouldAllowAppleIDCreation;
	BOOL _needsCredentialRecovery;
	BOOL _needsNewAppleID;
	BOOL _isEphemeral;
	BOOL _shouldOfferSecurityUpgrade;
	BOOL _shouldPromptForPasswordOnly;
	BOOL _shouldUpdatePersistentServiceTokens;
	BOOL _shouldPreventInteractiveAuth;
	BOOL _shouldForceInteractiveAuth;
	NSString* _proxiedAppBundleID;
	NSUUID* _identifier;
	NSString* _passwordPromptTitle;
	NSString* _proxiedAppName;
	NSString* _password;
	unsigned long long _capabilityForUIDisplay;
	NSString* _username;
	long long _serviceType;
	NSString* _reason;
	NSString* _defaultButtonString;
	long long _maximumLoginAttempts;
	NSArray* _serviceIdentifiers;
	NSString* _DSID;
	NSString* _altDSID;
	NSDictionary* _httpHeadersForRemoteUI;
	id _clientInfo;
	NSString* _displayString;
	NSString* _displayTitle;
	AKAnisetteData* _proxiedDeviceAnisetteData;
	AKDevice* _proxiedDevice;
	AKAnisetteData* _companionDeviceAnisetteData;
	AKDevice* _companionDevice;

}

@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSString * deviceClass; 
@property (nonatomic,copy) NSString * deviceColor; 
@property (nonatomic,copy) NSString * deviceEnclosureColor; 
@property (nonatomic,copy) NSString * generatedCode; 
@property (nonatomic,copy) NSString * username;                                                        //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL isUsernameEditable;                                                  //@synthesize isUsernameEditable=_isUsernameEditable - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAppleIDCreation;                                          //@synthesize shouldAllowAppleIDCreation=_shouldAllowAppleIDCreation - In the implementation block
@property (assign,nonatomic) BOOL needsCredentialRecovery;                                             //@synthesize needsCredentialRecovery=_needsCredentialRecovery - In the implementation block
@property (assign,nonatomic) BOOL needsNewAppleID;                                                     //@synthesize needsNewAppleID=_needsNewAppleID - In the implementation block
@property (assign,nonatomic) long long serviceType;                                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                          //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonString;                                             //@synthesize defaultButtonString=_defaultButtonString - In the implementation block
@property (assign,nonatomic) long long maximumLoginAttempts;                                           //@synthesize maximumLoginAttempts=_maximumLoginAttempts - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,copy) NSArray * serviceIdentifiers;                                               //@synthesize serviceIdentifiers=_serviceIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL isEphemeral;                                                         //@synthesize isEphemeral=_isEphemeral - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                                            //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                                         //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeadersForRemoteUI;                                      //@synthesize httpHeadersForRemoteUI=_httpHeadersForRemoteUI - In the implementation block
@property (nonatomic,retain) id clientInfo;                                                            //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSecurityUpgrade;                                          //@synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade - In the implementation block
@property (nonatomic,copy) NSString * displayString;                                                   //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                                                    //@synthesize displayTitle=_displayTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldPromptForPasswordOnly;                                         //@synthesize shouldPromptForPasswordOnly=_shouldPromptForPasswordOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdatePersistentServiceTokens;                                 //@synthesize shouldUpdatePersistentServiceTokens=_shouldUpdatePersistentServiceTokens - In the implementation block
@property (assign,setter=_setProxyingForApp:,nonatomic) BOOL _isProxyingForApp;                        //@synthesize isProxyingForApp=_isProxyingForApp - In the implementation block
@property (setter=_setProxiedAppBundleID:,nonatomic,copy) NSString * _proxiedAppBundleID;              //@synthesize proxiedAppBundleID=_proxiedAppBundleID - In the implementation block
@property (setter=_setProxiedAppName:,nonatomic,copy) NSString * _proxiedAppName;                      //@synthesize proxiedAppName=_proxiedAppName - In the implementation block
@property (nonatomic,copy) NSString * _passwordPromptTitle;                                            //@synthesize passwordPromptTitle=_passwordPromptTitle - In the implementation block
@property (setter=_setPassword:,nonatomic,copy) NSString * _password;                                  //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL _isPasswordEditable;                                                 //@synthesize isPasswordEditable=_isPasswordEditable - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventInteractiveAuth;                                        //@synthesize shouldPreventInteractiveAuth=_shouldPreventInteractiveAuth - In the implementation block
@property (assign,nonatomic) BOOL shouldForceInteractiveAuth;                                          //@synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth - In the implementation block
@property (nonatomic,retain) AKAnisetteData * proxiedDeviceAnisetteData;                               //@synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData - In the implementation block
@property (nonatomic,copy) AKDevice * proxiedDevice;                                                   //@synthesize proxiedDevice=_proxiedDevice - In the implementation block
@property (nonatomic,copy) AKAnisetteData * companionDeviceAnisetteData;                               //@synthesize companionDeviceAnisetteData=_companionDeviceAnisetteData - In the implementation block
@property (nonatomic,copy) AKDevice * companionDevice;                                                 //@synthesize companionDevice=_companionDevice - In the implementation block
@property (nonatomic,copy) NSString * proxiedDeviceUDID; 
@property (nonatomic,copy) NSString * proxiedDeviceClientInfo; 
@property (nonatomic,readonly) NSUUID * _identifier;                                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long _capabilityForUIDisplay;                             //@synthesize capabilityForUIDisplay=_capabilityForUIDisplay - In the implementation block
@property (nonatomic,readonly) NSString * _detailedDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSString *)deviceClass;
-(NSString *)deviceEnclosureColor;
-(void)setDeviceClass:(NSString *)arg1 ;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setGeneratedCode:(NSString *)arg1 ;
-(NSString *)generatedCode;
-(NSString *)_detailedDescription;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(NSUUID *)_identifier;
-(void)setReason:(NSString *)arg1 ;
-(void)setClientInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)displayString;
-(NSString *)displayTitle;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(NSString *)reason;
-(void)setDSID:(NSString *)arg1 ;
-(void)_setProxyingForApp:(BOOL)arg1 ;
-(void)setDefaultButtonString:(NSString *)arg1 ;
-(id)_sanitizedCopy;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateWithValuesFromContext:(id)arg1 ;
-(AKDevice *)proxiedDevice;
-(void)setProxiedDevice:(AKDevice *)arg1 ;
-(AKAnisetteData *)proxiedDeviceAnisetteData;
-(void)setProxiedDeviceAnisetteData:(AKAnisetteData *)arg1 ;
-(unsigned long long)_capabilityForUIDisplay;
-(NSArray *)serviceIdentifiers;
-(void)setServiceIdentifiers:(NSArray *)arg1 ;
-(id)_secondFactorQueue;
-(void)_startListeningForSecondFactorCodeEntryNotification;
-(void)_stopListeningForSecondFactorCodeEntryNotification;
-(NSString *)proxiedDeviceUDID;
-(void)setProxiedDeviceUDID:(NSString *)arg1 ;
-(NSString *)proxiedDeviceClientInfo;
-(void)setProxiedDeviceClientInfo:(NSString *)arg1 ;
-(void)_handleSecondFactorCodeEntry;
-(BOOL)_isProxyingForApp;
-(NSString *)_proxiedAppBundleID;
-(void)_setProxiedAppBundleID:(id)arg1 ;
-(NSString *)_passwordPromptTitle;
-(void)set_passwordPromptTitle:(NSString *)arg1 ;
-(NSString *)_proxiedAppName;
-(void)_setProxiedAppName:(id)arg1 ;
-(BOOL)_isPasswordEditable;
-(void)set_isPasswordEditable:(BOOL)arg1 ;
-(BOOL)isUsernameEditable;
-(BOOL)shouldAllowAppleIDCreation;
-(NSString *)defaultButtonString;
-(long long)maximumLoginAttempts;
-(void)setMaximumLoginAttempts:(long long)arg1 ;
-(NSDictionary *)httpHeadersForRemoteUI;
-(void)setHttpHeadersForRemoteUI:(NSDictionary *)arg1 ;
-(BOOL)shouldOfferSecurityUpgrade;
-(void)setShouldOfferSecurityUpgrade:(BOOL)arg1 ;
-(BOOL)shouldPromptForPasswordOnly;
-(BOOL)shouldUpdatePersistentServiceTokens;
-(void)setShouldUpdatePersistentServiceTokens:(BOOL)arg1 ;
-(BOOL)shouldPreventInteractiveAuth;
-(void)setShouldPreventInteractiveAuth:(BOOL)arg1 ;
-(BOOL)shouldForceInteractiveAuth;
-(AKAnisetteData *)companionDeviceAnisetteData;
-(void)setCompanionDeviceAnisetteData:(AKAnisetteData *)arg1 ;
-(AKDevice *)companionDevice;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(BOOL)isEphemeral;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
-(id)clientInfo;
-(NSString *)_password;
-(void)setShouldForceInteractiveAuth:(BOOL)arg1 ;
-(BOOL)needsCredentialRecovery;
-(BOOL)needsNewAppleID;
-(void)setNeedsCredentialRecovery:(BOOL)arg1 ;
-(void)setNeedsNewAppleID:(BOOL)arg1 ;
-(void)setIsEphemeral:(BOOL)arg1 ;
-(void)setShouldPromptForPasswordOnly:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)_setPassword:(id)arg1 ;
-(void)setIsUsernameEditable:(BOOL)arg1 ;
-(void)setShouldAllowAppleIDCreation:(BOOL)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)DSID;
-(NSString *)altDSID;
@end

