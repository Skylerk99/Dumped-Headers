/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXChartType : NSObject
+(Class)chxChartTypeClassWithXmlElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)prepareChartTypeForWriting:(id)arg1 ;
+(int)chdGroupingFromXmlGroupingElement:(xmlNode*)arg1 ;
+(id)chdChartTypeFromXmlChartTypeElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)chdShapeTypeFromXmlShapeTypeElement:(xmlNode*)arg1 ;
+(id)stringWithGroupingEnum:(int)arg1 ;
+(void)resolveStyle:(id)arg1 state:(id)arg2 ;
@end

