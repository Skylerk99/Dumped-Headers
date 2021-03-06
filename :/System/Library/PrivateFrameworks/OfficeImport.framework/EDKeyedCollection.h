/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDCollection.h>

@class OITSUIntegerKeyDictionary;

@interface EDKeyedCollection : EDCollection {

	OITSUIntegerKeyDictionary* mMap;

}
-(BOOL)isOverwritingKeyOK;
-(void)insertIntoMap:(id)arg1 ;
-(void)removeFromMap:(id)arg1 ;
-(BOOL)isObjectInMap:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)objectWithKey:(long long)arg1 ;
@end

