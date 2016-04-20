/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <libobjc.A.dylib/PGPictureInPictureRemoteObjectInterface.h>
#import <libobjc.A.dylib/PGPictureInPictureViewControllerDelegate.h>

@protocol OS_dispatch_queue, PGPictureInPictureRemoteObjectDelegate;
@class NSXPCConnection, NSObject, BKSProcessAssertion, PGPictureInPictureViewController, PGPictureInPictureApplication, NSString;

@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	long long _controlsStyle;
	long long _currentState;
	BKSProcessAssertion* _processAssertion;
	PGPictureInPictureViewController* _pictureInPictureViewController;
	unsigned _isPictureInPicturePossible : 1;
	long long _pictureInPictureInterruptionCounter;
	unsigned _pictureInPictureShouldStartWhenEnteringBackground : 1;
	unsigned _shouldShowAlternateActionButtonImage : 1;
	unsigned _shouldShowLoadingIndicator : 1;
	unsigned _isStartingStoppingOrCancellingPictureInPicture : 1;
	id<PGPictureInPictureRemoteObjectDelegate> _delegate;
	SCD_Struct_PG1 _delegateRespondsTo;
	PGPictureInPictureApplication* _pictureInPictureApplication;

}

@property (nonatomic,readonly) NSXPCConnection * connection; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) PGPictureInPictureApplication * pictureInPictureApplication;                //@synthesize pictureInPictureApplication=_pictureInPictureApplication - In the implementation block
@property (assign,nonatomic,__weak) id<PGPictureInPictureRemoteObjectDelegate> delegate; 
@property (nonatomic,readonly) BOOL shouldStartPictureInPictureEnteringBackground; 
@property (assign,getter=isPictureInPicturePossible,nonatomic) BOOL pictureInPicturePossible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPictureInPicturePossible;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)setDelegate:(id<PGPictureInPictureRemoteObjectDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PGPictureInPictureRemoteObjectDelegate>)delegate;
-(void)invalidate;
-(void)suspend;
-(void)resume;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)startPictureInPictureEnteringBackgroundAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)pictureInPictureInterruptionBegan;
-(void)pictureInPictureInterruptionEnded;
-(PGPictureInPictureApplication *)pictureInPictureApplication;
-(BOOL)shouldStartPictureInPictureEnteringBackground;
-(void)setPictureInPicturePossible:(BOOL)arg1 ;
-(oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)setupAnimated:(BOOL)arg1 withHostedWindowHostingHandle:(id)arg2 preferredContentSize:(CGSize)arg3 initialLayerFrame:(CGRect)arg4 completionHandler:(/*^block*/id)arg5 ;
-(oneway void)startPictureInPictureAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)updatePreferredContentSize:(CGSize)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)activateApplicationIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)stopPictureInPictureAnimated:(BOOL)arg1 withFinalLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)cleanupWithCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)setShouldShowAlternateActionButtonImage:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)setShouldShowLoadingIndicator:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_processAssertionForProcessIdentifier:(int)arg1 ;
-(void)_tearDownAndNotifyClientAboutCancellation:(BOOL)arg1 ;
-(void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4 ;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1 ;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1 ;
-(void)pictureInPictureViewController:(id)arg1 controlsVisibilityChanged:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)pictureInPictureViewControllerStopButtonTapped:(id)arg1 ;
-(void)pictureInPictureViewControllerActionButtonTapped:(id)arg1 ;
-(void)pictureInPictureViewControllerCancelButtonTapped:(id)arg1 ;
@end

