/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, HMObjectMergeOperations, NSMapTable, NSArray;

@interface HMObjectMergeCollection : NSObject {

	NSMutableArray* _currentExistingObjects;
	HMObjectMergeOperations* _currentOperations;
	NSMutableArray* _currentAddedObjects;
	NSMutableArray* _currentRemovedObjects;
	NSMutableArray* _currentModifiedObjects;
	NSMapTable* _commonObjectsMaps;

}

@property (nonatomic,readonly) NSArray * addedObjects; 
@property (nonatomic,readonly) NSArray * removedObjects; 
@property (nonatomic,readonly) NSArray * modifiedObjects; 
@property (nonatomic,readonly) NSArray * existingObjects; 
@property (getter=isModified,nonatomic,readonly) BOOL modified; 
@property (nonatomic,readonly) unsigned long long modifiedCount; 
@property (nonatomic,retain) NSMutableArray * currentExistingObjects;                  //@synthesize currentExistingObjects=_currentExistingObjects - In the implementation block
@property (nonatomic,retain) HMObjectMergeOperations * currentOperations;              //@synthesize currentOperations=_currentOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentAddedObjects;                     //@synthesize currentAddedObjects=_currentAddedObjects - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentRemovedObjects;                   //@synthesize currentRemovedObjects=_currentRemovedObjects - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentModifiedObjects;                  //@synthesize currentModifiedObjects=_currentModifiedObjects - In the implementation block
@property (nonatomic,retain) NSMapTable * commonObjectsMaps;                           //@synthesize commonObjectsMaps=_commonObjectsMaps - In the implementation block
-(id)initWithExistingObjects:(id)arg1 newObjects:(id)arg2 operations:(id)arg3 ;
-(void)_enumerateObjectRemoveWithBlock:(/*^block*/id)arg1 ;
-(void)_replaceAddedObjectsWithObjectsFromArray:(id)arg1 ;
-(void)_enumerateObjectAdditionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isModified;
-(NSMutableArray *)currentExistingObjects;
-(unsigned long long)modifiedCount;
-(NSMutableArray *)currentAddedObjects;
-(NSMutableArray *)currentRemovedObjects;
-(NSMutableArray *)currentModifiedObjects;
-(void)setCurrentAddedObjects:(NSMutableArray *)arg1 ;
-(HMObjectMergeOperations *)currentOperations;
-(NSMapTable *)commonObjectsMaps;
-(NSArray *)existingObjects;
-(NSArray *)modifiedObjects;
-(void)_mergeCommonObjects;
-(void)mergeCommonObjectsNoMergeCount;
-(void)setCurrentExistingObjects:(NSMutableArray *)arg1 ;
-(void)setCurrentOperations:(HMObjectMergeOperations *)arg1 ;
-(void)setCurrentRemovedObjects:(NSMutableArray *)arg1 ;
-(void)setCurrentModifiedObjects:(NSMutableArray *)arg1 ;
-(void)setCommonObjectsMaps:(NSMapTable *)arg1 ;
-(id)init;
-(NSArray *)addedObjects;
-(NSArray *)removedObjects;
@end

