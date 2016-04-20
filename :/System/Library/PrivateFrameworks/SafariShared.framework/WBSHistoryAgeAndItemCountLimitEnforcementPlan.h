/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSHistorySQLiteStore, NSSet, WBSHistoryDeletionPlan;

@interface WBSHistoryAgeAndItemCountLimitEnforcementPlan : NSObject {

	WBSHistorySQLiteStore* _store;
	NSSet* _items;
	double _ageLimit;
	unsigned long long _itemCountLimit;
	NSSet* _itemsToKeep;
	NSSet* _itemsToDiscard;
	WBSHistoryDeletionPlan* _deletionPlan;

}

@property (nonatomic,readonly) NSSet * itemsToKeep;                 //@synthesize itemsToKeep=_itemsToKeep - In the implementation block
@property (nonatomic,readonly) NSSet * itemsToDiscard;              //@synthesize itemsToDiscard=_itemsToDiscard - In the implementation block
-(void)execute;
-(void)prepare;
-(id)_itemsToDiscardFromItemsOrderedByLastVisitTime:(id)arg1 ;
-(id)initWithSQLiteStore:(id)arg1 items:(id)arg2 ageLimit:(double)arg3 itemCountLimit:(unsigned long long)arg4 ;
-(NSSet *)itemsToKeep;
-(NSSet *)itemsToDiscard;
@end

