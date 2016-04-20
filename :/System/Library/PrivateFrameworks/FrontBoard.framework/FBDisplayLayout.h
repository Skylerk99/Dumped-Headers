/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBDisplayManagerObserver.h>

@protocol FBDisplayLayoutDelegate;
@class FBSDisplay, FBSDisplayLayout, FBSDisplayLayoutTransitionContext, NSMutableSet, NSString;

@interface FBDisplayLayout : NSObject <FBDisplayManagerObserver> {

	FBSDisplay* _display;
	unsigned long long _displayType;
	long long _backlightLevel;
	long long _interfaceOrientation;
	FBSDisplayLayout* _currentLayout;
	FBSDisplayLayoutTransitionContext* _currentTransitionContext;
	id<FBDisplayLayoutDelegate> _delegate;
	NSMutableSet* _assertions;
	NSMutableSet* _transitions;
	BOOL _transitionActive;
	int _displayBacklightToken;

}

@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) unsigned long long displayType;                                                   //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplayLayout * currentLayout;                                          //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplayLayoutTransitionContext * currentTransitionContext;              //@synthesize currentTransitionContext=_currentTransitionContext - In the implementation block
@property (nonatomic,readonly) id<FBDisplayLayoutDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<FBDisplayLayoutDelegate>)delegate;
-(long long)interfaceOrientation;
-(void)flush;
-(BOOL)isTransitioning;
-(unsigned long long)displayType;
-(FBSDisplayLayout *)currentLayout;
-(void)beginTransition:(id)arg1 ;
-(void)endTransition:(id)arg1 ;
-(void)addElementAssertion:(id)arg1 ;
-(void)updateElementAssertion:(id)arg1 ;
-(void)removeElementAssertion:(id)arg1 ;
-(id)initWithDisplayType:(unsigned long long)arg1 delegate:(id)arg2 ;
-(FBSDisplayLayoutTransitionContext *)currentTransitionContext;
-(void)displayManager:(id)arg1 didDisconnectDisplay:(id)arg2 ;
-(void)displayManager:(id)arg1 didConnectDisplay:(id)arg2 ;
-(void)_registerForBacklightUpdates;
-(void)_updateTransitionContextForTransition:(id)arg1 ;
-(void)_updateStateForTransition:(id)arg1 ;
-(void)_sendLayoutIfNotTransitioning;
-(void)_buildAndSendLayout:(BOOL)arg1 ;
-(void)_bgQueue_updateBacklightLevelAndNotify:(BOOL)arg1 ;
-(void)_updateBacklightLevel:(long long)arg1 notify:(BOOL)arg2 ;
-(BOOL)_isReallyTransitioning;
@end

