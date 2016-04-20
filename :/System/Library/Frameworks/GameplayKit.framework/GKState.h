/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKStateMachine;

@interface GKState : NSObject {

	GKStateMachine* _stateMachine;

}

@property (nonatomic,__weak,readonly) GKStateMachine * stateMachine; 
+(id)state;
-(void)updateWithDeltaTime:(double)arg1 ;
-(BOOL)isValidNextState:(Class)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(void)willExitWithNextState:(id)arg1 ;
-(void)_setStateMachine:(id)arg1 ;
-(id)init;
-(GKStateMachine *)stateMachine;
@end

