/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPQueueBehaviorManaging <NSObject>
@property (nonatomic,readonly) BOOL allowsUserVisibleUpcomingItems; 
@property (nonatomic,readonly) BOOL canSeek; 
@property (nonatomic,readonly) BOOL canSkipToPreviousItem; 
@property (nonatomic,readonly) long long playbackMode; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
@required
-(long long)playbackMode;
-(BOOL)canSkipItem:(id)arg1;
-(BOOL)allowsUserVisibleUpcomingItems;
-(BOOL)canSkipToPreviousItem;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(BOOL)canSeek;

@end

