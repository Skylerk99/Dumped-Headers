/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_parameters;
@class NSObject, NSString, NSData, NSSet, NSUUID, NSURL, NSDictionary, NWAddressEndpoint, NWInterface;

@interface NWParameters : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_parameters> _internalParameters;

}

@property (copy) NSString * account; 
@property (assign) unsigned long long trafficClass; 
@property (assign) BOOL prohibitExpensivePaths; 
@property (assign) BOOL reduceBuffering; 
@property (assign) BOOL disableNagleAlgorithm; 
@property (assign) BOOL enableTLS; 
@property (copy) NSData * TLSSessionID; 
@property (copy) NSSet * SSLCipherSuites; 
@property (assign) unsigned long long minimumSSLProtocolVersion; 
@property (assign) unsigned long long maximumSSLProtocolVersion; 
@property (copy,readonly) NSString * privateDescription; 
@property (assign) unsigned short ipProtocol; 
@property (assign) int pid; 
@property (assign) unsigned uid; 
@property (copy) NSUUID * processUUID; 
@property (copy) NSUUID * effectiveProcessUUID; 
@property (copy) NSString * effectiveBundleID; 
@property (assign) BOOL useLongOutstandingQueries; 
@property (assign) BOOL useAWDL; 
@property (assign) BOOL useP2P; 
@property (assign) BOOL resolvePTR; 
@property (assign) BOOL allowPowerNap; 
@property (assign) BOOL requirePower; 
@property (assign) long long dataProtectionClass; 
@property (assign) BOOL multipath; 
@property (assign) BOOL persistent; 
@property (assign) unsigned char requiredAddressFamily; 
@property (copy) NSURL * url; 
@property (copy) NSDictionary * proxyConfiguration; 
@property (retain) NWAddressEndpoint * localAddress; 
@property (assign) BOOL reuseLocalAddress; 
@property (retain) NWInterface * requiredInterface; 
@property (assign) long long requiredInterfaceType; 
@property (assign) unsigned long long startTime; 
@property (assign) unsigned long long duration; 
@property (assign) unsigned long long workload; 
@property (assign) BOOL enableTFO; 
@property (assign) BOOL enableExtendedBackgroundIdle; 
@property (retain) NSObject*<OS_nw_parameters> internalParameters;              //@synthesize internalParameters=_internalParameters - In the implementation block
@property (assign) BOOL indefinite; 
@property (assign) BOOL noProxy; 
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) BOOL isConditionalConnection; 
@property (readonly) BOOL prohibitCellular; 
@property (readonly) NSString * requiredCellularService; 
@property (assign) long long ledbellyID; 
@property (retain) NSObject*<OS_xpc_object> ledbellyEndpoints; 
@property (retain) NSString * poolName; 
@property (assign) long long poolPriority; 
@property (retain) NSString * launchOnDemandLabel; 
@property (assign) unsigned long long launchOnDemandJob; 
@property (assign) BOOL prohibitFallback; 
@property (getter=isPassive) BOOL passive; 
@property (assign) BOOL useDUET; 
@property (assign) BOOL connectedBySocket; 
@property (assign) BOOL connectedByLaunchOnDemand; 
@property (assign) BOOL passiveConditionalConnection; 
@property (assign) BOOL forceFallbackEligibility; 
@property (assign) BOOL forceFallbackWin; 
-(BOOL)persistent;
-(void)setPoolPriority:(long long)arg1 ;
-(NSString *)privateDescription;
-(void)setRequiredInterface:(NWInterface *)arg1 ;
-(void)setEnableTLS:(BOOL)arg1 ;
-(NSData *)TLSSessionID;
-(void)setTLSSessionID:(NSData *)arg1 ;
-(NSSet *)SSLCipherSuites;
-(void)setSSLCipherSuites:(NSSet *)arg1 ;
-(unsigned long long)minimumSSLProtocolVersion;
-(void)setMinimumSSLProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)maximumSSLProtocolVersion;
-(void)setMaximumSSLProtocolVersion:(unsigned long long)arg1 ;
-(void)setIpProtocol:(unsigned short)arg1 ;
-(unsigned short)ipProtocol;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)duration;
-(NSURL *)url;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPersistent:(BOOL)arg1 ;
-(unsigned)uid;
-(unsigned long long)startTime;
-(id)initWithParameters:(id)arg1 ;
-(long long)dataProtectionClass;
-(NWAddressEndpoint *)localAddress;
-(void)setLocalAddress:(NWAddressEndpoint *)arg1 ;
-(void)setUid:(unsigned)arg1 ;
-(void)setDataProtectionClass:(long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(void)setUseDUET:(BOOL)arg1 ;
-(id)copyStrippedParameters;
-(void)setDisableNagleAlgorithm:(BOOL)arg1 ;
-(BOOL)enableTLS;
-(NSString *)poolName;
-(void)setInternalParameters:(NSObject*<OS_nw_parameters>)arg1 ;
-(void)setMultipath:(BOOL)arg1 ;
-(void)setProhibitExpensivePaths:(BOOL)arg1 ;
-(void)setReduceBuffering:(BOOL)arg1 ;
-(BOOL)hasDelegatedProcessUUID;
-(void)setPoolName:(NSString *)arg1 ;
-(void)setRequiredAddressFamily:(unsigned char)arg1 ;
-(NSObject*<OS_nw_parameters>)internalParameters;
-(long long)poolPriority;
-(BOOL)reuseLocalAddress;
-(NSUUID *)effectiveProcessUUID;
-(void)setPassiveConditionalConnection:(BOOL)arg1 ;
-(void)setProxyConfiguration:(NSDictionary *)arg1 ;
-(long long)requiredInterfaceType;
-(BOOL)prohibitExpensivePaths;
-(BOOL)connectedBySocket;
-(void)setEffectiveProcessUUID:(NSUUID *)arg1 ;
-(void)setEnableExtendedBackgroundIdle:(BOOL)arg1 ;
-(void)setNoProxy:(BOOL)arg1 ;
-(BOOL)isPassive;
-(void)setUseAWDL:(BOOL)arg1 ;
-(BOOL)useP2P;
-(int)sslProtocolWithTLSVersion:(unsigned short)arg1 ;
-(void)setLedbellyID:(long long)arg1 ;
-(BOOL)copyEffectiveAuditToken:(SCD_Struct_NW7*)arg1 ;
-(BOOL)passiveConditionalConnection;
-(BOOL)resolvePTR;
-(BOOL)disableNagleAlgorithm;
-(BOOL)noProxy;
-(void)setProhibitFallback:(BOOL)arg1 ;
-(unsigned char)requiredAddressFamily;
-(NSObject*<OS_xpc_object>)ledbellyEndpoints;
-(BOOL)prohibitCellular;
-(void)setLedbellyEndpoints:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)requirePower;
-(BOOL)useDUET;
-(void)setIndefinite:(BOOL)arg1 ;
-(void)setUseLongOutstandingQueries:(BOOL)arg1 ;
-(BOOL)enableExtendedBackgroundIdle;
-(BOOL)forceFallbackWin;
-(void)prohibitInterfaceType:(long long)arg1 ;
-(void)setForceFallbackEligibility:(BOOL)arg1 ;
-(BOOL)indefinite;
-(void)setPassive:(BOOL)arg1 ;
-(void)prohibitNetworkAgentWithUUID:(id)arg1 ;
-(BOOL)enableTFO;
-(void)setLaunchOnDemandJob:(unsigned long long)arg1 ;
-(BOOL)hasProhibitedNetworkAgents;
-(BOOL)multipath;
-(BOOL)hasDelegatedPIDForOriginatingPID:(int)arg1 ;
-(unsigned long long)launchOnDemandJob;
-(void)setResolvePTR:(BOOL)arg1 ;
-(NWInterface *)requiredInterface;
-(BOOL)hasRequiredNetworkAgents;
-(void)requireNetworkAgentWithUUID:(id)arg1 ;
-(void)setForceFallbackWin:(BOOL)arg1 ;
-(BOOL)isConditionalConnection;
-(long long)ledbellyID;
-(unsigned long long)workload;
-(void)prohibitInterfaceSubtype:(long long)arg1 ;
-(void)setUseP2P:(BOOL)arg1 ;
-(void)setEnableTFO:(BOOL)arg1 ;
-(void)setWorkload:(unsigned long long)arg1 ;
-(NSString *)requiredCellularService;
-(BOOL)useLongOutstandingQueries;
-(NSDictionary *)proxyConfiguration;
-(void)prohibitInterface:(id)arg1 ;
-(BOOL)prohibitFallback;
-(NSString *)launchOnDemandLabel;
-(void)setSourceApplicationWithToken:(SCD_Struct_NW7)arg1 ;
-(BOOL)connectedByLaunchOnDemand;
-(void)setRequirePower:(BOOL)arg1 ;
-(void)setConnectedBySocket:(BOOL)arg1 ;
-(BOOL)useAWDL;
-(BOOL)allowPowerNap;
-(BOOL)forceFallbackEligibility;
-(void)setSourceApplicationWithBundleID:(id)arg1 ;
-(NSUUID *)processUUID;
-(unsigned short)tlsVersionWithSSLProtocol:(int)arg1 ;
-(void)setConnectedByLaunchOnDemand:(BOOL)arg1 ;
-(void)setAllowPowerNap:(BOOL)arg1 ;
-(void)setProcessUUID:(NSUUID *)arg1 ;
-(void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2 ;
-(BOOL)reduceBuffering;
-(void)setLaunchOnDemandLabel:(NSString *)arg1 ;
-(void)setReuseLocalAddress:(BOOL)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)account;
-(void)setRequiredInterfaceType:(long long)arg1 ;
-(void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
-(NSString *)effectiveBundleID;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(unsigned long long)trafficClass;
@end

