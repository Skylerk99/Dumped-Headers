/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSMutableDictionary, EKEventDetailAttendeesCell, NSArray;

@interface EKEventAttendeesDetailItem : EKEventDetailItem {

	NSMutableDictionary* _attendeesCells;
	EKEventDetailAttendeesCell* _cell;
	long long _status;
	NSArray* _attendees;

}

@property (assign,nonatomic) long long status;                 //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * attendees;              //@synthesize attendees=_attendees - In the implementation block
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)reset;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
@end

