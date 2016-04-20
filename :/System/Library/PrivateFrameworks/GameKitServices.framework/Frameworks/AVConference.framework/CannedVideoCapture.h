/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoCaptureProtocol.h>

@protocol CannedVideoFrameFeeder;
@interface CannedVideoCapture : NSObject <VideoCaptureProtocol> {

	CannedVideoCapturePrivate* _pimpl;
	id<CannedVideoFrameFeeder> _frameFeeder;

}

@property (nonatomic,readonly) CannedVideoCapturePrivate* pimpl;                  //@synthesize pimpl=_pimpl - In the implementation block
@property (nonatomic,retain) id<CannedVideoFrameFeeder> frameFeeder;              //@synthesize frameFeeder=_frameFeeder - In the implementation block
+(int)cannedVideoTypeForPath:(id)arg1 ;
+(int)createPixelBufferPool:(_CVPixelBufferPool*)arg1 withWidth:(int)arg2 height:(int)arg3 ;
-(void)dealloc;
-(int)stop:(BOOL)arg1 ;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(BOOL)isPreviewRunning;
-(int)getCamera:(unsigned*)arg1 ;
-(int)getCameraType:(int*)arg1 ;
-(id)initWithOptions:(void*)arg1 callback:(/*function pointer*/void*)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 cameraType:(int)arg6 folder:(id)arg7 withError:(int*)arg8 ;
-(void)stopThreads;
-(int)startThreads;
-(CannedVideoCapturePrivate*)pimpl;
-(id<CannedVideoFrameFeeder>)frameFeeder;
-(void)setFrameFeeder:(id<CannedVideoFrameFeeder>)arg1 ;
-(int)setCameraType:(int)arg1 ;
-(int)setCamera:(unsigned)arg1 ;
-(int)startPreview;
@end

