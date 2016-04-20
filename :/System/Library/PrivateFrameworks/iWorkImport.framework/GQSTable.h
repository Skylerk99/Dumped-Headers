/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GQDTTable, GQDTOverlapCell, GQDTCell;

@interface GQSTable : NSObject {

	GQDTTable* mTable;
	GQDTOverlapCell* mCurrentOverlapCell;
	GQDTCell* mLastCellRead;
	BOOL mIsStreaming;
	BOOL mAlwaysPutReadCellsInArray;
	long long mCellCount;
	BOOL mIsCounting;

}
-(void)skipCells:(long long)arg1 ;
-(void)incrementCellPosition;
-(BOOL)isCounting;
-(id)currentOverlapCell;
-(void)setCurrentOverlapCell:(id)arg1 ;
-(void)setAlwaysPutReadCellsInArray:(BOOL)arg1 ;
-(void)setIsCountingCount:(BOOL)arg1 ;
-(id)lastCellRead;
-(id)initWithStreaming:(BOOL)arg1 table:(id)arg2 ;
-(BOOL)alwaysPutReadCellsInArray;
-(void)setLastCellRead:(id)arg1 ;
-(void)dealloc;
-(long long)row;
-(id)table;
-(long long)column;
-(BOOL)isStreaming;
@end

