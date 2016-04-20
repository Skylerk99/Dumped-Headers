/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKRunningCurve : NSObject {

	SCD_Struct_VK398 _p0;
	double _t0;
	SCD_Struct_VK398 _p1;
	double _t1;
	SCD_Struct_VK398 _pu;
	double _tu;
	SCD_Struct_VK399 _mb;
	BOOL _mbValid;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(BOOL)hasStateAtTime:(double)arg1 ;
-(SCD_Struct_VK400)stateAtTime:(double)arg1 ;
-(void)appendPosition:(VKPoint)arg1 atTime:(double)arg2 ;
@end

