/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPostTaskDelegate.h>

@class NSURL, CalDAVCalendarServerInviteNotificationItem, NSString;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {

	BOOL _acceptInvitation;
	NSURL* _sharedAs;
	CalDAVCalendarServerInviteNotificationItem* _invitation;
	NSURL* _calendarHomeURL;

}

@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (nonatomic,retain) NSURL * sharedAs;                                                     //@synthesize sharedAs=_sharedAs - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerInviteNotificationItem * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) BOOL acceptInvitation;                                                //@synthesize acceptInvitation=_acceptInvitation - In the implementation block
@property (nonatomic,retain) NSURL * calendarHomeURL;                                              //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;
-(void)setCalendarHomeURL:(NSURL *)arg1 ;
-(void)setAcceptInvitation:(BOOL)arg1 ;
-(id)generateReply;
-(NSURL *)calendarHomeURL;
-(void)setSharedAs:(NSURL *)arg1 ;
-(id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(NSURL *)sharedAs;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(CalDAVCalendarServerInviteNotificationItem *)invitation;
-(void)setInvitation:(CalDAVCalendarServerInviteNotificationItem *)arg1 ;
-(BOOL)acceptInvitation;
@end

