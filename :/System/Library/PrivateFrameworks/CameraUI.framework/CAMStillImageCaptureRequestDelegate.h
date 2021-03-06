/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMStillImageCaptureRequestDelegate <NSObject>
@optional
-(void)stillImageRequestWillStartCapturingVideo:(id)arg1;
-(void)stillImageRequestDidStartCapturing:(id)arg1;
-(void)stillImageRequestDidStopCapturing:(id)arg1;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteStillImageRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

