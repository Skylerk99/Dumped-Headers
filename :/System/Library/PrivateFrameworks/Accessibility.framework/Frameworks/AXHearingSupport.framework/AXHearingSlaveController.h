/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <AXHearingSupport/AXHARemoteController.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <AXHearingSupport/AXHARemoteUpdateProtocol.h>

@class AXHATimer, AXRemoteHearingAidDevice, NSString;

@interface AXHearingSlaveController : AXHARemoteController <NSNetServiceDelegate, AXHARemoteUpdateProtocol> {

	CFSocketRef _ipv4socket;
	CFSocketRef _ipv6socket;
	AXHATimer* _resolveTimer;
	BOOL _isVisible;
	AXRemoteHearingAidDevice* _device;
	/*^block*/id _searchCompletion;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) id searchCompletion;                              //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)initialize;
-(BOOL)setVisible:(BOOL)arg1 ;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3 ;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(void)closeConnectionWithError:(id)arg1 ;
-(void)resolveMasterWithCompletion:(/*^block*/id)arg1 ;
-(void)openConnectionIfNecessary;
-(BOOL)isSlave;
-(void)validatePairedAid;
-(void)receivedData:(id)arg1 ;
-(void)acceptConnection:(int)arg1 ;
-(void)setSearchCompletion:(id)arg1 ;
-(id)searchCompletion;
-(AXRemoteHearingAidDevice *)device;
-(void)resetConnection;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
@end

