/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_path;
@class NSObject, NWInterface, NSString, NWParameters, NWEndpoint, NSArray;

@interface NWPath : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_path> _internalPath;

}

@property (readonly) long long status; 
@property (getter=isExpensive,readonly) BOOL expensive; 
@property (readonly) NWInterface * interface; 
@property (readonly) NWInterface * scopedInterface; 
@property (readonly) NWInterface * fallbackInterface; 
@property (getter=isFlowDivert,readonly) BOOL flowDivert; 
@property (readonly) unsigned flowDivertControlUnit; 
@property (getter=isFiltered,readonly) BOOL filtered; 
@property (readonly) unsigned filterControlUnit; 
@property (readonly) int dnsServiceID; 
@property (getter=isLocal,readonly) BOOL local; 
@property (getter=isDirect,readonly) BOOL direct; 
@property (readonly) unsigned policyID; 
@property (readonly) NSString * ssid; 
@property (getter=isRoaming,readonly) BOOL roaming; 
@property (readonly) long long mtu; 
@property (readonly) long long reason; 
@property (readonly) NSString * reasonDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (readonly) NWParameters * derivedParameters; 
@property (readonly) BOOL supportsIPv4; 
@property (readonly) BOOL supportsIPv6; 
@property (readonly) NSObject*<OS_nw_path> internalPath;                        //@synthesize internalPath=_internalPath - In the implementation block
@property (getter=isFromHelper,readonly) BOOL fromHelper; 
@property (readonly) unsigned long long helperClientID; 
@property (readonly) int helperClientPID; 
@property (getter=isHelperWaiting,readonly) BOOL helperWaiting; 
@property (assign) BOOL hasPower; 
@property (assign) BOOL duetProhibitExpensive; 
@property (readonly) BOOL mptcpAllowed; 
@property (retain) NSString * ledbellyClientID; 
@property (readonly) unsigned fallbackInterfaceIndex; 
@property (readonly) BOOL fallbackIsWeak; 
@property (assign) BOOL hasFallbackActivity; 
@property (retain) NSObject*<OS_xpc_object> proxySettings; 
@property (retain) NSObject*<OS_xpc_object> mptcpInterfaceDetails; 
@property (retain) NWEndpoint * derivedEndpoint; 
@property (readonly) NSArray * dnsServers; 
@property (readonly) NSString * statusAsString; 
+(id)statusToString:(long long)arg1 ;
-(NSString *)privateDescription;
-(BOOL)isDirect;
-(NSObject*<OS_xpc_object>)proxySettings;
-(void)setProxySettings:(NSObject*<OS_xpc_object>)arg1 ;
-(NWInterface *)scopedInterface;
-(id)init;
-(id)description;
-(id)initWithPath:(id)arg1 ;
-(long long)reason;
-(NWInterface *)interface;
-(long long)status;
-(BOOL)hasPower;
-(BOOL)isFiltered;
-(long long)mtu;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(BOOL)isExpensive;
-(unsigned long long)helperClientID;
-(int)helperClientPID;
-(NSObject*<OS_nw_path>)internalPath;
-(NWParameters *)derivedParameters;
-(void)setHasFallbackActivity:(BOOL)arg1 ;
-(unsigned)flowDivertControlUnit;
-(unsigned)fallbackInterfaceIndex;
-(NWInterface *)fallbackInterface;
-(BOOL)isRoaming;
-(BOOL)duetProhibitExpensive;
-(BOOL)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(BOOL*)arg2 ;
-(BOOL)usesNetworkAgentType:(Class)arg1 ;
-(BOOL)isHelperWaiting;
-(BOOL)isFlowDivert;
-(BOOL)usesNetworkAgent:(id)arg1 ;
-(BOOL)hasFallbackActivity;
-(void)setHasPower:(BOOL)arg1 ;
-(id)copyFlowDivertToken;
-(void)setMPTCPAllowed:(BOOL)arg1 fallbackInterfaceIndex:(unsigned long long)arg2 ;
-(int)dnsServiceID;
-(NSObject*<OS_xpc_object>)mptcpInterfaceDetails;
-(id)networkAgentsOfType:(Class)arg1 ;
-(BOOL)isFromHelper;
-(unsigned)filterControlUnit;
-(void)setDuetProhibitExpensive:(BOOL)arg1 ;
-(NSString *)statusAsString;
-(BOOL)mptcpAllowed;
-(BOOL)fallbackIsWeak;
-(BOOL)hasUnsatisfiedFallbackAgent;
-(void)setLedbellyClientID:(NSString *)arg1 ;
-(unsigned)policyID;
-(id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
-(void)setDerivedEndpoint:(NWEndpoint *)arg1 ;
-(id)inactiveNetworkAgentUUIDsOnlyVoluntary:(BOOL)arg1 ;
-(NWEndpoint *)derivedEndpoint;
-(BOOL)isEqualToPath:(id)arg1 ;
-(void)setMptcpInterfaceDetails:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)usesInterfaceType:(long long)arg1 ;
-(NSString *)ledbellyClientID;
-(NSString *)reasonDescription;
-(BOOL)isLocal;
-(NSArray *)dnsServers;
-(BOOL)supportsIPv4;
-(BOOL)supportsIPv6;
-(NSString *)ssid;
@end

