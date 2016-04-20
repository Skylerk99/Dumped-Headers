/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIAccelerometerDelegate.h>

@protocol PLCameraPanoramaViewDelegate;
@class UIImageView, UIView, CALayer, CMKPanoramaLabel, CMKPanoramaArrowView, CMKPanoramaLevelView, CADisplayLink, CMMotionManager, NSOperationQueue, NSString;

@interface CMKPanoramaView : UIView <UIAccelerometerDelegate> {

	id<PLCameraPanoramaViewDelegate> _delegate;
	float _previewScale;
	BOOL _isCapturing;
	BOOL _isProcessing;
	int _direction;
	double _currentSpeed;
	UIImageView* _previewBackgroundImageView;
	UIView* _previewContainer;
	UIView* _previewMaskingContainer;
	CALayer* _previewLayer;
	UIImageView* _previewGhostImageView;
	CMKPanoramaLabel* _instructionalText;
	UIView* _instructionalTextBackground;
	CMKPanoramaArrowView* _arrowView;
	CMKPanoramaLevelView* _levelView;
	CGPoint _arrowViewBeginCenter;
	CGRect _initialArrowFrame;
	CGRect _currentArrowFrame;
	CGRect _initialMaskFrame;
	CGRect _currentMaskFrame;
	BOOL _isAnimatingTextIn;
	BOOL _isAnimatingTextOut;
	BOOL _showingFastText;
	BOOL _isAnimatingDirection;
	BOOL _showingMoveText;
	CGRect _visiblePreviewRect;
	BOOL _ignorePreviewUpdates;
	CADisplayLink* _displayLink;
	long long _frameCounter;
	CMMotionManager* _motionManager;
	NSOperationQueue* _accelerometerQueue;
	float _initialAcceleration;
	float _currentAcceleration;
	long long _deviceOrientation;
	long long _deferredDeviceOrientation;

}

@property (assign,nonatomic) id<PLCameraPanoramaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CALayer * panoramaPreviewLayer;                       //@synthesize previewLayer=_previewLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PLCameraPanoramaViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<PLCameraPanoramaViewDelegate>)delegate;
-(void)setDeviceOrientation:(long long)arg1 ;
-(double)_ghostWidth;
-(void)_updateInstructionalText:(id)arg1 ;
-(void)_updateInstructionalTextBackground;
-(void)setMaskingContainerFrame:(CGRect)arg1 direction:(int)arg2 ;
-(void)_createMotionManagerAndDisplayLink;
-(void)_arrowWasTapped:(id)arg1 ;
-(void)setCaptureDirection:(int)arg1 ;
-(void)updateUI;
-(void)hideArrowTextAfterDelay;
-(void)showFastMovementText;
-(void)hideFastMovementTextAfterDelay;
-(void)_hideText;
-(void)_cancelDelayedShowMoveText;
-(void)_showMoveUpText;
-(void)_showMoveDownText;
-(void)showMoveUpText;
-(void)showMoveDownText;
-(void)showMoveUpTextAfterDelay;
-(void)showMoveDownTextAfterDelay;
-(void)hideInstructionalText;
-(id)initWithFrame:(CGRect)arg1 centerYOffset:(double)arg2 panoramaPreviewScale:(float)arg3 ;
-(CGRect)visiblePreviewRect;
-(void)showSavingHUD:(BOOL)arg1 ;
-(void)panoramaWillStart;
-(void)updateWithParameters:(id)arg1 ;
-(CALayer *)panoramaPreviewLayer;
-(void)updateToContentSize:(id)arg1 ;
-(void)viewWillAppear;
-(void)viewWillDisappear;
@end

