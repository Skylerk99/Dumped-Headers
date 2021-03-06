/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult {

	CGPoint _upperLeftPoint;
	CGPoint _upperRightPoint;
	CGPoint _lowerLeftPoint;
	CGPoint _lowerRightPoint;

}

@property (readonly) CGPoint upperLeftPoint;               //@synthesize upperLeftPoint=_upperLeftPoint - In the implementation block
@property (readonly) CGPoint upperRightPoint;              //@synthesize upperRightPoint=_upperRightPoint - In the implementation block
@property (readonly) CGPoint lowerLeftPoint;               //@synthesize lowerLeftPoint=_lowerLeftPoint - In the implementation block
@property (readonly) CGPoint lowerRightPoint;              //@synthesize lowerRightPoint=_lowerRightPoint - In the implementation block
-(CGPoint)lowerLeftPoint;
-(CGPoint)lowerRightPoint;
-(CGPoint)upperRightPoint;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 upperLeftPoint:(CGPoint)arg4 upperRightPoint:(CGPoint)arg5 lowerLeftPoint:(CGPoint)arg6 lowerRightPoint:(CGPoint)arg7 ;
-(CGPoint)upperLeftPoint;
@end

