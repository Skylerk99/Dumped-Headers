/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCellReorderControl.h>

@class UIPanGestureRecognizer, UITapGestureRecognizer;

@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl {

	UIPanGestureRecognizer* _panRecognizer;
	UITapGestureRecognizer* _upArrowButtonRecognizer;
	UITapGestureRecognizer* _downArrowButtonRecognizer;
	BOOL _cellHasReorderingAppearance;

}
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(id)initWithTableViewCell:(id)arg1 ;
-(BOOL)_shouldHandlePressEvent:(id)arg1 ;
-(void)_panRecognizer:(id)arg1 ;
-(void)_upArrowButton:(id)arg1 ;
-(void)_downArrowButton:(id)arg1 ;
-(void)_endIndirectTracking;
-(void)_beginIndirectTracking;
-(void)_arrowButton:(long long)arg1 ;
@end

