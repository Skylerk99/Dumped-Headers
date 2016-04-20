/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>
#import <SpringBoard/SBAppViewHostRequester.h>

@class SBBestAppSuggestion, SBAppView, SBOrientationTransformWrapperView, NSString;

@interface SBSwitcherAppSuggestionSlideUpView : SBSwitcherWallpaperPageContentView <SBAppViewHostRequester> {

	SBBestAppSuggestion* _bestAppSuggestion;
	SBAppView* _appView;
	SBOrientationTransformWrapperView* _appViewLayoutWrapper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)appViewRequesterPriority:(id)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appSuggestion:(id)arg2 ;
-(void)_configureContentView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)invalidate;
-(void)setOrientation:(long long)arg1 ;
@end

