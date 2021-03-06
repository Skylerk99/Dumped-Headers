/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>

@class EKEventAttendeePicker, EKEvent, NSArray;

@interface EKEventAttendeesEditViewController : EKEditItemViewController {

	EKEventAttendeePicker* _picker;
	EKEvent* _event;
	BOOL _cancelTapped;
	BOOL _disableShowingButtons;

}

@property (assign,nonatomic) BOOL disableShowingButtons;              //@synthesize disableShowingButtons=_disableShowingButtons - In the implementation block
@property (nonatomic,copy) NSArray * attendees; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(NSArray *)attendees;
-(id)initWithFrame:(CGRect)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(void)setDisableShowingButtons:(BOOL)arg1 ;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)setSearchAccountID:(id)arg1 ;
-(BOOL)presentModally;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(BOOL)validateAllowingAlert:(BOOL)arg1 ;
-(BOOL)disableShowingButtons;
-(void)_cancelTapped:(id)arg1 ;
-(void)_doneTapped:(id)arg1 ;
-(id)_firstInvalidRecipientAddress;
-(id)_attendeeFromRecipient:(id)arg1 ;
-(id)_recipientFromAttendee:(id)arg1 ;
-(void)viewDidLoad;
@end

