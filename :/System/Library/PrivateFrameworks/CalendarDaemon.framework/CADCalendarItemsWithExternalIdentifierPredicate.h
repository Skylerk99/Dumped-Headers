/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADEventPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate <NSSecureCoding> {

	NSString* _externalIdentifier;

}

@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(id)predicateFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)externalIdentifier;
@end

