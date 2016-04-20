/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditor.h>

@class EKEventDateEditItem, UIColor, EKEvent;

@interface EKEventEditor : EKCalendarItemEditor {

	EKEventDateEditItem* _dateItem;
	BOOL _isTransitioning;
	BOOL _showAttachments;
	UIColor* _backgroundColor;

}

@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) BOOL showAttachments;                   //@synthesize showAttachments=_showAttachments - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)refreshStartAndEndDates;
-(BOOL)showAttachments;
-(void)setShowAttachments:(BOOL)arg1 ;
-(id)_editItems;
-(id)preferredTitle;
-(id)_calendarItemIndexSet;
-(void)refreshInvitees;
-(void)refreshLocation;
-(id)_orderedEditItems;
-(BOOL)saveCalendarItemWithSpan:(long long)arg1 error:(id*)arg2 ;
-(id)defaultTitleForCalendarItem;
-(id)_nameForDeleteButton;
-(void)setupDeleteButton;
-(id)defaultAlertTitle;
-(id)notificationNamesForLocaleChange;
-(void)_copyEventForPossibleRevert;
-(void)_revertEvent;
-(BOOL)_canDetachSingleOccurrence;
-(id)_viewForSheet;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(unsigned long long)entityType;
@end

