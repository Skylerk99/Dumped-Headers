/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol WebGeolocationCoreLocationUpdateListener;
@class NSString;

@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate> {

	id<WebGeolocationCoreLocationUpdateListener> _positionListener;
	RetainPtr<CLLocationManager>* _locationManager;
	BOOL _isWaitingForAuthorization;
	int _lastAuthorizationStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setEnableHighAccuracy:(BOOL)arg1 ;
-(id)initWithListener:(id)arg1 ;
-(void)requestGeolocationAuthorization;
-(void)createLocationManager;
-(void)sendLocation:(id)arg1 ;
@end

