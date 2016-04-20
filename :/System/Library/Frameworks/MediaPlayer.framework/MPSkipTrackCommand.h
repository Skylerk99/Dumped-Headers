/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemoteCommand.h>

@interface MPSkipTrackCommand : MPRemoteCommand {

	SCD_Struct_MP10 _skipLimit;

}

@property (assign,nonatomic) SCD_Struct_MP10 skipLimit;              //@synthesize skipLimit=_skipLimit - In the implementation block
-(SCD_Struct_MP10)skipLimit;
-(void)setSkipLimit:(SCD_Struct_MP10)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
@end

