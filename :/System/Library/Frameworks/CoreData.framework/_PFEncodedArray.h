/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@class NSData;

@interface _PFEncodedArray : NSArray {

	NSData* _sourceData;
	int _cd_rc;
	unsigned _count;

}
-(void)_replaceObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(Class)classForArchiver;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)description;
-(id)copy;
-(id)mutableCopy;
-(Class)classForCoder;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(const id*)_values;
@end

