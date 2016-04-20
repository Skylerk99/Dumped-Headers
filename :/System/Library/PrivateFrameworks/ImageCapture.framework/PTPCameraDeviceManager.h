/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/DeviceManager.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@class NSNetServiceBrowser, NSMutableArray, NSString;

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSNetServiceBrowser* _netServiceBrowser;
	NSMutableArray* _netServices;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)startRunning;
-(void)stopRunning;
-(void)openDeviceImp:(id)arg1 ;
-(void)closeDeviceImp:(id)arg1 ;
-(void)openSessionImp:(id)arg1 ;
-(void)closeSessionImp:(id)arg1 ;
-(void)syncClockImp:(id)arg1 ;
-(void)getThumbnailOfFileImp:(id)arg1 ;
-(void)getMetadataOfFileImp:(id)arg1 ;
-(void)deleteFileImp:(id)arg1 ;
-(void)downloadFileImp:(id)arg1 ;
-(void)ejectImp:(id)arg1 ;
-(int)handleEvent:(id)arg1 onDevice:(id)arg2 contextInfo:(void*)arg3 ;
-(id)usbLocationIDsOfPTPDevices;
-(void)handleEventImp:(id)arg1 ;
@end

