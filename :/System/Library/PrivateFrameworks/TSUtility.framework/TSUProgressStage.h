/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUProgressContext;

@interface TSUProgressStage : NSObject {

	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	double m_startInParent;
	double m_nextSubStageParentSize;
	TSUProgressStage* m_parentStage;
	TSUProgressContext* m_context;

}
-(void)dealloc;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(void)end;
-(id)initRootStageInContext:(id)arg1 ;
-(id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3 ;
-(double)nextSubStageParentSize;
-(void)setNextSubStageParentSize:(double)arg1 ;
-(id)parentStage;
-(void)advanceProgress:(double)arg1 ;
-(void)setProgressPercentage:(double)arg1 ;
-(double)currentPosition;
-(double)overallProgress;
@end

