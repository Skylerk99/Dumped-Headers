/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICDeviceManagerProtocol.h>

@class DeviceManagerThread, NSDictionary, NSMutableDictionary, NSString;

@interface DeviceManager : NSObject <ICDeviceManagerProtocol> {

	DeviceManagerThread* _thread;
	NSDictionary* _deviceMatchingInfo;
	NSMutableDictionary* _devices;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)postNotification:(id)arg1 ;
-(void)startRunning;
-(void)stopRunning;
-(int)openSession:(id)arg1 contextInfo:(void*)arg2 ;
-(int)closeSession:(id)arg1 contextInfo:(void*)arg2 ;
-(int)syncClock:(id)arg1 contextInfo:(void*)arg2 ;
-(int)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3 ;
-(int)eject:(id)arg1 ;
-(int)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4 ;
-(int)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3 ;
-(int)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3 ;
-(int)openDevice:(id)arg1 contextInfo:(void*)arg2 ;
-(int)closeDevice:(id)arg1 contextInfo:(void*)arg2 ;
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
-(void)postCommandCompletionNotification:(id)arg1 ;
@end

