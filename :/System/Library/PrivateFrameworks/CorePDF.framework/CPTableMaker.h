/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPZone, CPTable;

@interface CPTableMaker : NSObject {

	CPZone* tableZone;
	CPTable* table;
	unsigned cellIndex;
	CGPoint* rowYIntervals;
	CGPoint* columnXIntervals;

}
+(void)makeTablesInPage:(id)arg1 ;
+(void)makeTablesInZone:(id)arg1 ;
+(BOOL)isTable:(id)arg1 ;
+(void)makeTableFrom:(id)arg1 ;
-(void)dealloc;
-(id)initWithZone:(id)arg1 ;
-(id)newBackgroundGraphicArrayFromRectangularZone:(id)arg1 ;
-(id)newTableCellFromZone:(id)arg1 ;
-(void)determineRowsAndColumns:(BOOL)arg1 ;
-(void)makeTable;
@end

