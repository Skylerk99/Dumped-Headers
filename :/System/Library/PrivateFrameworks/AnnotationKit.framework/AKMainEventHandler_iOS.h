/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKMainEventHandler.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer, AKPanGestureRecognizer, UIRotationGestureRecognizer, NSString;

@interface AKMainEventHandler_iOS : AKMainEventHandler <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapRecognizer;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UILongPressGestureRecognizer* _pressRecognizer;
	AKPanGestureRecognizer* _panRecognizer;
	UIRotationGestureRecognizer* _rotationRecognizer;
	double _lastRotationAngleInRotationGesture;

}

@property (retain) UITapGestureRecognizer * tapRecognizer;                        //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (retain) UITapGestureRecognizer * doubleTapRecognizer;                  //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (retain) UILongPressGestureRecognizer * pressRecognizer;                //@synthesize pressRecognizer=_pressRecognizer - In the implementation block
@property (retain) AKPanGestureRecognizer * panRecognizer;                        //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (retain) UIRotationGestureRecognizer * rotationRecognizer;              //@synthesize rotationRecognizer=_rotationRecognizer - In the implementation block
@property (assign) double lastRotationAngleInRotationGesture;                     //@synthesize lastRotationAngleInRotationGesture=_lastRotationAngleInRotationGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithController:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UITapGestureRecognizer *)doubleTapRecognizer;
-(UILongPressGestureRecognizer *)pressRecognizer;
-(AKPanGestureRecognizer *)panRecognizer;
-(UIRotationGestureRecognizer *)rotationRecognizer;
-(void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)forwardRecognizerToMainHandleEvent:(id)arg1 ;
-(void)setDoubleTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setRotationRecognizer:(UIRotationGestureRecognizer *)arg1 ;
-(void)setPanRecognizer:(AKPanGestureRecognizer *)arg1 ;
-(BOOL)_hitTestAnnotationsIncludingPOI:(BOOL)arg1 atPointInWindow:(CGPoint)arg2 outAnnotation:(id*)arg3 ;
-(void)setLastRotationAngleInRotationGesture:(double)arg1 ;
-(double)lastRotationAngleInRotationGesture;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)teardown;
-(UITapGestureRecognizer *)tapRecognizer;
@end

