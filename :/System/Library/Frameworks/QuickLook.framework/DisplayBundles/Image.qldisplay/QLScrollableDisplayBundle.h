/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Image.qldisplay/Image
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Image/Image-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIScrollView, UIView, UIImageView, UITapGestureRecognizer, NSString;

@interface QLScrollableDisplayBundle : QLDisplayBundle <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UIScrollView* _airplayScrollView;
	UIImageView* _airplayImageView;
	long long _lastDisplayedOrientation;
	BOOL _inSizeChange;
	BOOL _inDoubleTapZoom;
	BOOL _appeared;
	double _minZoomScale;
	double _maxZoomScale;
	double _pinchMaxZoomScale;
	double _fillZoomScale;
	double _airplayMinZoomScale;
	double _airplayMaxZoomScale;
	double _airplayFillZoomScale;
	BOOL _contentIsSmallerThanView;
	CGSize _contentSize;
	UITapGestureRecognizer* _doubleTapGesture;

}

@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateZoomScales;
-(double)_maxZoomScaleForContentSize:(CGSize)arg1 ;
-(CGPoint)_imageCenterPoint;
-(void)_updateZoomScalesWithSize:(CGSize)arg1 ;
-(void)_synchronizeAirplayView;
-(void)_updateContentViewGeometry;
-(void)_updateAirPlayZoomScales;
-(double)_fitZoomScale;
-(void)_determineAndUpdateZoomScalesForSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(void)_adjustScrollView:(id)arg1 forTargetCenterPoint:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)_resetZoomScale;
-(void)setOrbMode:(unsigned long long)arg1 ;
-(BOOL)wantsCustomOrbPop;
-(id)airplayView;
-(void)updateAfterCancelledDismissTransitionWithSize:(CGSize)arg1 ;
-(void)setupAirPlayView;
-(void)discardAirPlayView;
-(void)willStartSwiping:(BOOL)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id)scrollView;
-(void)loadView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_doubleTapRecognized:(id)arg1 ;
-(CGRect)_zoomRectForScale:(double)arg1 withCenter:(CGPoint)arg2 ;
-(void)setPreviewMode:(int)arg1 ;
@end

