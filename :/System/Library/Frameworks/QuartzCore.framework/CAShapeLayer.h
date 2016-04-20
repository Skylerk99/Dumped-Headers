/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, NSArray;

@interface CAShapeLayer : CALayer

@property (assign) const CGPathRef path; 
@property (assign) CGColorRef fillColor; 
@property (copy) NSString * fillRule; 
@property (assign) CGColorRef strokeColor; 
@property (assign) double strokeStart; 
@property (assign) double strokeEnd; 
@property (assign) double lineWidth; 
@property (assign) double miterLimit; 
@property (copy) NSString * lineCap; 
@property (copy) NSString * lineJoin; 
@property (assign) double lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(double)lineDashPhase;
-(NSArray *)lineDashPattern;
-(void)setLineDashPhase:(double)arg1 ;
-(NSString *)lineCap;
-(double)strokeStart;
-(double)strokeEnd;
-(NSString *)fillRule;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(const CGPathRef)path;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(void)setFillRule:(NSString *)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setLineCap:(NSString *)arg1 ;
-(void)setLineJoin:(NSString *)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(NSString *)lineJoin;
-(void)setStrokeStart:(double)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
@end

