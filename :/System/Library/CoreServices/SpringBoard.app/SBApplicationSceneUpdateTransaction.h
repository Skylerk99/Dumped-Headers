/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@protocol UIApplicationSceneClientSettings;
@class SBWorkspaceApplication, SBWorkspaceApplicationTransitionContext, FBSDisplay, NSString, UIMutableApplicationSceneSettings, UIApplicationSceneTransitionContext, FBSSceneClientSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {

	SBWorkspaceApplication* _appContext;
	SBWorkspaceApplicationTransitionContext* _transitionContext;
	FBSDisplay* _display;
	NSString* _sceneIdentifier;
	UIMutableApplicationSceneSettings* _settings;
	UIApplicationSceneTransitionContext* _sceneTransitionContext;
	FBSSceneClientSettings*<UIApplicationSceneClientSettings> _clientSettings;
	BOOL _suspendedActivation;
	BOOL _shouldSendActivationResult;

}

@property (nonatomic,retain,readonly) SBWorkspaceApplication * application;                           //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain,readonly) NSString * sceneIdentifier;                                     //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,retain,readonly) UIMutableApplicationSceneSettings * sceneSettings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) BOOL shouldSendActivationResult;                                         //@synthesize shouldSendActivationResult=_shouldSendActivationResult - In the implementation block
-(id)initWithApplication:(id)arg1 transitionRequest:(id)arg2 ;
-(void)setShouldSendActivationResult:(BOOL)arg1 ;
-(void)_sendActivationResultWithSuccess:(BOOL)arg1 ;
-(BOOL)shouldSendActivationResult;
-(void)dealloc;
-(void)_didComplete;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(UIMutableApplicationSceneSettings *)sceneSettings;
-(NSString *)sceneIdentifier;
-(SBWorkspaceApplication *)application;
@end

