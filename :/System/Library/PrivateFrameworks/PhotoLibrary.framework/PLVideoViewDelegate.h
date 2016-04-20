/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLVideoViewDelegate <NSObject>
@optional
-(void)videoViewDidCreateAttachments:(id)arg1;
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
-(double)videoViewScrubberWidth:(id)arg1;
-(BOOL)videoViewCanBeginPlayback:(id)arg1;
-(void)videoViewIsReadyToBeginPlayback:(id)arg1;
-(void)videoViewPlaybackDidFail:(id)arg1;
-(void)videoViewDidBeginPlayback:(id)arg1;
-(void)videoViewDidPausePlayback:(id)arg1;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
-(void)videoViewDidBeginScrubbing:(id)arg1;
-(void)videoViewDidEndScrubbing:(id)arg1;
-(void)videoViewDidBeginRemaking:(id)arg1;
-(void)videoViewDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
-(void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
-(void)videoViewWillBeginEditing:(id)arg1;
-(void)videoViewDidBeginEditing:(id)arg1;
-(void)videoViewDidCancelEditing:(id)arg1;
-(void)videoView:(id)arg1 displayPlayOverlay:(id)arg2;
-(BOOL)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
-(BOOL)videoViewCanCreateMetadata:(id)arg1;
-(id)videoViewRequestsPickedAirplayRoute:(id)arg1;

@end

