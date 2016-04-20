/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSAnimationSettings.h>

@interface BSSpringAnimationSettings : BSAnimationSettings {

	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _initialVelocity;
	BOOL _hasCalculatedDuration;

}

@property (nonatomic,readonly) double mass; 
@property (nonatomic,readonly) double stiffness; 
@property (nonatomic,readonly) double damping; 
@property (nonatomic,readonly) double epsilon; 
@property (nonatomic,readonly) double initialVelocity; 
+(BOOL)supportsSecureCoding;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 timingFunction:(id)arg6 ;
-(double)stiffness;
-(double)initialVelocity;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(void)_setDuration:(double)arg1 ;
-(double)damping;
-(double)mass;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4 ;
-(BOOL)isSpringAnimation;
-(void)_setTimingFunction:(id)arg1 ;
-(void)_setEpsilon:(double)arg1 ;
-(id)_initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 delay:(double)arg6 frameInterval:(double)arg7 timingFunction:(id)arg8 ;
-(double)epsilon;
-(BOOL)_hasCalculatedDuration;
-(void)_setMass:(double)arg1 ;
-(void)_setStiffness:(double)arg1 ;
-(void)_setDamping:(double)arg1 ;
-(void)_setInitialVelocity:(double)arg1 ;
@end

