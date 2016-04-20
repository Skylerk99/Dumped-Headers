/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayout.h>

@class TSDDefaultPartitioner;

@interface TSDPartitionedPartialLayout : TSDLayout {

	CGRect mBounds;
	TSDDefaultPartitioner* mPartitioner;

}

@property (nonatomic,readonly) TSDDefaultPartitioner * partitioner; 
@property (nonatomic,readonly) CGRect bounds; 
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(TSDDefaultPartitioner *)partitioner;
-(id)initWithInfo:(id)arg1 bounds:(CGRect)arg2 partitioner:(id)arg3 ;
-(CGRect)bounds;
@end

