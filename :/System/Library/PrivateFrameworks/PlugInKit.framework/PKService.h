/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol PKServiceDelegate, OS_dispatch_queue;
@class NSXPCListener, NSMutableDictionary, PKServicePersonality, NSObject, NSArray, NSString;

@interface PKService : NSObject <NSXPCListenerDelegate> {

	BOOL _shared;
	id<PKServiceDelegate> _delegate;
	NSXPCListener* _serviceListener;
	NSMutableDictionary* _personalities;
	PKServicePersonality* _solePersonality;
	NSObject*<OS_dispatch_queue> __sync;
	NSArray* _subsystems;

}

@property (retain) id<PKServiceDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSXPCListener * serviceListener;                     //@synthesize serviceListener=_serviceListener - In the implementation block
@property (retain) NSMutableDictionary * personalities;                 //@synthesize personalities=_personalities - In the implementation block
@property (retain) PKServicePersonality * solePersonality;              //@synthesize solePersonality=_solePersonality - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _sync;                  //@synthesize _sync=__sync - In the implementation block
@property (retain) NSArray * subsystems;                                //@synthesize subsystems=_subsystems - In the implementation block
@property (assign) BOOL shared;                                         //@synthesize shared=_shared - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultService;
+(void)main;
+(int)_defaultRun:(int)arg1 arguments:(const char**)arg2 ;
-(BOOL)shared;
-(NSObject*<OS_dispatch_queue>)_sync;
-(NSXPCListener *)serviceListener;
-(void)setDelegate:(id<PKServiceDelegate>)arg1 ;
-(id)init;
-(id<PKServiceDelegate>)delegate;
-(void)run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)hostPrincipalForPlugInNamed:(id)arg1 ;
-(NSArray *)subsystems;
-(void)setShared:(BOOL)arg1 ;
-(void)registerPersonality:(id)arg1 ;
-(BOOL)unregisterPersonality:(id)arg1 ;
-(void)setPersonalities:(NSMutableDictionary *)arg1 ;
-(void)set_sync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)checkEnvironment:(id)arg1 ;
-(void)setServiceListener:(NSXPCListener *)arg1 ;
-(void)discoverSubsystems;
-(id)configuredSubsystemList;
-(id)discoverSubsystemNamed:(id)arg1 logMissing:(BOOL)arg2 ;
-(BOOL)_processDefaultSubsystemName:(id)arg1 ;
-(void)setSubsystems:(NSArray *)arg1 ;
-(void)mergeSubsystems:(id)arg1 from:(id)arg2 ;
-(void)mergeSubsystemList:(id)arg1 from:(id)arg2 ;
-(id)personalityNamed:(id)arg1 ;
-(PKServicePersonality *)solePersonality;
-(NSMutableDictionary *)personalities;
-(void)setSolePersonality:(PKServicePersonality *)arg1 ;
-(void)launchContainingApplicationForPlugInNamed:(id)arg1 ;
-(void)copyAppStoreReceipt:(/*^block*/id)arg1 ;
-(id)defaultsForPlugInNamed:(id)arg1 ;
-(id)plugInPrincipalForPlugInNamed:(id)arg1 ;
-(id)embeddedPrincipalForPlugInNamed:(id)arg1 ;
-(id)connectionForPlugInNamed:(id)arg1 ;
-(id)personalityNamed:(id)arg1 forHostPid:(int)arg2 ;
@end

