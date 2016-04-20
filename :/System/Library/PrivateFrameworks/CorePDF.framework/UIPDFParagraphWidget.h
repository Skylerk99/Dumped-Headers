/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIPDFSelectionWidget.h>

@class UIPDFPageView, CAShapeLayer, CALayer;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {

	CAShapeLayer* _trackingBorder;
	CGRect _initialRect;
	BOOL _tracking;
	CGRect _currentTrackingRect;
	CALayer* _leftGrabber;
	CALayer* _rightGrabber;
	CALayer* _topGrabber;
	CALayer* _bottomGrabber;
	CALayer* _selectedGrabber;
	CGRect _boundsInPDFSpace;
	CGColorRef _grabberColor;
	UIPDFPageView* _pageView;
	CGPoint _initialSelectionPointOnPage;

}

@property (assign,nonatomic) UIPDFPageView * pageView;                           //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,readonly) CGPoint initialSelectionPointOnPage;              //@synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage - In the implementation block
@property (nonatomic,readonly) CGPoint currentSelectionPointOnPage; 
-(void)hide;
-(void)dealloc;
-(id)init;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)layout;
-(void)setSelection:(id)arg1 ;
-(void)remove;
-(UIPDFPageView *)pageView;
-(void)setSelectedGrabberPosition:(CGRect)arg1 ;
-(CGRect)adjustRect:(CGRect)arg1 toPoint:(CGPoint)arg2 ;
-(CGRect)selectionBoundsInEffectsSpace;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3 ;
-(CGPoint)selectedPointFor:(CGPoint)arg1 ;
-(CGPoint)viewOffset;
-(void)track:(CGPoint)arg1 ;
-(void)endTracking;
-(CGRect)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1 ;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(UIPDFPageView *)arg1 ;
@end

