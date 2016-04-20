/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface VCPCISlowmoResults : NSObject {

	NSMutableDictionary* _results;
	BOOL _verbose;
	double _minTimeBetweenFrames;

}

@property (readonly) NSDictionary * results;                 //@synthesize results=_results - In the implementation block
@property (assign) BOOL verbose;                             //@synthesize verbose=_verbose - In the implementation block
@property (assign) double minTimeBetweenFrames;              //@synthesize minTimeBetweenFrames=_minTimeBetweenFrames - In the implementation block
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(NSDictionary *)results;
-(void)writeToFile:(id)arg1 ;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(void)addVerboseResult:(id)arg1 ;
-(void)addFrame:(double)arg1 frameValue:(int)arg2 ;
-(void)setMinTimeBetweenFrames:(double)arg1 ;
-(double)minTimeBetweenFrames;
-(void)mergeClusters:(id)arg1 cluster2:(id)arg2 ;
-(void)performPass2Clustering;
-(void)performPass1Clustering;
-(id)copyClusters;
-(void)dumpClusters;
@end

