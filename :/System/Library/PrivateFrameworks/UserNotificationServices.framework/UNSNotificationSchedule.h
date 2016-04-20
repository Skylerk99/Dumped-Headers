/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface UNSNotificationSchedule : NSObject <NSSecureCoding> {

	NSMutableDictionary* _fireDatesToNotifications;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_initWithDictionary:(id)arg1 ;
-(id)fireDates;
-(void)addLocalNotification:(id)arg1 forFireDate:(id)arg2 ;
-(id)localNotificationsForFireDate:(id)arg1 ;
@end

