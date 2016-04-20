/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TwoSteps/TwoSteps-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableArray, UIColor, CABasicAnimation, NSCondition, NSXMLParser, UIBezierPath, CAShapeLayer, NSNumber, NSString;

@interface BKUICurvesView : UIView <NSXMLParserDelegate> {

	NSMutableArray* _pathLayers;
	UIColor* _color;
	unsigned long long _currentLayer;
	unsigned long long _preEstimateLayer;
	float _progress;
	BOOL _estimateFailed;
	BOOL _estimating;
	CABasicAnimation* _lastAnimation;
	double _lastRatio;
	NSCondition* _initCondition;
	BOOL _inited;
	NSXMLParser* _parser;
	UIBezierPath* _wholePath;
	NSMutableArray* _paths;
	CAShapeLayer* _fingerLayer;
	NSNumber* _speed;

}

@property (retain) NSNumber * speed;                                //@synthesize speed=_speed - In the implementation block
@property (assign) float progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSublayersSize:(CGSize)arg1 ;
-(void)_addEstimateWatchDog;
-(void)_animateEstimateFailure;
-(void)_removeEstimateWatchDog;
-(void)loadDataFromXML:(id)arg1 name:(id)arg2 color:(id)arg3 ;
-(void)estimateProgress:(float)arg1 ;
-(void)_startAnimation:(unsigned long long)arg1 withColor:(id)arg2 isLast:(BOOL)arg3 ;
-(CGPoint)_getPoint:(id)arg1 ;
-(void)_animateFromLayer:(unsigned long long)arg1 toLayer:(unsigned long long)arg2 withColor:(id)arg3 ;
-(void)estimateFailed;
-(void)_waitForInit;
-(void)_checkEstimateFailedAfterAnimation:(id)arg1 ;
-(unsigned long long)_animateFromLayer:(unsigned long long)arg1 toProgress:(float)arg2 withColor:(id)arg3 ;
-(void)_resetLayers;
-(void)_resetEstimate:(id)arg1 ;
-(void)dealloc;
-(void)setSpeed:(NSNumber *)arg1 ;
-(NSNumber *)speed;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
@end

