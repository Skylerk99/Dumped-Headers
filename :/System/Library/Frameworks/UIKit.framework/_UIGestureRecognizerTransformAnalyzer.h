/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIGestureRecognizerTransformAnalyzer : NSObject {

	double _lowPassTranslationMagnitudeDelta;
	double _lowPassScaleDelta;
	double _lowPassRotationDelta;
	double _translationWeight;
	double _pinchingWeight;
	double _rotationWeight;
	int _dominantComponent;

}

@property (nonatomic,readonly) int dominantComponent;               //@synthesize dominantComponent=_dominantComponent - In the implementation block
@property (assign,nonatomic) double translationWeight;              //@synthesize translationWeight=_translationWeight - In the implementation block
@property (assign,nonatomic) double pinchingWeight;                 //@synthesize pinchingWeight=_pinchingWeight - In the implementation block
@property (assign,nonatomic) double rotationWeight;                 //@synthesize rotationWeight=_rotationWeight - In the implementation block
-(id)init;
-(void)reset;
-(void)analyzeTouches:(id)arg1 ;
-(double)translationWeight;
-(void)setTranslationWeight:(double)arg1 ;
-(double)pinchingWeight;
-(void)setPinchingWeight:(double)arg1 ;
-(double)rotationWeight;
-(void)setRotationWeight:(double)arg1 ;
-(int)dominantComponent;
@end

