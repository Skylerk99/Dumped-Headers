/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying> {

	unsigned long long mSeriesIndex;
	unsigned long long mValueIndex;

}

@property (nonatomic,readonly) unsigned long long seriesIndex; 
@property (nonatomic,readonly) unsigned long long valueIndex; 
+(id)repElementIndexWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2 ;
-(id)initWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2 ;
-(id)seriesIndexSet;
-(id)valueIndexSet;
-(unsigned long long)valueIndex;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)seriesIndex;
@end

