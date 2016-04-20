/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;

}

@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) BOOL browsing; 
@property (readonly) NSArray * devices; 
-(BOOL)isBrowsing;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ICDeviceBrowserDelegate>)delegate;
-(void)stop;
-(int)start;
-(NSArray *)devices;
-(id)internalDevices;
-(void)finalize;
@end

