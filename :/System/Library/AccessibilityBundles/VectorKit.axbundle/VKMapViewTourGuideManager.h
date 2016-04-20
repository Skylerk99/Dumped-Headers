/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>
#import <VectorKit/VKMapViewTourGuideDelegate.h>

@class VKMapViewAccessibilityElementManager, VKMapViewTourStatus, NSString, VKFeatureAccessibilityElement, VKMapView;

@interface VKMapViewTourGuideManager : NSObject <MKLocationManagerObserver, VKMapViewTourGuideDelegate> {

	BOOL _running;
	VKMapViewAccessibilityElementManager* _elementManager;
	VKMapViewTourStatus* _tourStatus;
	NSString* _lastTourStatusAnnouncement;
	VKFeatureAccessibilityElement* _lastCurrentTourLocation;
	VKMapView* _mapView;
	long long _secondsSinceZoomRequest;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;                                        //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) VKMapViewAccessibilityElementManager * elementManager;                //@synthesize elementManager=_elementManager - In the implementation block
@property (nonatomic,retain) VKMapViewTourStatus * tourStatus;                                     //@synthesize tourStatus=_tourStatus - In the implementation block
@property (nonatomic,retain) NSString * lastTourStatusAnnouncement;                                //@synthesize lastTourStatusAnnouncement=_lastTourStatusAnnouncement - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * lastCurrentTourLocation;              //@synthesize lastCurrentTourLocation=_lastCurrentTourLocation - In the implementation block
@property (assign,nonatomic) VKMapView * mapView;                                                  //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) long long secondsSinceZoomRequest;                                    //@synthesize secondsSinceZoomRequest=_secondsSinceZoomRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)decreaseDetailLevel;
+(long long)detailLevel;
+(void)increaseDetailLevel;
+(id)_descriptionForDetailLevel;
+(BOOL)shouldSuppressLocationUpdates;
-(void)setElementManager:(VKMapViewAccessibilityElementManager *)arg1 ;
-(id)tourStatusForMapView:(id)arg1 ;
-(void)_updateElements;
-(VKMapViewTourStatus *)tourStatus;
-(double)_yaw;
-(VKMapViewAccessibilityElementManager *)elementManager;
-(id)_elements;
-(void)startTour;
-(id)initWithMapView:(id)arg1 elementManager:(id)arg2 ;
-(long long)detailLevel;
-(void)stopTour;
-(BOOL)_elementValidForCurrentDetailLevel:(id)arg1 ;
-(double)_normalizedThetaFromTheta:(double)arg1 ;
-(BOOL)_elementIntersectsElement:(id)arg1 point:(CGPoint)arg2 radius:(double)arg3 ;
-(NSString *)lastTourStatusAnnouncement;
-(void)setLastTourStatusAnnouncement:(NSString *)arg1 ;
-(long long)secondsSinceZoomRequest;
-(void)setSecondsSinceZoomRequest:(long long)arg1 ;
-(id)_tourLocationForUserPoint:(CGPoint)arg1 radius:(double)arg2 ignoreLocation:(id)arg3 ;
-(VKFeatureAccessibilityElement *)lastCurrentTourLocation;
-(id)_tourPOIForUserPoint:(CGPoint)arg1 radius:(double)arg2 futureUserTheta:(double)arg3 thetaFromCourse:(double*)arg4 shouldFilterIfBehind:(BOOL)arg5 ;
-(unsigned long long)_tourPOISideFromTheta:(double)arg1 ;
-(BOOL)_setZoomLevelForUserSpeed:(double)arg1 ;
-(void)_queueTourStatusAnnouncement:(id)arg1 ;
-(void)setLastCurrentTourLocation:(VKFeatureAccessibilityElement *)arg1 ;
-(void)_updateElementsComplete:(id)arg1 ;
-(void)_stopObservingUpdates;
-(BOOL)_elementsInvalidForCenter:(CGPoint)arg1 ;
-(BOOL)_elementsInvalidForOrientation:(long long)arg1 ;
-(id)_descriptionForOrientation:(long long)arg1 ;
-(void)_updateTourStatusWithCenter:(CGPoint)arg1 location:(id)arg2 orientation:(long long)arg3 ;
-(void)_startObservingUpdates;
-(void)setTourStatus:(VKMapViewTourStatus *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedHeading:(id)arg1 ;
-(void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2 ;
-(long long)_orientation;
-(CGPoint)_center;
-(void)setMapView:(VKMapView *)arg1 ;
-(VKMapView *)mapView;
-(void)dealloc;
-(BOOL)isRunning;
-(void)setRunning:(BOOL)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end

