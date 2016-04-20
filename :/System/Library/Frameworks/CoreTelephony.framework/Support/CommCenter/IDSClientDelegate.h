/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <CommCenter/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, NSArray, NSString;

@interface IDSClientDelegate : NSObject <IDSServiceDelegate> {

	IDSService* fIDSService;
	queue* fQueue;
	block<bool ()(const __CFString *, const void *)>* fValidate;
	block<void ()(const __CFDictionary *, const __CFArray *)>* fCallback;
	NSMutableDictionary* _fBootstrapInfo;
	NSArray* _fBootstrappedDeviceUuids;
	NSArray* _fConnectedDevices;
	NSString* _fPersistedDeviceListKey;
	NSString* _fCodeName;
	NSMutableDictionary* _fSentMsgs;

}

@property (retain) NSMutableDictionary * fBootstrapInfo;              //@synthesize fBootstrapInfo=_fBootstrapInfo - In the implementation block
@property (retain) NSArray * fBootstrappedDeviceUuids;                //@synthesize fBootstrappedDeviceUuids=_fBootstrappedDeviceUuids - In the implementation block
@property (retain) NSArray * fConnectedDevices;                       //@synthesize fConnectedDevices=_fConnectedDevices - In the implementation block
@property (retain) NSString * fPersistedDeviceListKey;                //@synthesize fPersistedDeviceListKey=_fPersistedDeviceListKey - In the implementation block
@property (retain) NSString * fCodeName;                              //@synthesize fCodeName=_fCodeName - In the implementation block
@property (retain) NSMutableDictionary * fSentMsgs;                   //@synthesize fSentMsgs=_fSentMsgs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFPersistedDeviceListKey:(NSString *)arg1 ;
-(void)setFCodeName:(NSString *)arg1 ;
-(void)setFBootstrapInfo:(NSMutableDictionary *)arg1 ;
-(void)setFConnectedDevices:(NSArray *)arg1 ;
-(void)setupBootstrappedDevices;
-(void)setFSentMsgs:(NSMutableDictionary *)arg1 ;
-(NSString *)fCodeName;
-(void)checkForBootstrapDevices;
-(void)watchDidPair:(id)arg1 ;
-(void)setFBootstrappedDeviceUuids:(NSArray *)arg1 ;
-(NSArray *)fConnectedDevices;
-(id)validateDevices:(id)arg1 ;
-(NSMutableDictionary *)fBootstrapInfo;
-(void)updateBootstrappedDevices:(id)arg1 ;
-(BOOL)updateDeviceSet:(id)arg1 withMessage:(id)arg2 withIdentifier:(id*)arg3 ;
-(NSMutableDictionary *)fSentMsgs;
-(BOOL)validateDevice:(id)arg1 ;
-(NSArray *)fBootstrappedDeviceUuids;
-(void)addBootstrappedDevice:(id)arg1 ;
-(void)updateDevice:(id)arg1 withMessage:(id)arg2 ;
-(NSString *)fPersistedDeviceListKey;
-(void)invokeCallbackWithDict:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 codeName:(id)arg2 validate:(/*^block*/id)arg3 callback:(/*^block*/id)arg4 queue:(dispatch_queue_sRef)arg5 ;
-(void)update:(id)arg1 withValue:(id)arg2 ;
-(void)sendMessageToDevice:(id)arg1 withName:(id)arg2 andValue:(id)arg3 ;
-(void)setBootstrapInformation:(id)arg1 ;
-(id)copyWatchDeviceID;
-(void)dealloc;
-(void)dumpState;
-(void)sendMessage:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
@end

