/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFContextMapTable : NSObject {

	unsigned long long _slotLimit;
	CFDictionaryRef _objectsByTemporaryID;
	_CFDictionary* _objectsByPermanentObjectID;
	_CFDictionary* _objectsBy64bitPKID;
	unsigned long long* _capacitiesFor64bitPKMappings;
	struct {
		unsigned _usesWeakReferences : 1;
		unsigned _garbageCollectionEnabled : 1;
		unsigned _reservedFlags : 30;
	}  _flags;

}
-(void)_dispose;
-(id)initWithWeaksReferences:(BOOL)arg1 ;
-(void)setForUseWithModel:(id)arg1 ;
-(unsigned long long)getAllObjects:(id*)arg1 ;
-(void)setCapacityHint:(unsigned long long)arg1 forSlot:(unsigned)arg2 ;
-(void)clearTemporaryIDs;
-(void)dealloc;
-(void)finalize;
@end

