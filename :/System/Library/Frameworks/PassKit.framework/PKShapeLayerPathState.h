/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKShapeLayerPathState : NSObject {

	double _strokeStartT0;
	double _strokeStartT1;
	double _strokeEndT0;
	double _strokeEndT1;

}
-(id)initWithStrokeStartT0:(double)arg1 strokeStartT1:(double)arg2 strokeEndT0:(double)arg3 strokeEndT1:(double)arg4 ;
-(id)initWithShapeLayer:(id)arg1 reverse:(BOOL)arg2 ;
-(void)setProgress:(double)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(/*^block*/id)arg3 ;
-(double)strokeStartAtProgress:(double)arg1 ;
-(double)strokeEndAtProgress:(double)arg1 ;
-(id)initWithShapeLayer:(id)arg1 ;
-(id)initWithStrokeStart:(double)arg1 strokeEnd:(double)arg2 ;
-(void)setProgress:(double)arg1 onShapeLayer:(id)arg2 ;
-(double)progressForShapeLayer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

