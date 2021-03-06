/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface TSCEUidTractList : NSObject <NSCopying, NSFastEnumeration> {

	unsigned char _stickyBits;
	BOOL _isRangeRef;
	NSMutableArray* _tracts;

}

@property (assign,nonatomic) BOOL isRangeRef;                       //@synthesize isRangeRef=_isRangeRef - In the implementation block
@property (assign,nonatomic) unsigned char stickyBits;              //@synthesize stickyBits=_stickyBits - In the implementation block
-(BOOL)isRangeRef;
-(void)dropPrimaryTract;
-(void)addPrimaryTract:(id)arg1 ;
-(void)setStickyBits:(unsigned char)arg1 ;
-(unsigned char)stickyBits;
-(BOOL)remapUsingUidMap:(const TSUUuidMap*)arg1 ;
-(BOOL)remapUsingColumnUidMap:(const TSUUuidMap*)arg1 rowUidMap:(const TSUUuidMap*)arg2 clearIfMissing:(BOOL)arg3 ;
-(void)appendUidTract:(id)arg1 ;
-(id)primaryTract;
-(id)uidTractAtIndex:(unsigned char)arg1 ;
-(unsigned char)tractCount;
-(void)addPrimaryTractForColumnUid:(const UUIDData<TSP::UUIDData>*)arg1 rowUid:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)pruneUidTractsAtAndAboveIndex:(unsigned char)arg1 ;
-(void)setIsRangeRef:(BOOL)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS25*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToArchive:(ASTNodeArrayArchive_ASTUidTractList*)arg1 ;
-(id)initWithArchive:(const ASTNodeArrayArchive_ASTUidTractList*)arg1 ;
@end

