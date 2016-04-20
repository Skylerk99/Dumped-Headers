/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSConcreteMapTable : NSMapTable {

	NSSlice* keys;
	NSSlice* values;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long keyOptions;
	unsigned long long valueOptions;
	unsigned long long mutations;
	int growLock;
	BOOL shouldRehash;

}
-(void)_initBlock;
-(void)raiseCountUnderflowException;
-(unsigned long long)rehashAround:(unsigned long long)arg1 ;
-(void)rehash;
-(unsigned long long)__capacity;
-(id)keyPointerFunctions;
-(id)valuePointerFunctions;
-(void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2 ;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(unsigned long long)realCount;
-(void)_setBackingStore;
-(void)assign:(unsigned long long)arg1 key:(const void*)arg2 value:(const void*)arg3 isNew:(BOOL)arg4 ;
-(void)grow;
-(void)checkCount:(const char*)arg1 ;
-(void)zeroPairedEntries;
-(BOOL)containsKeys:(const void*)arg1 values:(const void*)arg2 count:(unsigned long long)arg3 ;
-(id)dump;
-(void)removeAllItems;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
-(id)objectEnumerator;
-(Class)classForCoder;
-(id)allValues;
-(id)keyEnumerator;
-(id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3 ;
-(void)finalize;
@end

