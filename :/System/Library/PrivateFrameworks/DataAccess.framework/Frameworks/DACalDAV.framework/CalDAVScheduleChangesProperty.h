/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CalDAVOccurrenceChange, NSMutableDictionary, NSArray;

@interface CalDAVScheduleChangesProperty : NSObject {

	int _actionType;
	NSString* _dateStamp;
	NSString* _attendeeAddress;
	CalDAVOccurrenceChange* _masterChange;
	NSMutableDictionary* _occurrenceChanges;

}

@property (nonatomic,readonly) BOOL isCancel; 
@property (nonatomic,readonly) BOOL isReply; 
@property (nonatomic,readonly) BOOL isUpdate; 
@property (nonatomic,readonly) BOOL isCreate; 
@property (nonatomic,readonly) NSArray * recurrenceIDs; 
@property (nonatomic,retain) NSString * dateStamp;                                 //@synthesize dateStamp=_dateStamp - In the implementation block
@property (assign,nonatomic) int actionType;                                       //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * attendeeAddress;                           //@synthesize attendeeAddress=_attendeeAddress - In the implementation block
@property (nonatomic,retain) CalDAVOccurrenceChange * masterChange;                //@synthesize masterChange=_masterChange - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * occurrenceChanges;              //@synthesize occurrenceChanges=_occurrenceChanges - In the implementation block
+(void)initialize;
+(id)debugStringForType:(int)arg1 ;
+(id)propertyWithItem:(id)arg1 ;
-(int)actionType;
-(id)init;
-(BOOL)isCancel;
-(BOOL)isReply;
-(NSArray *)recurrenceIDs;
-(id)changeForOccurrence:(id)arg1 ;
-(CalDAVOccurrenceChange *)masterChange;
-(BOOL)isCreate;
-(NSString *)attendeeAddress;
-(void)setDateStamp:(NSString *)arg1 ;
-(void)setAttendeeAddress:(NSString *)arg1 ;
-(void)setMasterChange:(CalDAVOccurrenceChange *)arg1 ;
-(void)setOccurrenceChanges:(NSMutableDictionary *)arg1 ;
-(void)addOccurrenceChange:(id)arg1 ;
-(NSMutableDictionary *)occurrenceChanges;
-(BOOL)isUpdate;
-(NSString *)dateStamp;
-(void)setActionType:(int)arg1 ;
@end

