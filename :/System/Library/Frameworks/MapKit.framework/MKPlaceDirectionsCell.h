/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>
#import <libobjc.A.dylib/MKQuickRouteManagerDelegate.h>
#import <libobjc.A.dylib/MKQuickRouteConfigurableView.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class UIButton, UILabel, _MKQuickRouteManager, NSMutableArray, NSArray, MKMapItem, NSString;

@interface MKPlaceDirectionsCell : ABContactCell <MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKLocationManagerObserver> {

	UIButton* _directionsButton;
	UIButton* _walkButton;
	UIButton* _transitButton;
	UIButton* _driveButton;
	UILabel* _walkTimeLabel;
	UILabel* _transitTimeLabel;
	UILabel* _driveTimeLabel;
	_MKQuickRouteManager* _quickRouteManager;
	NSMutableArray* _buttonBaselineConstraints;
	NSArray* _etaConstraints;
	MKMapItem* _mapItem;
	/*^block*/id _requestDirectionsBlock;

}

@property (nonatomic,retain) MKMapItem * mapItem;                   //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,copy) id requestDirectionsBlock;               //@synthesize requestDirectionsBlock=_requestDirectionsBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)scaledHeight;
+(id)reuseIdentifier;
-(void)contentSizeDidChange;
-(id)newLabel;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4 ;
-(void)_quickDirectionsTapped:(id)arg1 ;
-(unsigned long long)preferredDirectionsTypeForQuickRoute;
-(void)updateETAFor:(unsigned long long)arg1 button:(id)arg2 label:(id)arg3 ;
-(void)_transitDirectionsTapped:(id)arg1 ;
-(BOOL)quickRouteShouldOnlyUseAutomobile;
-(void)_drivingDirectionsTapped:(id)arg1 ;
-(void)updateETAs:(BOOL)arg1 ;
-(BOOL)quickRouteShouldIncludeTransit;
-(id)timeEstimateFont;
-(void)_walkingDirectionsTapped:(id)arg1 ;
-(id)newButtonWithImage:(id)arg1 andSelector:(SEL)arg2 ;
-(id)requestDirectionsBlock;
-(void)setRequestDirectionsBlock:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end

