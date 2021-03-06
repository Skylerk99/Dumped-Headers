/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITransitionState.h>

@class UIView, UIViewController;

@interface _UIQueuingScrollViewState : _UITransitionState {

	UIView* _view;
	UIViewController* _viewController;
	BOOL _manual;

}

@property (nonatomic,readonly) UIView * view;                            //@synthesize view=_view - In the implementation block
@property (getter=isManual,nonatomic,readonly) BOOL manual;              //@synthesize manual=_manual - In the implementation block
-(id)description;
-(UIView *)view;
-(BOOL)isCompatibleWithTransitionInDirection:(long long)arg1 ;
-(id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isManual;
@end

