/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventEditItem.h>
#import <libobjc.A.dylib/EKTimeZoneViewControllerDelegate.h>
#import <libobjc.A.dylib/EKCellShortener.h>

@class NSDateComponents, NSTimeZone, PreferencesTwoPartValueCell, UITableViewCell, UIDatePicker, NSString;

@interface EKEventDateEditItem : EKEventEditItem <EKTimeZoneViewControllerDelegate, EKCellShortener> {

	NSDateComponents* _startComponents;
	NSDateComponents* _endComponents;
	BOOL _allDay;
	NSTimeZone* _startTimeZone;
	NSTimeZone* _endTimeZone;
	BOOL _showTimeZones;
	PreferencesTwoPartValueCell* _startDateCell;
	PreferencesTwoPartValueCell* _endDateCell;
	UITableViewCell* _allDayCell;
	UITableViewCell* _startTimeZoneCell;
	UITableViewCell* _endTimeZoneCell;
	UITableViewCell* _startDatePickerCell;
	UITableViewCell* _endDatePickerCell;
	long long _selectedSubitem;
	UIDatePicker* _startDatePicker;
	UIDatePicker* _endDatePicker;
	BOOL _endTimeWasMessedUp;
	BOOL _changingDate;
	int _shorteningStatus;
	BOOL _pushingTZController;
	BOOL _showsAllDay;

}

@property (assign,nonatomic) BOOL showsAllDay;                      //@synthesize showsAllDay=_showsAllDay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)isInline;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)_setStartTimeZone:(id)arg1 ;
-(void)_setEndTimeZone:(id)arg1 ;
-(id)_calendarForEventComponents:(BOOL)arg1 ;
-(void)_setAllDay:(BOOL)arg1 ;
-(void)_updateDatePickerAnimated:(BOOL)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)_shouldShowTimeZone;
-(void)_allDayChanged:(id)arg1 ;
-(void)_datePickerChanged:(id)arg1 ;
-(void)_datePickerDoubleTapped:(id)arg1 ;
-(id)_newDatePicker;
-(void)_adjustDatePickerFrame:(id)arg1 toFillEnclosingViewWidth:(id)arg2 ;
-(id)_dateComponentsInSystemCalendarFromDate:(id)arg1 ;
-(id)_dateInSystemCalendarFromComponents:(id)arg1 ;
-(long long)_subitemForRow:(long long)arg1 ;
-(id)_startDateCell;
-(id)_endDateCell;
-(id)_allDayCell;
-(id)_startTimeZoneCell;
-(id)_endTimeZoneCell;
-(id)_timeZoneDescription:(id)arg1 ;
-(id)_startDatePickerCell;
-(id)_endDatePickerCell;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)_hideInlineDateControls;
-(long long)_rowForSubitem:(long long)arg1 ;
-(void)_updateDateColors;
-(void)editor:(id)arg1 didStartEditingItem:(id)arg2 ;
-(void)_resetStartString:(BOOL)arg1 endString:(BOOL)arg2 ;
-(void)_updateTimeWidths;
-(void)_pickNextReasonableTime;
-(void)_validateTimezones;
-(id)_dateFromComponents:(id)arg1 timeZone:(id)arg2 ;
-(BOOL)_endDateIsBeforeStartDate;
-(void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2 ;
-(void)timeZoneViewControllerDidCancel:(id)arg1 ;
-(void)shortenCell:(id)arg1 ;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnCommit;
-(BOOL)forceRefreshInviteesItemOnCommit;
-(BOOL)forceRefreshLocationItemOnCommit;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(void)endInlineEditing;
-(BOOL)showsAllDay;
-(void)setShowsAllDay:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)_setStartDate:(id)arg1 ;
-(void)_setEndDate:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

