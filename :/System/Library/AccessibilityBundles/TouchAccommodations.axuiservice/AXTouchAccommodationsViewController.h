/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/TouchAccommodations.axuiservice/TouchAccommodations
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchAccommodations/TouchAccommodations-Structs.h>
#import <UIKit/UIViewController.h>

@class CATransformLayer;

@interface AXTouchAccommodationsViewController : UIViewController {

	CATransformLayer* _transformLayer;

}
-(id)_createLayerAtPoint:(CGPoint)arg1 ;
-(void)removeAllHandTouchMarkers;
-(void)updateLocationOfHandTouchMarkerAtPoints:(id)arg1 ;
-(void)resetProgressTrackOfHandTouchMarkerAtPoints:(id)arg1 ;
-(id)_createProgressLayerWithColor:(id)arg1 withFilterName:(id)arg2 forHoldDuration:(BOOL)arg3 ;
-(id)_createTransformLayerForHoldDuration:(BOOL)arg1 ;
-(CGPathRef)_drawFullCircleWithRadius:(double)arg1 ;
-(void)viewDidLoad;
@end

