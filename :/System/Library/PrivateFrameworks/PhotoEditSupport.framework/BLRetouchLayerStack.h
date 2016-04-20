/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLBaseLayerStack.h>

@interface BLRetouchLayerStack : BLBaseLayerStack {

	CGContextRef _labContextRef;
	SCD_Struct_BL9 _edgeAwareColor;

}
+(id)layerStack;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(void)buildEdgeDetectFromImage:(id)arg1 ;
-(void)setStrokesDataDictionary:(id)arg1 ;
-(id)strokesDataDictionary;
-(BOOL)haveLayerMask;
-(BOOL)readyToDraw;
-(void)updateLabColorsInRect:(CGRect)arg1 ;
-(void)sampleEdgeDetectColorFromRect:(CGRect)arg1 ;
-(void)findEdgesInRect:(CGRect)arg1 result:(CGContextRef)arg2 ;
-(int)maxEdgeSize;
-(int)disabledBrushTypes;
-(void)addLayer:(id)arg1 ;
@end

