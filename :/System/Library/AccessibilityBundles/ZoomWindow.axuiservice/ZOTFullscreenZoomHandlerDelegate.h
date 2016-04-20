/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZOTFullscreenZoomHandlerDelegate <NSObject>
@required
-(double)zoomLevelWithFullscreenEventHandler:(id)arg1;
-(BOOL)isZoomMovingWithVelocityWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 didStartOrbAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 didEndOrbAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 updateOrbMovementAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 didReceiveAnyFingerDownAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 didReceiveAnyFingerUpAtLocation:(CGPoint)arg2;
-(void)stopZoomMovementWithVelocityWithFullscreenEventHandler:(id)arg1;
-(void)endZoomMovementWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 updateZoomMovementWithPoint:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 continueZoomMovementWithVelocity:(double)arg2 angle:(double)arg3;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerSingleTapAtLocation:(CGPoint)arg2;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerDoubleTapAtLocation:(CGPoint)arg2;
-(void)blockNotificationCenterGestureIfNeededWithFullscreenEventHandler:(id)arg1;
-(void)blockControlCenterGestureIfNeededWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerTripleTapAtLocation:(CGPoint)arg2;
-(void)updateStoredZoomedLevelWithFullscreenEventHandler:(id)arg1;
-(double)storedZoomLevelWithFullscreenEventHandler:(id)arg1;
-(CGPoint*)zoomLocationWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 storeZoomLevel:(double)arg2 location:(CGPoint)arg3 zoomed:(BOOL)arg4 forKey:(id)arg5;
-(void)fullscreenEventHandler:(id)arg1 setUsingRelativePushPanning:(BOOL)arg2;
-(BOOL)fullscreenEventHandler:(id)arg1 autopanShouldStartWithEvent:(id)arg2 speedFactor:(double*)arg3 initialSingleFingerLocation:(CGPoint)arg4;
-(int)interfaceOrientationWithFullscreenEventHandler:(id)arg1;
-(BOOL)fullscreenEventHandler:(id)arg1 autopanWithLocation:(CGPoint)arg2 initialSingleFingerLocation:(CGPoint)arg3 distance:(double)arg4 animationDuration:(double)arg5;
-(BOOL)usingRelativePushPanningWithFullscreenEventHandler:(id)arg1;
-(void)fullscreenEventHandler:(id)arg1 setZoomLevel:(double)arg2 duration:(double)arg3;
-(void)fullscreenEventHandler:(id)arg1 didThreeFingerOrbAtLocation:(CGPoint)arg2;

@end

