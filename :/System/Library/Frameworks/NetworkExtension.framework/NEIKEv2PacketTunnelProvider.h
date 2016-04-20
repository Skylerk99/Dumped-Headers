/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEPacketTunnelProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSArray, NSDictionary, NEIKEv2Server, NWResolver, NEIKEv2Rekey, NEIKEv2MOBIKE;

@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider {

	BOOL _isIfCellular;
	BOOL _hasNAT;
	unsigned _flags;
	unsigned _ikeChildID;
	NEIPSecIKE_sRef _ikeRef;
	unsigned long long _ifIndex;
	long long _pathStatus;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _ikeConfig;
	NSDictionary* _childConfig;
	NSDictionary* _options;
	NEVirtualInterface_sRef _virtualInterface;
	NEIKEv2Server* _serverAddresses;
	NWResolver* _resolver;
	NEIKEv2Rekey* _rekey;
	NSObject*<OS_dispatch_semaphore> _getSocketSemaphore;
	NEIKEv2MOBIKE* _mobikeHandle;
	/*^block*/id _startTunnelCompletionHandler;
	/*^block*/id _dnsResolverCompletionHandler;

}

@property (assign) NEIPSecIKE_sRef ikeRef;                                           //@synthesize ikeRef=_ikeRef - In the implementation block
@property (assign) unsigned long long ifIndex;                                       //@synthesize ifIndex=_ifIndex - In the implementation block
@property (assign) long long pathStatus;                                             //@synthesize pathStatus=_pathStatus - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned flags;                                                   //@synthesize flags=_flags - In the implementation block
@property (assign) unsigned ikeChildID;                                              //@synthesize ikeChildID=_ikeChildID - In the implementation block
@property (retain) NSArray * ikeConfig;                                              //@synthesize ikeConfig=_ikeConfig - In the implementation block
@property (retain) NSDictionary * childConfig;                                       //@synthesize childConfig=_childConfig - In the implementation block
@property (retain) NSDictionary * options;                                           //@synthesize options=_options - In the implementation block
@property (assign) NEVirtualInterface_sRef virtualInterface;                         //@synthesize virtualInterface=_virtualInterface - In the implementation block
@property (assign) BOOL isIfCellular;                                                //@synthesize isIfCellular=_isIfCellular - In the implementation block
@property (assign) BOOL hasNAT;                                                      //@synthesize hasNAT=_hasNAT - In the implementation block
@property (retain) NEIKEv2Server * serverAddresses;                                  //@synthesize serverAddresses=_serverAddresses - In the implementation block
@property (retain) NWResolver * resolver;                                            //@synthesize resolver=_resolver - In the implementation block
@property (retain) NEIKEv2Rekey * rekey;                                             //@synthesize rekey=_rekey - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> getSocketSemaphore;              //@synthesize getSocketSemaphore=_getSocketSemaphore - In the implementation block
@property (retain) NEIKEv2MOBIKE * mobikeHandle;                                     //@synthesize mobikeHandle=_mobikeHandle - In the implementation block
@property (copy) id startTunnelCompletionHandler;                                    //@synthesize startTunnelCompletionHandler=_startTunnelCompletionHandler - In the implementation block
@property (copy) id dnsResolverCompletionHandler;                                    //@synthesize dnsResolverCompletionHandler=_dnsResolverCompletionHandler - In the implementation block
-(void)wake;
-(void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startTunnelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopTunnelWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NEIKEv2MOBIKE *)mobikeHandle;
-(unsigned long long)ifIndex;
-(void)setMobikeHandle:(NEIKEv2MOBIKE *)arg1 ;
-(NEIKEv2Server *)serverAddresses;
-(void)setIfIndex:(unsigned long long)arg1 ;
-(void)setPathStatus:(long long)arg1 ;
-(long long)tunnelBringup;
-(void)setStartTunnelCompletionHandler:(id)arg1 ;
-(void)resolveServerAddressIfNeeded:(/*^block*/id)arg1 ;
-(void)startIKEv2TunnelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NEIPSecIKE_sRef)ikeRef;
-(long long)tunnelTeardown;
-(void)stopIKEv2TunnelWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasNAT;
-(void)wakeIKEv2;
-(void)setVirtualInterface:(NEVirtualInterface_sRef)arg1 ;
-(NEVirtualInterface_sRef)virtualInterface;
-(void)setIkeRef:(NEIPSecIKE_sRef)arg1 ;
-(void)setIkeChildID:(unsigned)arg1 ;
-(void)setChildConfig:(NSDictionary *)arg1 ;
-(NSDictionary *)childConfig;
-(void)setIkeConfig:(NSArray *)arg1 ;
-(NSArray *)ikeConfig;
-(id)startTunnelCompletionHandler;
-(BOOL)isIfCellular;
-(void)setIsIfCellular:(BOOL)arg1 ;
-(long long)pathStatus;
-(void)handleInterfaceDown;
-(void)handleDNSResolution;
-(void)handleConfigChange;
-(void)handleDefaultPathChange;
-(BOOL)saveChildTunnelConfig:(void*)arg1 ;
-(BOOL)saveIKETunnelConfig:(void*)arg1 ;
-(id)createPacketTunnelNetworkSettings;
-(void)invokeStartTunnelCompletionHandler:(id)arg1 ;
-(long long)handleRedirectNotification:(id)arg1 ;
-(void)startRekeyTimer:(BOOL)arg1 ;
-(unsigned)ikeChildID;
-(void)setHasNAT:(BOOL)arg1 ;
-(NEIKEv2Rekey *)rekey;
-(void)setRekey:(NEIKEv2Rekey *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)getSocketSemaphore;
-(void)setGetSocketSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)dnsResolverCompletionHandler;
-(void)setDnsResolverCompletionHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setServerAddresses:(NEIKEv2Server *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(NWResolver *)resolver;
-(void)setResolver:(NWResolver *)arg1 ;
@end

