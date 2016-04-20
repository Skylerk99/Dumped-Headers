/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPUISearchPluginClientInterface
@property (getter=isFadingOut,nonatomic,readonly) BOOL fadingOut; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL _hasResults; 
@required
-(BOOL)isVisible;
-(void)dismiss;
-(BOOL)_hasResults;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2;
-(BOOL)isFadingOut;

@end

