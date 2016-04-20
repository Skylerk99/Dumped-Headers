/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSNumber, NSDate, NSData, NSDictionary, NSMutableArray;

@interface IDSAppleRegistration : NSObject <NSCopying> {

	BOOL _needsMigration;
	BOOL _needsProvisioning;
	BOOL _runningSimpleAuthentication;
	BOOL _isDisabled;
	BOOL _shouldRegisterUsingDSHandle;
	BOOL _shouldAutoRegisterAllHandles;
	int _retries;
	int _absintheRetries;
	NSArray* _vettedEmails;
	NSString* _dsHandle;
	NSString* _profileID;
	NSNumber* _IDSVersion;
	NSNumber* _applicationVersion;
	NSString* _environment;
	NSDate* _registrationDate;
	NSDate* _nextRegistrationDate;
	NSData* _pushToken;
	NSNumber* _isC2K;
	long long _registrationStatus;
	long long _registrationType;
	NSString* _mainID;
	NSArray* _dependantRegistrations;
	NSString* _regionID;
	NSString* _deviceName;
	NSString* _regionBasePhoneNumber;
	NSDictionary* _regionServerContext;
	NSData* _registrationCert;
	NSDictionary* _userInfo;
	NSString* _serviceType;
	NSString* _guid;
	NSMutableArray* _candidateEmails;
	NSDictionary* _migrationContext;
	NSNumber* _identityVersion;
	NSString* _keyPairSignature;
	NSString* _idsUserID;
	NSString* _serviceIdentifier;
	NSArray* _uris;
	NSArray* _adHocServiceNames;
	NSDate* _dependantRegistrationsTTL;

}

