/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKitUI/EventKitUI-Structs.h>
@class NSNumberFormatter, NSDataDetector;

@interface EKEventDescriptionGenerator : NSObject {

	int _meCardID;
	CFDateFormatterRef _dateFormatter;
	NSNumberFormatter* _numberFormatter;
	NSDataDetector* _addressDetector;

}
-(id)_sharedNumberFormatter;
-(void)_addressBookDidChange:(id)arg1 ;
-(int)_identifierForMeCard;
-(id)_identifiersForAllCardsLinkedToMeCard;
-(id)_nameForPersonWithIdentifier:(int)arg1 ;
-(id)_firstNameForMeCard;
-(id)naturalLanguageDescriptionForEvent:(id)arg1 isFirstInDay:(BOOL)arg2 ;
-(CFDateFormatterRef)_sharedDateFormatter;
-(id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4 ;
-(id)_locationStringForEvent:(id)arg1 ;
-(id)_attendeesForEvent:(id)arg1 sorted:(BOOL)arg2 limtedTo:(long long)arg3 ;
-(id)_randomNumber;
-(BOOL)_eventIsAlreadyLate:(id)arg1 ;
-(BOOL)_prependBusyDayMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_isDateInWeekend:(id)arg1 ;
-(BOOL)_arrayHasMorningEvents:(id)arg1 ;
-(BOOL)_prependFreeMorningMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_arrayHasAfternoonEvents:(id)arg1 ;
-(BOOL)_appendFreeAfternoonMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_doesEventStartEarly:(id)arg1 ;
-(BOOL)_prependEarlyStartMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_prepareToUseMessageWithID:(id)arg1 shouldAllowWeekendUsage:(BOOL)arg2 ;
-(id)_noonDateForEvents:(id)arg1 ;
-(id)_adjustedMinutesTillEventStarts:(id)arg1 ;
-(BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2 ;
-(id)_addressDetector;
-(int)_fetchIdentifierForMeCard;
-(id)naturalLanguageDescriptionForBirthdayEvents:(id)arg1 ;
-(id)naturalLanguageDescriptionForUpcomingEvents:(id)arg1 firstInDay:(BOOL)arg2 ;
-(id)naturalLanguageDescriptionForAttendees:(id)arg1 ;
-(id)tomorrowSnippetForUpcomingEvents:(id)arg1 withTodayEvents:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

