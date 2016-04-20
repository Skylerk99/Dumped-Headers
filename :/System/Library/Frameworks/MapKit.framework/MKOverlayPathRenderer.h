/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@class UIColor, NSArray;

@interface MKOverlayPathRenderer : MKOverlayRenderer {

	UIColor* _fillColor;
	UIColor* _strokeColor;
	double _lineWidth;
	int _lineJoin;
	int _lineCap;
	double _miterLimit;
	double _lineDashPhase;
	NSArray* _lineDashPattern;
	CGPathRef _path;

}

@property (retain) UIColor * fillColor; 
@property (retain) UIColor * strokeColor; 
@property (assign) double lineWidth; 
@property (assign) int lineJoin; 
@property (assign) int lineCap; 
@property (assign) double miterLimit; 
@property (assign) double lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
@property (assign) const CGPathRef path; 
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(double)lineDashPhase;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)applyStrokePropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(NSArray *)lineDashPattern;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)applyFillPropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(id)initWithOverlay:(id)arg1 ;
-(void)setLineDashPhase:(double)arg1 ;
-(void)invalidatePath;
-(int)lineCap;
-(void)dealloc;
-(const CGPathRef)path;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(void)createPath;
-(int)lineJoin;
@end