@property (nonatomic,retain,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,retain) NSDictionary * migrationContext;                               //@synthesize migrationContext=_migrationContext - In the implementation block
@property (assign,nonatomic) long long registrationStatus;                                  //@synthesize registrationStatus=_registrationStatus - In the implementation block
@property (assign,nonatomic) long long registrationType;                                    //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                                        //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                                  //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) int retries;                                                   //@synthesize retries=_retries - In the implementation block
@property (assign,nonatomic) int absintheRetries;                                           //@synthesize absintheRetries=_absintheRetries - In the implementation block
@property (assign,nonatomic) BOOL needsMigration;                                           //@synthesize needsMigration=_needsMigration - In the implementation block
@property (assign,nonatomic) BOOL needsProvisioning;                                        //@synthesize needsProvisioning=_needsProvisioning - In the implementation block
@property (assign,nonatomic) BOOL runningSimpleAuthentication;                              //@synthesize runningSimpleAuthentication=_runningSimpleAuthentication - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                               //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,retain,readonly) NSString * userID; 
@property (nonatomic,copy) NSString * mainID;                                               //@synthesize mainID=_mainID - In the implementation block
@property (nonatomic,retain,readonly) NSString * guid;                                      //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                           //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy) NSDate * registrationDate;                                       //@synthesize registrationDate=_registrationDate - In the implementation block
@property (nonatomic,copy) NSDate * nextRegistrationDate;                                   //@synthesize nextRegistrationDate=_nextRegistrationDate - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                                              //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * email; 
@property (nonatomic,retain,readonly) NSArray * confirmedEmails; 
@property (nonatomic,retain) NSArray * vettedEmails;                                        //@synthesize vettedEmails=_vettedEmails - In the implementation block
@property (setter=setDSHandle:,nonatomic,retain) NSString * dsHandle;                       //@synthesize dsHandle=_dsHandle - In the implementation block
@property (nonatomic,readonly) NSArray * candidateEmails; 
@property (nonatomic,copy) NSString * environment;                                          //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * keyPairSignature;                                     //@synthesize keyPairSignature=_keyPairSignature - In the implementation block
@property (nonatomic,copy) NSNumber * isCDMA;                                               //@synthesize isC2K=_isC2K - In the implementation block
@property (nonatomic,copy) NSNumber * IDSVersion;                                           //@synthesize IDSVersion=_IDSVersion - In the implementation block
@property (nonatomic,copy) NSNumber * applicationVersion;                                   //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSNumber * identityVersion;                                      //@synthesize identityVersion=_identityVersion - In the implementation block
@property (nonatomic,copy) NSString * profileID;                                            //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken; 
@property (nonatomic,copy) NSString * regionID;                                             //@synthesize regionID=_regionID - In the implementation block
@property (nonatomic,copy) NSString * regionBasePhoneNumber;                                //@synthesize regionBasePhoneNumber=_regionBasePhoneNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * regionServerContext;                              //@synthesize regionServerContext=_regionServerContext - In the implementation block
@property (nonatomic,readonly) NSString * signaturePrefix; 
@property (nonatomic,copy) NSDictionary * userInfo;                                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSArray * dependantRegistrations;                                //@synthesize dependantRegistrations=_dependantRegistrations - In the implementation block
@property (nonatomic,copy) NSDate * dependantRegistrationsTTL;                              //@synthesize dependantRegistrationsTTL=_dependantRegistrationsTTL - In the implementation block
@property (nonatomic,copy) NSString * idsUserID;                                            //@synthesize idsUserID=_idsUserID - In the implementation block
@property (nonatomic,copy) NSArray * uris;                                                  //@synthesize uris=_uris - In the implementation block
@property (nonatomic,copy) NSData * authenticationCert; 
@property (nonatomic,copy) NSData * registrationCert;                                       //@synthesize registrationCert=_registrationCert - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoRegisterAllHandles;                             //@synthesize shouldAutoRegisterAllHandles=_shouldAutoRegisterAllHandles - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterUsingDSHandle;                              //@synthesize shouldRegisterUsingDSHandle=_shouldRegisterUsingDSHandle - In the implementation block
@property (nonatomic,retain,readonly) NSArray * emailsToRegister; 
@property (nonatomic,readonly) BOOL hasSentinel; 
@property (nonatomic,readonly) BOOL canRegister; 
@property (nonatomic,readonly) BOOL canSendRegistration; 
@property (nonatomic,retain) NSArray * adHocServiceNames;                                   //@synthesize adHocServiceNames=_adHocServiceNames - In the implementation block
@property (nonatomic,copy) NSMutableArray * _candidateEmails;                               //@synthesize candidateEmails=_candidateEmails - In the implementation block
-(id)_keychain_comparisonValue;
-(BOOL)_keychain_isEqual:(id)arg1 ;
-(NSString *)idsUserID;
-(NSDate *)dependantRegistrationsTTL;
-(NSData *)registrationCert;
-(NSString *)dsHandle;
-(NSString *)keyPairSignature;
-(NSArray *)uris;
-(long long)registrationType;
-(BOOL)canSendRegistration;
-(void)setRunningSimpleAuthentication:(BOOL)arg1 ;
-(NSString *)mainID;
-(NSData *)authenticationCert;
-(void)setRegionID:(NSString *)arg1 ;
-(void)setRegionBasePhoneNumber:(NSString *)arg1 ;
-(void)setRegistrationCert:(NSData *)arg1 ;
-(NSArray *)vettedEmails;
-(BOOL)shouldRegisterUsingDSHandle;
-(void)setMainID:(NSString *)arg1 ;
-(NSArray *)confirmedEmails;
-(void)setUris:(NSArray *)arg1 ;
-(void)addCandidateEmail:(id)arg1 ;
-(BOOL)runningSimpleAuthentication;
-(void)setVettedEmails:(NSArray *)arg1 ;
-(NSNumber *)isCDMA;
-(void)setProfileID:(NSString *)arg1 ;
-(NSArray *)adHocServiceNames;
-(BOOL)shouldAutoRegisterAllHandles;
-(NSArray *)dependantRegistrations;
-(NSArray *)candidateEmails;
-(void)setShouldAutoRegisterAllHandles:(BOOL)arg1 ;
-(void)setShouldRegisterUsingDSHandle:(BOOL)arg1 ;
-(void)setRegistrationType:(long long)arg1 ;
-(void)setRegionServerContext:(NSDictionary *)arg1 ;
-(void)setDSHandle:(id)arg1 ;
-(void)setAdHocServiceNames:(NSArray *)arg1 ;
-(NSNumber *)IDSVersion;
-(NSNumber *)identityVersion;
-(void)setKeyPairSignature:(NSString *)arg1 ;
-(void)setAuthenticationCert:(NSData *)arg1 ;
-(void)setDependantRegistrations:(NSArray *)arg1 ;
-(void)setMigrationContext:(NSDictionary *)arg1 ;
-(void)setNeedsMigration:(BOOL)arg1 ;
-(void)setDependantRegistrationsTTL:(NSDate *)arg1 ;
-(void)removeCandidateEmail:(id)arg1 ;
-(int)absintheRetries;
-(void)setAbsintheRetries:(int)arg1 ;
-(void)setNextRegistrationDate:(NSDate *)arg1 ;
-(void)setIdentityVersion:(NSNumber *)arg1 ;
-(void)setIDSVersion:(NSNumber *)arg1 ;
-(void)setIsCDMA:(NSNumber *)arg1 ;
-(NSArray *)emailsToRegister;
-(BOOL)hasSentinel;
-(void)setIdsUserID:(NSString *)arg1 ;
-(BOOL)removeBinding:(id)arg1 ;
-(NSString *)signaturePrefix;
-(BOOL)needsProvisioning;
-(void)setNeedsProvisioning:(BOOL)arg1 ;
-(NSMutableArray *)_candidateEmails;
-(void)set_candidateEmails:(NSMutableArray *)arg1 ;
-(BOOL)canRegister;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)removeFromKeychain;
-(NSString *)serviceIdentifier;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)environment;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)phoneNumber;
-(NSDictionary *)dictionaryRepresentation;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setApplicationVersion:(NSNumber *)arg1 ;
-(int)retries;
-(void)setRetries:(int)arg1 ;
-(NSString *)regionID;
-(NSString *)deviceName;
-(void)setPushToken:(NSData *)arg1 ;
-(NSData *)pushToken;
-(NSNumber *)applicationVersion;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setIsDisabled:(BOOL)arg1 ;
-(NSString *)userID;
-(NSDate *)nextRegistrationDate;
-(NSString *)regionBasePhoneNumber;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(id)_userID;
-(BOOL)saveToKeychain;
-(NSDictionary *)migrationContext;
-(NSString *)guid;
-(void)setRegistrationDate:(NSDate *)arg1 ;
-(NSDate *)registrationDate;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)needsMigration;
-(NSString *)email;
-(long long)registrationStatus;
-(void)setRegistrationStatus:(long long)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(BOOL)isDisabled;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

