/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHUDView.h>

@interface SBRingerHUDView : SBHUDView {

	BOOL _silent;

}

@property (assign,getter=isSilent,nonatomic) BOOL silent;              //@synthesize silent=_silent - In the implementation block
-(void)_updateSilentImage;
-(void)setSilent:(BOOL)arg1 ;
-(BOOL)isSilent;
-(id)init;
@end

