/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, NSURL;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol> {

	BOOL _statusChanged;
	BOOL _commentChanged;
	NSString* _name;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSURL* _url;
	long long _participantStatus;
	NSString* _comment;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                  //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL statusChanged;                       //@synthesize statusChanged=_statusChanged - In the implementation block
@property (nonatomic,readonly) BOOL commentChanged;                      //@synthesize commentChanged=_commentChanged - In the implementation block
@property (nonatomic,readonly) long long participantStatus;              //@synthesize participantStatus=_participantStatus - In the implementation block
@property (nonatomic,readonly) NSString * comment;                       //@synthesize comment=_comment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAttendee:(id)arg1 ;
-(long long)participantStatus;
-(BOOL)statusChanged;
-(BOOL)commentChanged;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)dealloc;
-(NSString *)name;
-(NSURL *)url;
-(NSString *)comment;
-(NSString *)emailAddress;
@end

