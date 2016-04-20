/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class OKPageViewController;


@protocol OKCouchControllerDelegate <NSObject>
@property (readonly) OKPageViewController * currentPageViewController; 
@optional
-(BOOL)couchControllerCanStartPlayback:(id)arg1;
-(void)couchControllerWillStartPlayback:(id)arg1;
-(void)couchControllerDidStopPlayback:(id)arg1;
-(BOOL)thingsAreReadyInCurrentPageForCouchController:(id)arg1;
-(BOOL)couchController:(id)arg1 thingsAreReadyForNextStep:(id)arg2 withProgress:(double*)arg3;
-(void)couchControllerStartsWaitingForReadiness:(id)arg1;
-(void)couchControllerWaitingForReadiness:(id)arg1 withProgress:(double)arg2;
-(void)couchControllerStopsWaitingForReadiness:(id)arg1;
-(void)couchControllerPlaybackLooped:(id)arg1;
-(void)couchControllerPlaybackCompleted:(id)arg1;

@required
-(OKPageViewController *)currentPageViewController;

@end

