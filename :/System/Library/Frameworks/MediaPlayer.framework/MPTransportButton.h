/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPButton.h>

@class MPAVController;

@interface MPTransportButton : MPButton {

	MPAVController* player;

}

@property (nonatomic,retain) MPAVController * player; 
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(id)_automationID;
@end

