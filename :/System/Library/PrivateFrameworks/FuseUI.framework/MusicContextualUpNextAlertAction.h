/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicContextualAlertAction.h>

@class MPPlaybackContext, MPAVController;

@interface MusicContextualUpNextAlertAction : MusicContextualAlertAction {

	long long _insertionType;
	MPPlaybackContext* _playbackContext;
	MPAVController* _player;

}
+(id)contextualUpNextActionWithEntityValueContext:(id)arg1 insertionType:(long long)arg2 didDismissHandler:(/*^block*/id)arg3 ;
-(void)_handleUpNextAction;
@end

