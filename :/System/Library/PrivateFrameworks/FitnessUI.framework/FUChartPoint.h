/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol FUChartPoint <NSObject>
@property (nonatomic,retain) NSDate * xValue; 
@property (nonatomic,retain) id yValue; 
@required
-(float)yValueFloatRepresentation;
-(id)yValue;
-(NSDate *)xValue;
-(id)allYValues;
-(id)yValueForKey:(id)arg1;
-(void)setYValue:(id)arg1;
-(void)setXValue:(id)arg1;

@end

