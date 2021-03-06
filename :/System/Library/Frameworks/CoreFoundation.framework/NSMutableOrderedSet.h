/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>

@interface NSMutableOrderedSet : NSOrderedSet
+(id)orderedSetWithCapacity:(unsigned long long)arg1 ;
-(void)ml_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)pl_addObjectsFromArray:(id)arg1 ;
-(void)pl_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)pl_removeObjectsInArray:(id)arg1 ;
-(void)filterUsingPredicate:(id)arg1 ;
-(void)sortUsingDescriptors:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)replaceObject:(id)arg1 ;
-(void)_mutate;
-(void)insertObjectsFromArray:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inSet:(id)arg2 ;
-(void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)replaceObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromSet:(id)arg2 ;
-(void)rollObjectsInRange:(NSRange)arg1 by:(long long)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)unionSet:(id)arg1 ;
-(void)removeLastObject;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(Class)classForCoder;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setArray:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)removeFirstObject;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
@end

