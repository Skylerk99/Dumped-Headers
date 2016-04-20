/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSString;

@interface CTLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _manager;
	CLLocation* _location;
	BOOL _locationRequested;
	BOOL _locationAvailable;
	BOOL _locationServiceDenied;
	BOOL _locationServiceAuthorized;

}

@property (copy) CLLocation * location;                             //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL locationRequested;                //@synthesize locationRequested=_locationRequested - In the implementation block
@property (assign,nonatomic) BOOL locationAvailable;                //@synthesize locationAvailable=_locationAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)stopLocationUpdates;
-(BOOL)isLocationServiceEnabled;
-(BOOL)locationRequested;
-(void)setLocationRequested:(BOOL)arg1 ;
-(void)shouldUpdateLocation:(BOOL)arg1 ;
-(void)startLocationUpdates;
-(id)copyLastKnownLocation;
-(BOOL)isLocationServiceDenied;
-(BOOL)isLocationServiceAuthorized;
-(BOOL)locationAvailable;
-(void)setLocationAvailable:(BOOL)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

