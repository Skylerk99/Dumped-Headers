/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface TTVectorMultiTimestamp : NSObject <NSCopying> {

	NSArray* _timestamps;

}

@property (nonatomic,readonly) NSArray * timestamps;              //@synthesize timestamps=_timestamps - In the implementation block
-(id)serialize;
-(void)saveToArchive:(VectorTimestamp*)arg1 ;
-(id)initWithArchive:(const VectorTimestamp*)arg1 andCapacity:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)compareTo:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)mergeWithTimestamp:(id)arg1 ;
-(unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)sortedUUIDs;
-(NSArray *)timestamps;
-(id)initWithTimestamps:(id)arg1 ;
@end

