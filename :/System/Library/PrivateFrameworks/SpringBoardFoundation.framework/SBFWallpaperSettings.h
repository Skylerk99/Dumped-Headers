/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBFWallpaperSettings : _UISettings {

	BOOL _replaceBlurs;
	unsigned long long _colorBoxSize;
	long long _blurReplacementMode;

}

@property (assign,nonatomic) unsigned long long colorBoxSize;              //@synthesize colorBoxSize=_colorBoxSize - In the implementation block
@property (assign,nonatomic) BOOL replaceBlurs;                            //@synthesize replaceBlurs=_replaceBlurs - In the implementation block
@property (assign,nonatomic) long long blurReplacementMode;                //@synthesize blurReplacementMode=_blurReplacementMode - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setColorBoxSize:(unsigned long long)arg1 ;
-(unsigned long long)colorBoxSize;
-(BOOL)replaceBlurs;
-(void)setReplaceBlurs:(BOOL)arg1 ;
-(long long)blurReplacementMode;
-(void)setBlurReplacementMode:(long long)arg1 ;
@end

