/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUMathExpressionBase.h>

@interface MUMathExpressionFloatBased : MUMathExpressionBase {

	FunctionInterpreter<float>* mInterpreter;

}
+(float)invalidResult;
+(float)evaluateString:(id)arg1 error:(id*)arg2 ;
-(void)setValue:(float)arg1 forVariable:(id)arg2 ;
-(void)replaceVariable:(id)arg1 withValue:(float)arg2 ;
-(void)_resetVariableIndicies;
-(void)resetAllVariables;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(void)setVariableValues:(id)arg1 ;
-(BOOL)isValueIllegal:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(float)valueForVariable:(id)arg1 ;
-(id)stringValue;
-(void)cleanup;
-(BOOL)isConstant;
-(float)evaluate;
@end

