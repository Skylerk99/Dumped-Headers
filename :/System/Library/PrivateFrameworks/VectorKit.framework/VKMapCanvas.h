/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKScreenCanvas.h>
#import <libobjc.A.dylib/VKMapModelDelegate.h>
#import <libobjc.A.dylib/VKOverlayContainerRouteDelegate.h>
#import <libobjc.A.dylib/VKInteractiveMap.h>

@protocol VKInteractiveMapDelegate;
@class NSArray, GEOMapRegion, VKAnchorWrapper, VKMapModel, VKMapCameraController, VKCamera, GEOResourceManifestConfiguration, VKPolylineOverlayPainter, NSString;

@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKOverlayContainerRouteDelegate, VKInteractiveMap> {

	VKMapModel* _map;
	VKMapCameraController* _cameraController;
	id<VKInteractiveMapDelegate> _delegate;
	CGSize _lastCanvasSize;
	VKCamera* _defaultTrackingCamera;
	float _lastValidCanvasSizeZoomLevel;
	BOOL _hasLastValidCanvasSizeZoomLevel;

}

@property (assign,nonatomic) BOOL shouldLoadFallbackTiles; 
@property (assign,nonatomic) BOOL shouldLoadMapMargin; 
@property (assign,nonatomic) id<VKInteractiveMapDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL staysCenteredDuringPinch; 
@property (assign,nonatomic) BOOL staysCenteredDuringRotation; 
@property (assign,nonatomic) BOOL isPitchable; 
@property (nonatomic,retain) GEOResourceManifestConfiguration * additionalManifestConfiguration; 
@property (getter=isPitched,nonatomic,readonly) BOOL pitched; 
@property (assign,nonatomic) BOOL trafficEnabled; 
@property (assign,nonatomic) shared_ptr<gss::StyleManager>* styleManager; 
@property (assign,nonatomic) long long mapType; 
@property (nonatomic,readonly) double minimumZoomLevel; 
@property (nonatomic,readonly) double maximumZoomLevel; 
@property (assign,nonatomic) BOOL dynamicMapModesEnabled; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) double yaw; 
@property (assign,nonatomic) VKPoint centerCoordinate; 
@property (assign,nonatomic) BOOL allowDatelineWraparound; 
@property (assign,nonatomic) int trackingCameraPanStyle; 
@property (assign,nonatomic) double trackingZoomScale; 
@property (nonatomic,retain) VKCamera * defaultTrackingCamera;                                                   //@synthesize defaultTrackingCamera=_defaultTrackingCamera - In the implementation block
@property (assign,nonatomic) BOOL labelMarkerSelectionEnabled; 
@property (nonatomic,retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter; 
@property (nonatomic,retain) id<GEORoutePreloadSession> routePreloadSession; 
@property (nonatomic,readonly) VKMapModel * map;                                                                 //@synthesize map=_map - In the implementation block
@property (assign,nonatomic) BOOL debugDynamicMapModesEnabled; 
@property (assign,nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (assign,nonatomic) double userZoomFocusStyleGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMinGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMaxGroundspanMeters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL trafficIncidentsEnabled; 
@property (getter=isFullyPitched,nonatomic,readonly) BOOL fullyPitched; 
@property (assign,nonatomic) long long shieldSize; 
@property (assign,nonatomic) long long navigationShieldSize; 
@property (assign,nonatomic) long long shieldIdiom; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings; 
@property (assign,nonatomic) PolylineCoordinate routeUserOffset; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (assign,nonatomic) BOOL localizeLabels; 
@property (assign,nonatomic) unsigned char labelScaleFactor; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double altitude; 
@property (assign,nonatomic) long long annotationTrackingZoomStyle; 
@property (assign,nonatomic) long long annotationTrackingHeadingAnimationDisplayRate; 
@property (getter=isAnimatingToTrackAnnotation,nonatomic,readonly) BOOL animatingToTrackAnnotation; 
@property (nonatomic,readonly) id<VKTrackableAnnotation> trackingAnnotation; 
@property (getter=isTrackingHeading,nonatomic,readonly) BOOL trackingHeading; 
@property (nonatomic,readonly) NSArray * rasterOverlays; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (getter=isFullyDrawn,nonatomic,readonly) BOOL fullyDrawn; 
@property (nonatomic,readonly) VKAnchorWrapper * externalAnchors; 
+(BOOL)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(id)arg3 ;
-(void)_resetMaximumZoomLevel;
-(void)_setMaximumZoomLevel:(double)arg1 ;
-(BOOL)isPitchable;
-(id)consoleString:(BOOL)arg1 ;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)setApplicationState:(unsigned char)arg1 ;
-(void)updatePanWithTranslation:(CGPoint)arg1 ;
-(BOOL)restoreViewportFromInfo:(id)arg1 ;
-(void)debugHighlightLabelAtPoint:(CGPoint)arg1 ;
-(void)setIsPitchable:(BOOL)arg1 ;
-(void)setLabelMarkerSelectionEnabled:(BOOL)arg1 ;
-(void)deselectLabelMarker;
-(void)selectLabelMarker:(id)arg1 ;
-(/*^block*/id)annotationRectTest;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)stopTrackingAnnotation;
-(double)currentZoomLevelForTileSize:(long long)arg1 ;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(void)enter3DMode;
-(void)setYaw:(double)arg1 animated:(BOOL)arg2 ;
-(void)removeAnnotationMarker:(id)arg1 ;
-(id)labelMarkers;
-(double)durationToAnimateToMapRegion:(id)arg1 ;
-(void)removeExternalAnchor:(id)arg1 ;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(double)yaw;
-(void)setAllowDatelineWraparound:(BOOL)arg1 ;
-(void)setAnnotationTrackingZoomStyle:(long long)arg1 ;
-(void)exit3DMode;
-(void)setShouldLoadFallbackTiles:(BOOL)arg1 ;
-(void)setMapType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(BOOL)canZoomOutForTileSize:(long long)arg1 ;
-(double)presentationYaw;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(BOOL)canZoomInForTileSize:(long long)arg1 ;
-(void)setAdditionalManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(void)setRouteLineSplitAnnotation:(id<VKRouteMatchedAnnotationPresentation>)arg1 ;
-(BOOL)canEnter3DMode;
-(id)attributionsForCurrentRegion;
-(BOOL)trafficIncidentsEnabled;
-(BOOL)isShowingNoDataPlaceholders;
-(/*^block*/id)annotationCoordinateTest;
-(double)maximumZoomLevelForTileSize:(long long)arg1 ;
-(void)setStaysCenteredDuringPinch:(BOOL)arg1 ;
-(void)_setStyleTransitionProgress:(double)arg1 targetStyle:(DisplayStyle)arg2 step:(long long)arg3 ;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(BOOL)allowDatelineWraparound;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(double)topDownMinimumZoomLevelForTileSize:(long long)arg1 ;
-(void)setCenterCoordinate:(VKPoint)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAnimatingToTrackAnnotation;
-(BOOL)localizeLabels;
-(long long)annotationTrackingZoomStyle;
-(id)selectedLabelMarker;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(void)setTrafficIncidentsEnabled:(BOOL)arg1 ;
-(void)stopPanningAtPoint:(CGPoint)arg1 ;
-(GEOMapRegion *)mapRegionOfInterest;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)addExternalAnchor:(id)arg1 ;
-(void)setVehicleState:(VehicleState)arg1 ;
-(GEOResourceManifestConfiguration *)additionalManifestConfiguration;
-(BOOL)showsBuildings;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)showsPointsOfInterest;
-(void)setLocalizeLabels:(BOOL)arg1 ;
-(BOOL)isPitched;
-(void)setShieldSize:(long long)arg1 ;
-(long long)shieldSize;
-(void)puckAnimator:(id)arg1 updatedPosition:(SCD_Struct_VK26*)arg2 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(VKPoint)arg2 ;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(BOOL)currentZoomLevelAllowsRotation;
-(void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1 ;
-(void)selectTransitLineMarker:(id)arg1 ;
-(id)transitLineMarkersInCurrentViewport;
-(void)deselectTransitLineMarker;
-(id)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(void)addRasterOverlay:(id)arg1 ;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)removeRasterOverlay:(id)arg1 ;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(double)zoomLevelAdjustmentForTileSize:(long long)arg1 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(BOOL)isFullyPitched;
-(void)stopSnappingAnimations;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1 ;
-(BOOL)staysCenteredDuringRotation;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1 ;
-(BOOL)staysCenteredDuringPinch;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2 ;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)didStartPanningDeceleration;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(unsigned char)targetDisplay;
-(void)setLabelScaleFactor:(unsigned char)arg1 ;
-(void)setTargetDisplay:(unsigned char)arg1 ;
-(BOOL)trafficEnabled;
-(BOOL)isPointValidForGesturing:(CGPoint)arg1 ;
-(id)transitLineMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(void)setRouteContext:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)setDelegate:(id<VKInteractiveMapDelegate>)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id<VKInteractiveMapDelegate>)delegate;
-(VKEdgeInsets)edgeInsets;
-(void)setContentsScale:(double)arg1 ;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)stopTracking;
-(double)altitude;
-(id)viewportInfo;
-(long long)mapType;
-(VKPoint)centerCoordinate;
-(void)setMapType:(long long)arg1 ;
-(NSArray *)visibleTileSets;
-(id)detailedDescription;
-(void)setCenterCoordinate:(VKPoint)arg1 ;
-(shared_ptr<gss::StyleSheet>*)stylesheet;
-(VKMapModel *)map;
-(double)pitch;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(double)userZoomFocusStyleGroundspanMeters;
-(void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2 ;
-(void)setCurrentLocationText:(id)arg1 ;
-(double)currentZoomLevel;
-(void)setMapRegion:(id)arg1 animated:(BOOL)arg2 ;
-(id)closestRoadMarkerForSelectionAtPoint:(CGPoint)arg1 ;
-(void)setTrackingCameraPanStyle:(int)arg1 ;
-(void)stylesheetAnimationDidEnd:(BOOL)arg1 ;
-(BOOL)currentSceneRequiresMSAA;
-(long long)annotationTrackingHeadingAnimationDisplayRate;
-(VKAnchorWrapper *)externalAnchors;
-(BOOL)labelMarkerSelectionEnabled;
-(void)setStaysCenteredDuringRotation:(BOOL)arg1 ;
-(void)setNavigationShieldSize:(long long)arg1 ;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(int)trackingCameraPanStyle;
-(PolylineCoordinate)routeUserOffset;
-(BOOL)dynamicMapModesEnabled;
-(void)setStylesheetName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3 ;
-(id)annotationMarkers;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(void)updateCameraContext:(id)arg1 ;
-(void)setUserZoomFocusStyleGroundspanMeters:(double)arg1 ;
-(void)updateCameraForFrameResize;
-(void)forceSceneLoad;
-(void)setShouldLimitTrackingCameraHeight:(BOOL)arg1 ;
-(void)endStyleAnimationGroup;
-(long long)navigationShieldSize;
-(double)trackingZoomScale;
-(CGSize)convertPointToMapPoint:(CGPoint)arg1 ;
-(void)reloadStylesheet;
-(void)setDynamicMapModesEnabled:(BOOL)arg1 ;
-(VehicleState)vehicleState;
-(void)setDebugDynamicMapModesEnabled:(BOOL)arg1 ;
-(CGPoint)convertCoordinateToCameraModelPoint:(CGSize)arg1 ;
-(NSArray *)rasterOverlays;
-(double)maximumZoomLevel;
-(BOOL)shouldLoadMapMargin;
-(double)userZoomFocusStyleMaxGroundspanMeters;
-(BOOL)isTrackingHeading;
-(id)persistentOverlays;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 setupHandler:(/*^block*/id)arg3 ;
-(void)resetRenderQueue:(shared_ptr<ggl::RenderQueue>*)arg1 ;
-(void)clearScene;
-(id)roadMarkersForSelectionAtScreenPoint:(CGPoint)arg1 ;
-(void)edgeInsetsDidEndAnimating;
-(void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(BOOL)arg2 ;
-(id<GEORoutePreloadSession>)routePreloadSession;
-(void)zoomToLevel:(double)arg1 withFocusPoint:(CGPoint)arg2 ;
-(void)setCenterCoordinate:(CGSize)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)buildingMarkerAtScreenPoint:(CGPoint)arg1 ;
-(void)setShouldLoadMapMargin:(BOOL)arg1 ;
-(void)didBeginTransitionToTransit;
-(void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1 ;
-(void)selectAnnotationMarker:(id)arg1 ;
-(void)setCanonicalSkyHeight:(double)arg1 ;
-(void)beginStyleAnimationGroup;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/id)arg1 ;
-(id<VKTrackableAnnotation>)trackingAnnotation;
-(shared_ptr<gss::CartoStyle>*)styleForFeature:(id)arg1 ;
-(void)setCenterCoordinate3D:(VKPoint)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(BOOL)debugDynamicMapModesEnabled;
-(CGPoint)convertMapPointToPoint:(CGSize)arg1 ;
-(/*^block*/id)annotationMarkerDeselectionCallback;
-(void)setTrackingZoomScale:(double)arg1 ;
-(double)_styleTransitionProgress;
-(unsigned char)labelScaleFactor;
-(void)transferCamera:(id)arg1 ;
-(id)selectedAnnotationMarker;
-(double)minimumZoomLevelForTileSize:(long long)arg1 ;
-(double)userZoomFocusStyleMinGroundspanMeters;
-(void)setRoutePreloadSession:(id<GEORoutePreloadSession>)arg1 ;
-(BOOL)isFullyDrawn;
-(void)transitionToTracking:(BOOL)arg1 mapMode:(long long)arg2 pounceCompletionHandler:(/*^block*/id)arg3 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 ;
-(DisplayStyle)sourceMapDisplayStyle;
-(void)resetTileContainers;
-(NSArray *)externalTrafficIncidents;
-(CGSize)convertPointToCoordinate:(CGPoint)arg1 ;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(void)setShieldIdiom:(long long)arg1 ;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 ;
-(void)setFocusedLabelsPolylinePainter:(VKPolylineOverlayPainter *)arg1 ;
-(void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4 ;
-(id)featureMarkerAtScreenPoint:(CGPoint)arg1 ;
-(void)stylesheetAnimationDidProgress:(float)arg1 ;
-(void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1 ;
-(double)minimumZoomLevel;
-(void)pauseTracking;
-(VKPolylineOverlayPainter *)focusedLabelsPolylinePainter;
-(void)edgeInsetsWillBeginAnimating;
-(id)annotationMarkerForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(BOOL)arg2 ;
-(void)preloadNavigationSceneResourcesWithDevice:(const shared_ptr<ggl::Device>*)arg1 ;
-(BOOL)shouldLoadFallbackTiles;
-(id)initShouldRasterize:(BOOL)arg1 contentScale:(double)arg2 target:(id)arg3 device:(const shared_ptr<ggl::Device>*)arg4 inBackground:(BOOL)arg5 manifestConfiguration:(id)arg6 locale:(id)arg7 ;
-(long long)shieldIdiom;
-(void)setExternalTrafficIncidents:(NSArray *)arg1 ;
-(CGPoint)convertCoordinateToPoint:(CGSize)arg1 ;
-(void)clearSceneIsEffectivelyHidden:(BOOL)arg1 ;
-(BOOL)trackingCanZoomIn;
-(void)setDefaultTrackingCamera:(VKCamera *)arg1 ;
-(void)mapModel:(id)arg1 needsPanByOffset:(CGPoint)arg2 relativeToScreenPoint:(CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)setStylesheetMapDisplayStyle:(DisplayStyle)arg1 ;
-(void)stylesheetAnimationWillStartFromStyle:(DisplayStyle)arg1 toStyle:(DisplayStyle)arg2 ;
-(BOOL)trackingCanZoomOut;
-(BOOL)mapModelInNav:(id)arg1 ;
-(id)navTileSource;
-(shared_ptr<gss::CartoStyle>*)styleAtScreenPoint:(CGPoint)arg1 ;
-(VKPoint)screenPointForPoint:(CGPoint)arg1 ;
-(double)mapModelZoomScale:(id)arg1 ;
-(void)_updateViewTransform;
-(void)stopRegionAnimation;
-(BOOL)supportsMapDisplayStyle:(DisplayStyle)arg1 ;
-(BOOL)mapModelInNavAtDefaultZoom:(id)arg1 ;
-(void)mapModelWillBecomeFullyDrawn:(id)arg1 ;
-(void)mapModelDidReloadStylesheet:(id)arg1 ;
-(void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(void)mapModelDidStartLoadingTiles:(id)arg1 ;
-(void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4 ;
-(void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1 ;
-(void)mapModelLabelsDidLayout:(id)arg1 ;
-(void)mapModelDidFinishLoadingTiles:(id)arg1 ;
-(id)mapModel:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(void)mapModelDidBecomePartiallyDrawn:(id)arg1 ;
-(void)mapModel:(id)arg1 didUpdateNavigationPuckSize:(float)arg2 ;
-(void)mapModel:(id)arg1 didUpdateContainsOverlay:(BOOL)arg2 ;
-(void)gglWillDrawWithTimestamp;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2 ;
-(CGPoint)_centerScreenPoint;
-(void)cameraController:(id)arg1 pouncingToCameraPosition:(VKPoint)arg2 orientation:(const SCD_Struct_VK6*)arg3 ;
-(void)cameraControllerDidChangeCameraState:(id)arg1 ;
-(void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2 ;
-(VKCamera *)defaultTrackingCamera;
-(void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2 ;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)overlayContainer:(id)arg1 updatedMatchedSection:(fast_shared_ptr<vk::RouteLineSection>*)arg2 index:(PolylineCoordinate*)arg3 ;
-(void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1 ;
@end

