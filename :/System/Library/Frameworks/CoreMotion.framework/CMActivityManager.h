/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMActivityManager : NSObject {

	id _internal;

}

@property (copy) id activityHandler; 
@property (getter=isActivityAvailable,nonatomic,readonly) BOOL activityAvailable; 
-(long long)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2 ;
-(long long)simulateMotionState:(BOOL)arg1 withState:(long long)arg2 ;
-(void)setActivityHandler:(id)arg1 ;
-(id)activityHandler;
-(void)dealloc;
-(id)init;
-(BOOL)isActivityAvailable;
@end

