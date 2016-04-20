/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CalDAVMove : NSObject {

	int _sourceCalendarID;
	int _itemID;
	int _changeID;
	int _entityType;
	NSString* _oldExternalID;

}

@property (assign,nonatomic) int sourceCalendarID;                  //@synthesize sourceCalendarID=_sourceCalendarID - In the implementation block
@property (assign,nonatomic) int itemID;                            //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * oldExternalID;              //@synthesize oldExternalID=_oldExternalID - In the implementation block
@property (assign,nonatomic) int changeID;                          //@synthesize changeID=_changeID - In the implementation block
@property (assign,nonatomic) int entityType;                        //@synthesize entityType=_entityType - In the implementation block
-(int)itemID;
-(void)setChangeID:(int)arg1 ;
-(int)changeID;
-(void)setItemID:(int)arg1 ;
-(id)initWithSourceCalendarID:(int)arg1 itemID:(int)arg2 oldExternalID:(id)arg3 changeID:(int)arg4 entityType:(int)arg5 ;
-(NSString *)oldExternalID;
-(int)sourceCalendarID;
-(void)setSourceCalendarID:(int)arg1 ;
-(void)setOldExternalID:(NSString *)arg1 ;
-(int)entityType;
-(void)setEntityType:(int)arg1 ;
@end

