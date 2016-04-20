/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKPresentationReadinessPrivate.h>
#import <libobjc.A.dylib/OKWidgetProtocol.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/JSOKWidgetNodeExport.h>
#import <libobjc.A.dylib/OKPresentationReadiness.h>

@protocol OKWidgetNodeDelegate;
@class OKPageViewController, NSMutableArray, NSArray, NSString, NSMutableDictionary, SCNNode, NSDictionary, OKWidgetSceneKitView, OFNSOperation, NSRecursiveLock, OKPresentationWidget, OKPhysicsBody, OKPhysicsField, OFUIView;

@interface OKWidgetNode : NSObject <OKCollectionProxyDataSource, OKActionResponderPrivate, OKPresentationReadinessPrivate, OKWidgetProtocol, OKSettingsSupport, JSOKWidgetNodeExport, OKPresentationReadiness> {

	NSMutableArray* _materials;
	BOOL _needsApplySettings;
	BOOL _hasSettingsApplied;
	NSArray* _particlesEmitters;
	NSArray* _contentEffects;
	BOOL _hideUntilReady;
	BOOL _userInteractionEnabled;
	CATransform3D _widgetTransform;
	CATransform3D _motionTransform;
	BOOL _motionEnabled;
	BOOL _motionTiltXEnabled;
	BOOL _motionTiltYEnabled;
	BOOL _motionTiltZEnabled;
	CGSize _motionXMinMax;
	CGSize _motionYMinMax;
	CGSize _motionZMinMax;
	CGPoint _motionXTiltAnchorPoint;
	CGPoint _motionYTiltAnchorPoint;
	CGPoint _motionZTiltAnchorPoint;
	BOOL _motionXTiltReversed;
	BOOL _motionYTiltReversed;
	BOOL _motionZTiltReversed;
	NSString* _prepareActionScript;
	NSArray* _layoutSteps;
	NSMutableDictionary* _actionBindings;
	NSString* _canPerformActionScript;
	NSString* _c3dFile;
	SCNNode* _sceneLoaded;
	NSArray* _nodeNames;
	NSDictionary* _animationsPath;
	NSMutableDictionary* _animations;
	NSDictionary* _options;
	NSArray* _constraints;
	NSMutableArray* _subWidgetNodes;
	SCNNode* _node;
	OKPageViewController* _pageViewController;
	BOOL _needsLoadRessources;
	BOOL _isSettingOpacityManually;
	OKWidgetSceneKitView* _widgetSceneKitView;
	NSDictionary* _physicsShapeOptions;
	OFNSOperation* _applyOptionOperation;
	BOOL _canStartCoachPatato;
	BOOL _isReady;
	NSMutableArray* _readyNotificationBlocks;
	NSRecursiveLock* _readyRecursiveLock;
	OKPresentationWidget* _widget;
	OKWidgetNode* _parentWidgetNode;
	unsigned long long _presentationMode;
	unsigned long long _prepareMode;
	id<OKWidgetNodeDelegate> _delegate;
	OKPhysicsBody* _physicsBody;
	OKPhysicsField* _physicsField;
	OFUIView* actionView;
	SCNVector3 _visionVector;

}

