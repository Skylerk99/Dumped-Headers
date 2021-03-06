/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDTTable;

@interface GQHTableState : NSObject {

	int mPrevRowIndex;
	int mPrevColumnIndex;
	GQDTTable* mTable;
	vector<unsigned short, std::__1::allocator<unsigned short> >* mCellCountInColumns;
	int mGroupLevel;
	BOOL mSplitTable;
	double mCurrentTablePosition;
	double mLastAttachmentPosition;
	long long mSplitTableIndex;
	double mOriginalTableHeight;

}
-(BOOL)splitTable;
-(double)currentTablePosition;
-(void)addRowHeight:(float)arg1 ;
-(vector<unsigned short, std::__1::allocator<unsigned short> >*)cellCountInColumns;
-(int)prevRowIndex;
-(int)prevColumnIndex;
-(void)setSplitTable:(BOOL)arg1 ;
-(void)setSplitTableIndex:(long long)arg1 ;
-(void)setOriginalTableHeight:(double)arg1 ;
-(void)setLastAttachmentPosition:(double)arg1 ;
-(void)setPrevRowIndex:(int)arg1 columnIndex:(int)arg2 ;
-(void)setGroupLevel:(int)arg1 ;
-(int)groupLevel;
-(double)lastAttachmentPosition;
-(long long)nextSplitTableIndex;
-(double)originalTableHeight;
-(void)dealloc;
-(id)init;
-(id)table;
-(void)setTable:(id)arg1 ;
@end

