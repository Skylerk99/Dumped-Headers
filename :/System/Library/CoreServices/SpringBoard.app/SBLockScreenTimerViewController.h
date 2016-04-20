/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SBLockScreenTimerViewControllerDelegate;
@class NSTimer, NSDate;

@interface SBLockScreenTimerViewController : UIViewController {

	BOOL _enabled;
	NSTimer* _updateTimer;
	NSDate* _endDate;
	id<SBLockScreenTimerViewControllerDelegate> _delegate;

}

@property (assign) id<SBLockScreenTimerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleClockNotificationUpdate:(id)arg1 ;
-(void)_scheduledLocalNotificationsDidChange:(id)arg1 ;
-(void)setTimerHidden:(BOOL)arg1 ;
-(BOOL)_isEndDateValid;
-(void)_updateTimerFired;
-(void)_updateTimerLabelView;
-(void)_scheduledTimerDidChange:(id)arg1 ;
-(BOOL)isTimerActive;
-(void)setContentAlpha:(double)arg1 ;
-(void)setDelegate:(id<SBLockScreenTimerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBLockScreenTimerViewControllerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_startTimer;
-(void)_stopTimer;
-(id)timerView;
-(void)setEndDate:(id)arg1 ;
@end

