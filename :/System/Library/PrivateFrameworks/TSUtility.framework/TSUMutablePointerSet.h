/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface TSUMutablePointerSet : NSMutableSet {

	CFSetRef mSet;

}
+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allObjects;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)initWithCFSet:(CFSetRef)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)setByAddingObject:(id)arg1 ;
@end

