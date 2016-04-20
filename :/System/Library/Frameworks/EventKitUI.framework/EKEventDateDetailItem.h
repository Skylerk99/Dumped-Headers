/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <libobjc.A.dylib/EKCellShortener.h>

@class PreferencesDoubleTwoPartValueCell, NSDate, NSString;

@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener> {

	PreferencesDoubleTwoPartValueCell* _cell;
	NSDate* _startDate;
	NSDate* _endDate;
	BOOL _indent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)shortenCell:(id)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)dealloc;
-(void)reset;
@end

