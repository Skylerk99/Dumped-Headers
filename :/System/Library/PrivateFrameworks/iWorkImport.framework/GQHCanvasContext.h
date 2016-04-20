/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHContext.h>

@class GQDAffineGeometry, NSMutableString, NSString;

@interface GQHCanvasContext : NSObject <GQHContext> {

	GQDAffineGeometry* mGeometry;
	NSMutableString* mFunctionName;
	BOOL mHasFill;
	BOOL mHasStroke;
	CFStringRef mBezierStr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createMaskedImageWithId:(CFStringRef)arg1 geometry:(id)arg2 imageBinary:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(CGPathRef)arg6 graphicStyle:(id)arg7 isFloating:(BOOL)arg8 state:(id)arg9 ;
-(void)addScriptTagToHtml:(id)arg1 state:(id)arg2 ;
-(void)createShapeWithId:(CFStringRef)arg1 path:(id)arg2 geometry:(id)arg3 graphicStyle:(id)arg4 isFloating:(BOOL)arg5 state:(id)arg6 ;
-(void)setBezierPath:(char*)arg1 state:(id)arg2 ;
-(float)strokeWidthWithGraphicStyle:(id)arg1 ;
-(GQHPathEndPointInfo)endPointInfoForPath:(CGPathRef)arg1 ;
-(void)addPathForLineEndStyle:(int)arg1 graphicStyle:(id)arg2 atPoint:(CGPoint)arg3 neighboringCP:(CGPoint)arg4 filledPath:(CGPath*)arg5 strokedPath:(CGPath*)arg6 ;
-(void)prepareContext:(id)arg1 ;
-(void)mapStyle:(id)arg1 state:(id)arg2 ;
-(void)setCGPath:(CGPathRef)arg1 state:(id)arg2 ;
-(void)mapLineEndFillStyle:(id)arg1 state:(id)arg2 ;
-(void)mapLineEndStrokeStyle:(id)arg1 state:(id)arg2 ;
-(void)teardownContext:(id)arg1 ;
-(void)setContextOpacity:(float)arg1 state:(id)arg2 ;
-(void)mapFill:(id)arg1 state:(id)arg2 ;
-(void)mapStroke:(id)arg1 state:(id)arg2 ;
-(void)setFillColor:(id)arg1 state:(id)arg2 ;
-(void)setGradient:(id)arg1 state:(id)arg2 ;
-(void)setImageFill:(CFURLRef)arg1 srcSize:(CGSize)arg2 mode:(int)arg3 state:(id)arg4 ;
-(void)setStrokeColor:(id)arg1 width:(float)arg2 state:(id)arg3 ;
-(id)strokeColorWithGraphicStyle:(id)arg1 ;
-(void)translate:(CGSize)arg1 state:(id)arg2 ;
-(void)dealloc;
@end

