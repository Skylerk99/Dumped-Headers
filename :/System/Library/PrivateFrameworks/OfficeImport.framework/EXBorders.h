/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXBorders : NSObject
+(id)edBorderFromXmlElement:(xmlNode*)arg1 diagonalType:(int)arg2 state:(id)arg3 ;
+(int)edDiagStyleFromXmlElement:(xmlNode*)arg1 ;
+(int)edBorderStyleFromXmlBorderStyleString:(id)arg1 ;
+(void)initialize;
+(id)edBordersFromXmlBordersElement:(xmlNode*)arg1 state:(id)arg2 ;
@end

