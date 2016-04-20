/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKCalendarItem, NSURL, NSString, NSPredicate;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying> {

	EKCalendarItem* _owner;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long participantStatus; 
@property (nonatomic,readonly) long long participantRole; 
@property (nonatomic,readonly) long long participantType; 
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser; 
@property (nonatomic,readonly) NSPredicate * contactPredicate; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSURL * address; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,readonly) EKCalendarItem * owner;                             //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void*)findABPersonByURL:(id)arg1 inAddressBook:(void*)arg2 ;
-(id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3 ;
-(id)displayName;
-(id)_persistentItem;
-(long long)participantRole;
-(NSPredicate *)contactPredicate;
-(long long)participantType;
-(long long)participantStatus;
-(BOOL)isEqualToParticipant:(id)arg1 ;
-(BOOL)isCurrentUser;
-(const void*)ABRecordWithAddressBook:(void*)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSURL *)address;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(NSURL *)URL;
-(void)setAddress:(NSURL *)arg1 ;
-(NSString *)comment;
-(void)setDisplayName:(id)arg1 ;
-(EKCalendarItem *)owner;
-(NSString *)emailAddress;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

