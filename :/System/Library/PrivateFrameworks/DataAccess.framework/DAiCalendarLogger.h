/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSLoggingDelegate.h>

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>
+(id)sharedLogger;
-(void)logICSMessage:(id)arg1 atLevel:(long long)arg2 ;
-(void)registerWithiCalendar;
@end

