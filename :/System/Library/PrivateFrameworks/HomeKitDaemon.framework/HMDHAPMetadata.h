/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, HAPMetadata, NSArray, NSDictionary;

@interface HMDHAPMetadata : NSObject <NSSecureCoding> {

	BOOL _incomplete;
	NSNumber* _version;
	NSNumber* _schemaVersion;
	HAPMetadata* _hapMetadata;
	NSArray* _hapValueUnits;
	NSArray* _hapProperties;
	NSArray* _hapCharacteristics;
	NSArray* _hapServices;
	NSArray* _hapSupportsAuthDataTuples;
	NSArray* _hmRequiresDeviceUnlockTuples;
	NSArray* _hmAccessoryCategories;
	NSArray* _hmBlacklistedServices;
	NSArray* _hmBlacklistedCharacteristics;
	NSDictionary* _assistantServices;
	NSArray* _assistantCharacteristics;
	NSDictionary* _assistantUnits;

}

@property (nonatomic,retain) NSNumber * version;                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSNumber * schemaVersion;                            //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (assign,nonatomic) BOOL incomplete;                                     //@synthesize incomplete=_incomplete - In the implementation block
@property (nonatomic,retain) HAPMetadata * hapMetadata;                           //@synthesize hapMetadata=_hapMetadata - In the implementation block
@property (nonatomic,retain) NSArray * hapValueUnits;                             //@synthesize hapValueUnits=_hapValueUnits - In the implementation block
@property (nonatomic,retain) NSArray * hapProperties;                             //@synthesize hapProperties=_hapProperties - In the implementation block
@property (nonatomic,retain) NSArray * hapCharacteristics;                        //@synthesize hapCharacteristics=_hapCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * hapServices;                               //@synthesize hapServices=_hapServices - In the implementation block
@property (nonatomic,retain) NSArray * hapSupportsAuthDataTuples;                 //@synthesize hapSupportsAuthDataTuples=_hapSupportsAuthDataTuples - In the implementation block
@property (nonatomic,retain) NSArray * hmRequiresDeviceUnlockTuples;              //@synthesize hmRequiresDeviceUnlockTuples=_hmRequiresDeviceUnlockTuples - In the implementation block
@property (nonatomic,retain) NSArray * hmAccessoryCategories;                     //@synthesize hmAccessoryCategories=_hmAccessoryCategories - In the implementation block
@property (nonatomic,retain) NSArray * hmBlacklistedServices;                     //@synthesize hmBlacklistedServices=_hmBlacklistedServices - In the implementation block
@property (nonatomic,retain) NSArray * hmBlacklistedCharacteristics;              //@synthesize hmBlacklistedCharacteristics=_hmBlacklistedCharacteristics - In the implementation block
@property (nonatomic,retain) NSDictionary * assistantServices;                    //@synthesize assistantServices=_assistantServices - In the implementation block
@property (nonatomic,retain) NSArray * assistantCharacteristics;                  //@synthesize assistantCharacteristics=_assistantCharacteristics - In the implementation block
@property (nonatomic,retain) NSDictionary * assistantUnits;                       //@synthesize assistantUnits=_assistantUnits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)initWithURL:(id)arg1 error:(id*)arg2 ;
+(id)getBuiltinInstance;
+(id)getSharedInstance;
+(BOOL)setSharedInstance:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(NSNumber *)schemaVersion;
-(void)setSchemaVersion:(NSNumber *)arg1 ;
-(BOOL)requiresDeviceUnlock:(id)arg1 forService:(id)arg2 ;
-(id)generateDictionary;
-(id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id*)arg3 ;
-(HAPMetadata *)hapMetadata;
-(NSArray *)hmBlacklistedServices;
-(NSArray *)hmBlacklistedCharacteristics;
-(NSArray *)hmAccessoryCategories;
-(void)setHmBlacklistedServices:(NSArray *)arg1 ;
-(void)setHmBlacklistedCharacteristics:(NSArray *)arg1 ;
-(void)setHmAccessoryCategories:(NSArray *)arg1 ;
-(NSArray *)assistantCharacteristics;
-(void)setAssistantCharacteristics:(NSArray *)arg1 ;
-(BOOL)incomplete;
-(void)setIncomplete:(BOOL)arg1 ;
-(void)setHapMetadata:(HAPMetadata *)arg1 ;
-(void)createHMDContainersForHAPMetadata;
-(BOOL)parseHMMetadata:(id)arg1 ;
-(BOOL)parseAssistantMetadata:(id)arg1 ;
-(NSArray *)hapValueUnits;
-(void)setHapValueUnits:(NSArray *)arg1 ;
-(NSArray *)hapProperties;
-(void)setHapProperties:(NSArray *)arg1 ;
-(NSArray *)hapCharacteristics;
-(void)setHapCharacteristics:(NSArray *)arg1 ;
-(NSArray *)hapServices;
-(void)setHapServices:(NSArray *)arg1 ;
-(NSArray *)hapSupportsAuthDataTuples;
-(void)setHapSupportsAuthDataTuples:(NSArray *)arg1 ;
-(void)setHmRequiresDeviceUnlockTuples:(NSArray *)arg1 ;
-(BOOL)shouldFilterServiceOfType:(id)arg1 ;
-(BOOL)parseRequiresDeviceUnlockMetadata:(id)arg1 ;
-(BOOL)parseCategories:(id)arg1 ;
-(BOOL)parseBlacklistedServices:(id)arg1 ;
-(id)parseHAPAssistantServices:(id)arg1 ;
-(void)setAssistantServices:(NSDictionary *)arg1 ;
-(id)parseAssistantCharacteristics:(id)arg1 ;
-(id)parseAssistantUnits:(id)arg1 ;
-(void)setAssistantUnits:(NSDictionary *)arg1 ;
-(NSArray *)hmRequiresDeviceUnlockTuples;
-(id)generateHAPMetadataTuplesDictionary:(id)arg1 ;
-(id)generateCategoriesDictionary:(id)arg1 ;
-(id)generateBlacklistedServices:(id)arg1 ;
-(id)generateBlacklistedCharacteristics:(id)arg1 ;
-(NSDictionary *)assistantServices;
-(NSDictionary *)assistantUnits;
-(id)generateHMDictionary;
-(id)generateAssistantDictionary;
-(BOOL)checkTuples:(id)arg1 forCharacteristic:(id)arg2 service:(id)arg3 ;
-(id)createHAPMetadata:(id)arg1 ;
-(BOOL)shouldFilterCharacteristicOfType:(id)arg1 ;
-(void)augmentMissingInformation:(id)arg1 ;
-(BOOL)supportsAuthorizationData:(id)arg1 forService:(id)arg2 ;
-(id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2 ;
-(id)categoryForOther;
-(id)categoryForIdentifier:(id)arg1 ;
-(id)descriptionForServiceType:(id)arg1 ;
-(id)descriptionForCharacteristicType:(id)arg1 ;
@end

