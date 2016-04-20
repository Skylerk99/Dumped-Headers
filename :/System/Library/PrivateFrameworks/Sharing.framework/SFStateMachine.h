/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFStateMachineDelegate;
@class NSString, NSDictionary;

@interface SFStateMachine : NSObject {

	int _lock;
	BOOL _shouldLogStateTransitions;
	NSString* _currentState;
	NSDictionary* _validTransitions;
	id<SFStateMachineDelegate> _delegate;

}

@property (copy) NSString * currentState;                                 //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (__weak) id<SFStateMachineDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(BOOL)_setCurrentState:(id)arg1 ;
-(void)setDelegate:(id<SFStateMachineDelegate>)arg1 ;
-(id)init;
-(id<SFStateMachineDelegate>)delegate;
-(NSString *)currentState;
-(id)target;
-(void)setCurrentState:(NSString *)arg1 ;
-(BOOL)shouldLogStateTransitions;
-(id)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(NSDictionary *)validTransitions;
-(BOOL)applyState:(id)arg1 ;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)setValidTransitions:(NSDictionary *)arg1 ;
-(id)_missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
@end

