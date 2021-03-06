/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTTableHiddenRowColumnProviding <NSObject>
@required
-(unsigned char)visibleColumnBeforeColumn:(unsigned char)arg1;
-(unsigned char)visibleColumnAfterColumn:(unsigned char)arg1;
-(unsigned short)visibleRowBeforeRow:(unsigned short)arg1;
-(unsigned short)visibleRowAfterRow:(unsigned short)arg1;
-(BOOL)isRowHidden:(unsigned short)arg1;
-(unsigned short)visibleRowBeforeAndIncludingRow:(unsigned short)arg1;
-(unsigned short)visibleRowAfterAndIncludingRow:(unsigned short)arg1;
-(unsigned char)visibleColumnBeforeAndIncludingColumn:(unsigned char)arg1;
-(unsigned char)visibleColumnAfterAndIncludingColumn:(unsigned char)arg1;
-(BOOL)anyRowsHiddenInCellRange:(TSUColumnRowRect)arg1;
-(BOOL)anyColumnsHiddenInCellRange:(TSUColumnRowRect)arg1;
-(BOOL)isColumnHidden:(unsigned char)arg1;

@end

