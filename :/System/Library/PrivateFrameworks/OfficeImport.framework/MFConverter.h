/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface MFConverter : NSObject
+(void)fromBinary:(id)arg1 toXml:(id)arg2 ;
+(id)play:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4 ;
+(CGRect)boundsInLogicalUnits:(id)arg1 ;
+(CGRect)boundsInPoints:(id)arg1 ;
+(BOOL)mapToPdf:(id)arg1 ;
+(id)playToPDF:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4 ;
+(id)playToBitmap:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4 ;
+(void)playInCurrentContext:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4 ;
@end

