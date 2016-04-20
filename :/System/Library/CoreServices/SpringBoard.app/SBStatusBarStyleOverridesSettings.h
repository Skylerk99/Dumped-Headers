/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBStatusBarStyleOverridesSettings : _UISettings {

	BOOL _exclusive;
	BOOL _showsWhenForeground;
	int _styleOverride;

}

@property (assign,nonatomic) int styleOverride;                     //@synthesize styleOverride=_styleOverride - In the implementation block
@property (assign,nonatomic) BOOL exclusive;                        //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) BOOL showsWhenForeground;              //@synthesize showsWhenForeground=_showsWhenForeground - In the implementation block
+(id)settingsControllerModule;
-(void)setStyleOverride:(int)arg1 ;
-(int)styleOverride;
-(BOOL)exclusive;
-(void)setDefaultValues;
-(void)setExclusive:(BOOL)arg1 ;
-(BOOL)showsWhenForeground;
-(void)setShowsWhenForeground:(BOOL)arg1 ;
@end

