/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBScaleZoomSettings.h>

@class SBAnimationSettings;

@interface SBFolderZoomSettings : SBScaleZoomSettings {

	SBAnimationSettings* _innerFolderFadeSettings;

}

@property (retain) SBAnimationSettings * innerFolderFadeSettings;              //@synthesize innerFolderFadeSettings=_innerFolderFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(SBAnimationSettings *)innerFolderFadeSettings;
-(void)setInnerFolderFadeSettings:(SBAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end

