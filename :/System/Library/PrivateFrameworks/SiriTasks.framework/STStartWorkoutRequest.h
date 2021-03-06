/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest {

	long long _activityType;
	long long _locationType;
	long long _goalType;
	HKQuantity* _goal;
	BOOL _isOpenGoal;
	BOOL _skipActivitySetup;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)activityType;
-(id)createResponse;
-(long long)goalType;
-(long long)locationType;
-(id)workoutGoal;
-(BOOL)isOpenGoal;
-(BOOL)skipActivitySetup;
-(id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 isOpenGoal:(BOOL)arg5 skipActivitySetup:(BOOL)arg6 ;
@end

