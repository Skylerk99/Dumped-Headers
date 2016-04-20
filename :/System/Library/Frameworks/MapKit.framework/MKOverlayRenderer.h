/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKOverlay;
#import <MapKit/MapKit-Structs.h>
@interface MKOverlayRenderer : NSObject {

	id<MKOverlay> _overlay;
	SCD_Struct_MK2 _boundingMapRect;
	id _renderer;
	double _contentScaleFactor;
	double _alpha;

}

@property (nonatomic,readonly) id<MKOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
@property (assign) double alpha;                                   //@synthesize alpha=_alpha - In the implementation block
@property (readonly) double contentScaleFactor; 
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(id)initWithOverlay:(id)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK2)arg1 ;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK12*)arg2 inContext:(CGContextRef)arg3 ;
-(CGPoint)pointForMapPoint:(SCD_Struct_MK1)arg1 ;
-(void)set_boundingMapRect:(SCD_Struct_MK2)arg1 ;
-(id)_mk_overlayView;
-(SCD_Struct_MK1)_originMapPoint;
-(SCD_Struct_MK2)_boundingMapRect;
-(BOOL)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK12*)arg2 ;
-(SCD_Struct_MK2)mapRectForRect:(CGRect)arg1 ;
-(SCD_Struct_MK1)mapPointForPoint:(CGPoint)arg1 ;
-(id)_mk_overlayLayer;
-(BOOL)canDrawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 ;
-(void)set_renderer:(id)arg1 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK2)arg1 ;
-(id)_renderer;
-(void)setNeedsDisplay;
-(void)dealloc;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(id)init;
-(void)setContentScaleFactor:(double)arg1 ;
-(double)contentScaleFactor;
-(id<MKOverlay>)overlay;
@end

