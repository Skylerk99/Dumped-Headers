/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKCameraControllerDelegate <NSObject>
@required
-(void)runAnimation:(id)arg1;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
-(void)cameraControllerDidChangeCameraState:(id)arg1;
-(void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
-(void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
-(void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)cameraController:(id)arg1 flyoverModeWillChange:(int)arg2;
-(void)cameraController:(id)arg1 flyoverModeDidChange:(int)arg2;
-(void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;

@end

