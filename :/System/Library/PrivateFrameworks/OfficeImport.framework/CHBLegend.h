/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBLegend : NSObject
+(int)chdLegendPositionEnumFromXlLegendPosition:(int)arg1 ;
+(int)xlLegendPositionEnumFromCHDLegendPosition:(int)arg1 ;
+(id)readFrom:(XlChartLegendFrame*)arg1 state:(id)arg2 ;
+(id)readCHDLegendEntryFrom:(const XlChartCustomLegend*)arg1 state:(id)arg2 ;
@end

