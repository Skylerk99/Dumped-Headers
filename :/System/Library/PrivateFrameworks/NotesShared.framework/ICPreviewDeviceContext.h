/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICPreviewDeviceContext : NSObject {

	NSArray* _deviceScales;
	NSArray* _scalableDeviceInfo;
	NSArray* _nonScalableDeviceInfo;

}

@property (readonly) NSArray * deviceScales; 
@property (copy) NSArray * scalableDeviceInfo;                 //@synthesize scalableDeviceInfo=_scalableDeviceInfo - In the implementation block
@property (copy) NSArray * nonScalableDeviceInfo;              //@synthesize nonScalableDeviceInfo=_nonScalableDeviceInfo - In the implementation block
+(id)sharedContext;
-(void)dealloc;
-(id)init;
-(id)deviceInfoScalable:(BOOL)arg1 ;
-(void)screensChangedNotification:(id)arg1 ;
-(NSArray *)scalableDeviceInfo;
-(void)setScalableDeviceInfo:(NSArray *)arg1 ;
-(NSArray *)nonScalableDeviceInfo;
-(void)setNonScalableDeviceInfo:(NSArray *)arg1 ;
-(NSArray *)deviceScales;
@end

