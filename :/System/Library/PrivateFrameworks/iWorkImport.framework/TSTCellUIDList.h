/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSTCellUIDList : NSObject <NSCopying> {

	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _rowIdList;
	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _columnIdList;
	vector<int, std::__1::allocator<int> >* _rowUIDIndexList;
	vector<int, std::__1::allocator<int> >* _columnUIDIndexList;
	vector<TSTCellUID, std::__1::allocator<TSTCellUID> >* _uncompressedCellUIDs;
	unsigned long long _compressedSize;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) unsigned long long compressedSize;               //@synthesize compressedSize=_compressedSize - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)cellUIDList;
+(id)cellUIDListFromRange:(const TSTCellUIDRange*)arg1 ;
-(void)saveToMessage:(CellUIDListArchive*)arg1 archiver:(id)arg2 ;
-(void)addCellUID:(const TSTCellUID*)arg1 ;
-(void)enumerateCellUIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)iterator;
-(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)rowUIDs;
-(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)columnUIDs;
-(void)addCellRegion:(id)arg1 withColumnUIDs:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 rowUIDs:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg3 ;
-(id)initFromMessage:(const CellUIDListArchive*)arg1 unarchiver:(id)arg2 ;
-(void)remapUIDsByColumnMap:(const TSUUuidMap*)arg1 rowMap:(const TSUUuidMap*)arg2 ;
-(void)p_compressUID:(const UUIDData<TSP::UUIDData>*)arg1 index:(unsigned long long)arg2 UIDtoIndexMap:(map<TSU::UUIDData<TSP::UUIDData>, unsigned long, std::__1::less<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned long> > >*)arg3 UIDs:(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg4 compressedIndexes:(vector<int, std::__1::allocator<int> >*)arg5 lastSameUIDIndex:(vector<unsigned long, std::__1::allocator<unsigned long> >*)arg6 ;
-(void)compressUIDIndexListFrom:(const vector<int, std::__1::allocator<int> >*)arg1 withUIDCount:(unsigned long long)arg2 to:(vector<int, std::__1::allocator<int> >*)arg3 ;
-(const vector<int, std::__1::allocator<int> >*)compressedRowIndexes;
-(const vector<int, std::__1::allocator<int> >*)compressedColumnIndexes;
-(void)setCompressedColumnIndexes:(const vector<int, std::__1::allocator<int> >*)arg1 ;
-(vector<TSTCellUID, std::__1::allocator<TSTCellUID> >*)uncompressedCellUIDs;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)compress;
-(unsigned long long)compressedSize;
@end

