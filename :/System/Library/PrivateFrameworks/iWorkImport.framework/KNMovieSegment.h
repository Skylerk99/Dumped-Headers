/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSPData;

@interface KNMovieSegment : NSObject {

	TSPData* mMovieData;
	double mStartTime;

}

@property (nonatomic,readonly) TSPData * movieData; 
@property (getter=isEmptySegment,nonatomic,readonly) BOOL emptySegment; 
@property (nonatomic,readonly) double startTime; 
-(void)saveToArchive:(MovieSegmentArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 archive:(const MovieSegmentArchive*)arg2 unarchiver:(id)arg3 ;
-(TSPData *)movieData;
-(id)movieSegmentByAddingTimeOffset:(double)arg1 ;
-(id)initWithMovieData:(id)arg1 startTime:(double)arg2 ;
-(id)initEmptySegmentWithStartTime:(double)arg1 ;
-(BOOL)isEmptySegment;
-(void)dealloc;
-(id)init;
-(double)startTime;
@end

