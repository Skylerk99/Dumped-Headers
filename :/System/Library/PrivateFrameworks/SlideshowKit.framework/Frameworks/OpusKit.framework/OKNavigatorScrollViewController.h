/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorScrollViewControllerProxy.h>

@class UIPushBehavior;

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy {

	UIPushBehavior* _velocityPushBehavior;

}
+(id)supportedSettings;
-(CGRect)contentBounds;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(CGPoint)contentOffset;
-(CGSize)contentSize;
-(void)viewDidLoad;
-(void)commonInit;
-(id)dynamicsPushBehaviors;
-(id)layoutSettingsKeys;
-(void)pushWatchdog:(id)arg1 ;
-(void)setSettingContentSize:(CGSize)arg1 ;
-(CGSize)settingContentSize;
-(void)setSettingIndicatorStyle:(unsigned long long)arg1 ;
-(void)setSettingAlwaysBounceVertical:(BOOL)arg1 ;
-(void)setSettingAlwaysBounceHorizontal:(BOOL)arg1 ;
-(void)setSettingShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)setSettingShowsHorizontalScrollIndicator:(BOOL)arg1 ;
@end