@property (assign,nonatomic) OKWidgetNode * parentWidgetNode;                        //@synthesize parentWidgetNode=_parentWidgetNode - In the implementation block
@property (assign,nonatomic) id<OKWidgetNodeDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) OKPresentationWidget * widget;                          //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain,readonly) SCNNode * node;                                //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) unsigned long long prepareMode;                       //@synthesize prepareMode=_prepareMode - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationMode;                  //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,readonly) OKPhysicsBody * physicsBody;                          //@synthesize physicsBody=_physicsBody - In the implementation block
@property (nonatomic,readonly) OKPhysicsField * physicsField;                        //@synthesize physicsField=_physicsField - In the implementation block
@property (assign,nonatomic) OKWidgetSceneKitView * widgetSceneKitView; 
@property (nonatomic,retain,readonly) NSDictionary * actionBidings;                  //@synthesize actionBindings=_actionBindings - In the implementation block
@property (nonatomic,readonly) SCNVector3 visionVector;                              //@synthesize visionVector=_visionVector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) OFUIView * actionView; 
@property (assign,nonatomic) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)proxyForNode:(id)arg1 ;
-(void)setDelegate:(id<OKWidgetNodeDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<OKWidgetNodeDelegate>)delegate;
-(id)name;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)commonInit;
-(BOOL)prepareForDisplay;
-(SCNNode *)node;
-(id)initWithNode:(id)arg1 ;
-(OFUIView *)actionView;
-(BOOL)canPerformAction:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)applyLayoutSettings;
-(void)setNeedsApplySettings;
-(unsigned long long)prepareMode;
-(void)applySettingsIfNeeded;
-(void)removeAllActionBindings;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
-(id)widgetNodesContainingActionBindings;
-(OKPresentationWidget *)widget;
-(id)widgetNodeForName:(id)arg1 recursively:(BOOL)arg2 ;
-(void)sceneLoaded:(id)arg1 ;
-(void)updateMotion;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)removeFromParentNode;
-(void)prepareForReload;
-(void)setNeedsPrepare;
-(void)prepareForMode:(unsigned long long)arg1 ;
-(void)prepareForRefresh;
-(SCNVector3)convertPosition:(SCNVector3)arg1 fromNode:(id)arg2 ;
-(id)visibleSubWidgets;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(void)applySettings;
-(SCNVector3)settingPosition;
-(void)setSettingPosition:(SCNVector3)arg1 ;
-(SCNVector4)settingRotation;
-(void)setSettingRotation:(SCNVector4)arg1 ;
-(void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3 ;
-(void)setWidgetSceneKitView:(OKWidgetSceneKitView *)arg1 ;
-(void)setParentWidgetNode:(OKWidgetNode *)arg1 ;
-(OKPageViewController *)pageViewController;
-(id)settingC3dFile;
-(void)setSettingC3dFile:(id)arg1 ;
-(id)settingOptions;
-(void)setSettingOptions:(id)arg1 ;
-(id)settingName;
-(SCNVector3)settingScale;
-(void)setSettingScale:(SCNVector3)arg1 ;
-(void)loadRessourcesIfNeeded;
-(OKWidgetSceneKitView *)widgetSceneKitView;
-(SCNVector3)convertPosition:(SCNVector3)arg1 toNode:(id)arg2 ;
-(void)unloadRessources;
-(SCNVector3)visionVector;
-(id)allActionBindings;
-(OKWidgetNode *)parentWidgetNode;
-(id)layoutSettingsKeys;
-(void)setupParticlesEmitter:(id)arg1 ;
-(void)setupConstraints:(id)arg1 ;
-(id)settingActionBindings;
-(void)removeActionBinding:(id)arg1 ;
-(void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2 ;
-(OKPhysicsField *)physicsField;
-(void)playAnimationWithKey:(id)arg1 repeatAnimation:(BOOL)arg2 removeOnCompletion:(BOOL)arg3 ;
-(id)valueForKeyPath:(id)arg1 withJSValue:(id)arg2 ;
-(SCNVector3)convertScreenPoint:(SCNVector3)arg1 ;
-(void)updateTransforms;
-(BOOL)sendAction:(id)arg1 toTarget:(id)arg2 ;
-(id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)interactivityEnabled;
-(void)setupFile;
-(void)setupOptions;
-(void)setupAnimations;
-(void)resetFile;
-(void)resetOption;
-(void)dispatchAction:(id)arg1 toTarget:(id)arg2 ;
-(BOOL)isReady:(BOOL)arg1 ;
-(BOOL)supportsReadiness;
-(void)readinessDidChange:(BOOL)arg1 ;
-(BOOL)performActionScript:(id)arg1 withAction:(id)arg2 ;
-(void)becomeReady;
-(void)resignReady;
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1 ;
-(double)readyProgress:(BOOL)arg1 ;
-(void)removeAllReadyNotifications;
-(void)addSubWidgetNode:(id)arg1 ;
-(BOOL)settingCanStartCoachPatato;
-(void)setSettingCanStartCoachPatato:(BOOL)arg1 ;
-(void)setSettingHideUntilReady:(BOOL)arg1 ;
-(void)setSettingUserInteractionEnabled:(BOOL)arg1 ;
-(void)setSettingPrepareActionScript:(id)arg1 ;
-(void)setSettingCanPerformActionScript:(id)arg1 ;
-(void)setSettingActionBindings:(id)arg1 ;
-(id)settingContentFilters;
-(void)setSettingContentFilters:(id)arg1 ;
-(BOOL)settingMotionEnabled;
-(void)setSettingMotionEnabled:(BOOL)arg1 ;
-(BOOL)settingMotionTiltXEnabled;
-(void)setSettingMotionTiltXEnabled:(BOOL)arg1 ;
-(BOOL)settingMotionTiltYEnabled;
-(void)setSettingMotionTiltYEnabled:(BOOL)arg1 ;
-(BOOL)settingMotionTiltZEnabled;
-(void)setSettingMotionTiltZEnabled:(BOOL)arg1 ;
-(CGSize)settingMotionXMinMax;
-(void)setSettingMotionXMinMax:(CGSize)arg1 ;
-(CGSize)settingMotionYMinMax;
-(void)setSettingMotionYMinMax:(CGSize)arg1 ;
-(CGSize)settingMotionZMinMax;
-(void)setSettingMotionZMinMax:(CGSize)arg1 ;
-(CGPoint)settingMotionXTiltAnchorPoint;
-(void)setSettingMotionXTiltAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)settingMotionYTiltAnchorPoint;
-(void)setSettingMotionYTiltAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)settingMotionZTiltAnchorPoint;
-(void)setSettingMotionZTiltAnchorPoint:(CGPoint)arg1 ;
-(BOOL)settingMotionXtiltReversed;
-(void)setSettingMotionXTiltReversed:(BOOL)arg1 ;
-(BOOL)settingMotionYTiltReversed;
-(void)setSettingMotionYTiltReversed:(BOOL)arg1 ;
-(BOOL)settingMotionZTiltReversed;
-(void)setSettingMotionZTiltReversed:(BOOL)arg1 ;
-(void)setSettingWorldPosition:(SCNVector3)arg1 ;
-(SCNVector3)settingWorldPosition;
-(SCNVector3)settingVisionVector;
-(void)setSettingVisionVector:(SCNVector3)arg1 ;
-(SCNVector3)settingEulerAngles;
-(void)setSettingEulerAngles:(SCNVector3)arg1 ;
-(double)settingOpacity;
-(void)setSettingOpacity:(double)arg1 ;
-(BOOL)settingHidden;
-(void)setSettingHidden:(BOOL)arg1 ;
-(id)settingNodeNames;
-(void)setSettingNodeNames:(id)arg1 ;
-(void)setSettingAnimations:(id)arg1 ;
-(id)settingAnimations;
-(id)settingConstraints;
-(void)setSettingConstraints:(id)arg1 ;
-(id)settingPhysicsBody;
-(void)setSettingPhysicsBody:(id)arg1 ;
-(void)setSettingPhysicsShapeOptions:(id)arg1 ;
-(id)settingPhysicsField;
-(void)setSettingPhysicsField:(id)arg1 ;
-(void)setSettingParticlesEmitter:(id)arg1 ;
-(void)setWidget:(OKPresentationWidget *)arg1 ;
-(unsigned long long)presentationMode;
-(NSDictionary *)actionBidings;
-(OKPhysicsBody *)physicsBody;
@end

