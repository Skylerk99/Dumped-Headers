/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class XBStatusBarSettings;

@interface SBAppStatusBarSettingsAssertion : NSObject {

	XBStatusBarSettings* _settings;
	unsigned long long _level;

}

@property (nonatomic,copy,readonly) XBStatusBarSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) unsigned long long level;                         //@synthesize level=_level - In the implementation block
+(id)assertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
+(id)assertionWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 ;
-(id)initWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(id)initWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(XBStatusBarSettings *)settings;
-(unsigned long long)level;
@end

