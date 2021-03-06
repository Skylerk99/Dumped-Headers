/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKController, AKPageModelController, AKGeometryHelper, AKLayerPresentationManager, UIView;

@interface AKPageController : NSObject {

	BOOL _shouldPixelate;
	BOOL _layerPresentationManagerWasSetup;
	AKController* _controller;
	AKPageModelController* _pageModelController;
	unsigned long long _pageIndex;
	AKGeometryHelper* _geometryHelper;
	AKLayerPresentationManager* _layerPresentationManager;
	UIView* _overlayView;

}

@property (__weak) AKController * controller;                                                    //@synthesize controller=_controller - In the implementation block
@property (retain) AKPageModelController * pageModelController;                                  //@synthesize pageModelController=_pageModelController - In the implementation block
@property (assign) unsigned long long pageIndex;                                                 //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign) BOOL shouldPixelate;                                                          //@synthesize shouldPixelate=_shouldPixelate - In the implementation block
@property (nonatomic,retain) AKGeometryHelper * geometryHelper;                                  //@synthesize geometryHelper=_geometryHelper - In the implementation block
@property (nonatomic,retain) AKLayerPresentationManager * layerPresentationManager;              //@synthesize layerPresentationManager=_layerPresentationManager - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                               //@synthesize overlayView=_overlayView - In the implementation block
@property (readonly) id<AKControllerDelegateProtocol> delegate; 
@property (assign) BOOL layerPresentationManagerWasSetup;                                        //@synthesize layerPresentationManagerWasSetup=_layerPresentationManagerWasSetup - In the implementation block
+(id)pageControllerWithController:(id)arg1 andPageModelController:(id)arg2 ;
-(id<AKControllerDelegateProtocol>)delegate;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(AKGeometryHelper *)geometryHelper;
-(long long)currentModelToScreenExifOrientation;
-(double)currentModelToScreenScaleFactor;
-(AKPageModelController *)pageModelController;
-(AKLayerPresentationManager *)layerPresentationManager;
-(CGRect)maxPageRect;
-(double)modelBaseScaleFactor;
-(void)setShouldPixelate:(BOOL)arg1 ;
-(BOOL)relinquishablesAreLoaded;
-(void)setupRelinquishables;
-(void)releaseRelinquishables;
-(CGRect)convertRectFromModelToOverlay:(CGRect)arg1 ;
-(id)initForTesting;
-(id)newContentSnapshotPDFDataAtScale:(double)arg1 inRect:(CGRect)arg2 forLoupeAnnotation:(id)arg3 ;
-(CGPoint)convertPointFromOverlayToModel:(CGPoint)arg1 ;
-(CGRect)convertRectFromOverlayToModel:(CGRect)arg1 ;
-(id)_initWithController:(id)arg1 andPageModelController:(id)arg2 ;
-(void)setPageModelController:(AKPageModelController *)arg1 ;
-(void)setGeometryHelper:(AKGeometryHelper *)arg1 ;
-(void)setLayerPresentationManager:(AKLayerPresentationManager *)arg1 ;
-(void)setLayerPresentationManagerWasSetup:(BOOL)arg1 ;
-(BOOL)shouldPixelate;
-(BOOL)layerPresentationManagerWasSetup;
-(void)updateScaleFactor:(double)arg1 isLiveUpdate:(BOOL)arg2 forceUpdate:(BOOL)arg3 ;
-(CGPoint)convertPointFromModelToOverlay:(CGPoint)arg1 ;
-(id)annotationsBeneathLoupe:(id)arg1 ;
-(void)overlayWasAddedToSuperview;
-(void)teardown;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

