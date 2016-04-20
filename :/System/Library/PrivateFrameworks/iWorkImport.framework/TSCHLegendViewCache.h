/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCHLegendModelCache;

@interface TSCHLegendViewCache : NSObject <TSCHUnretainedParent> {

	unsigned long long mCellCount;
	unsigned long long mNumberOfRows;
	unsigned long long mNumberOfColumns;
	CGSize mFinalSize;
	TSCHLegendModelCache* mModelCache;
	CGPoint* mCellOrigins;

}

@property (readonly) unsigned long long numberOfRows; 
@property (readonly) unsigned long long numberOfColumns; 
@property (readonly) CGSize legendSize; 
-(void)clearParent;
-(CGSize)legendSize;
-(CGPoint)originForCell:(id)arg1 ;
-(id)initWithLegendModelCache:(id)arg1 legendWidth:(double)arg2 ;
-(void)dealloc;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
@end

