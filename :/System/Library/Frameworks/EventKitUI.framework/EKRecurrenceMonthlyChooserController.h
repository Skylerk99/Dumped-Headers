/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceChooserController.h>

@protocol EKRecurrenceChooserControllerDelegate;
@class EKRecurrenceMonthDayChooserController, EKRecurrenceOrdinalChooserController, UITableViewCell;

@interface EKRecurrenceMonthlyChooserController : EKRecurrenceChooserController {

	EKRecurrenceMonthDayChooserController* _monthDayChooser;
	EKRecurrenceOrdinalChooserController* _ordinalChooser;
	id<EKRecurrenceChooserControllerDelegate> _delegate;
	long long _selectedRow;
	UITableViewCell* _onEachCell;
	UITableViewCell* _onTheCell;

}

@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence; 
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)_currentChooser;
-(void)_selectRow:(long long)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(BOOL)drawBackgroundForRow:(long long)arg1 ;
-(void)rowTapped:(long long)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id)arg1 ;
-(long long)numberOfRows;
-(long long)frequency;
@end

