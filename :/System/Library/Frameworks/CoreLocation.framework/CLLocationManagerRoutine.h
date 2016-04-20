/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CLLocationManagerRoutineProxy;

@interface CLLocationManagerRoutine : NSObject {

	_CLLocationManagerRoutineProxy* _locationManagerRoutineProxy;

}

@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate; 
@property (nonatomic,retain) _CLLocationManagerRoutineProxy * locationManagerRoutineProxy;              //@synthesize locationManagerRoutineProxy=_locationManagerRoutineProxy - In the implementation block
-(_CLLocationManagerRoutineProxy *)locationManagerRoutineProxy;
-(void)setLocationManagerRoutineProxy:(_CLLocationManagerRoutineProxy *)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CLLocationManagerDelegate>)delegate;
@end

