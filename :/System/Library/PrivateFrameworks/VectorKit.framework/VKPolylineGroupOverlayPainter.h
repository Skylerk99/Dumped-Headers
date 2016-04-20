/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlayPainter.h>
#import <libobjc.A.dylib/VKPolylineGroupOverlayObserver.h>

@class VKPolylineOverlay, NSMapTable, VKPolylineOverlayPainter, NSString;

@interface VKPolylineGroupOverlayPainter : VKOverlayPainter <VKPolylineGroupOverlayObserver> {

	VKPolylineOverlay* _selectedPolyline;
	NSMapTable* _polylinesToPainters;
	BOOL _showTraffic;

}

@property (nonatomic,readonly) VKPolylineOverlayPainter * selectedPolylinePainter; 
@property (assign,nonatomic) BOOL showTraffic;                                                  //@synthesize showTraffic=_showTraffic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setApplicationState:(unsigned char)arg1 ;
-(id)initWithOverlay:(id)arg1 ;
-(void)dealloc;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)stylesheetDidChange;
-(void)gglLayoutWithContext:(id)arg1 traveledStrokeCommandBuffer:(CommandBuffer*)arg2 strokeCommandBuffer:(CommandBuffer*)arg3 traveledFillCommandBuffer:(CommandBuffer*)arg4 fillCommandBuffer:(CommandBuffer*)arg5 tiles:(id)arg6 ;
-(void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3 ;
-(void)setContainerModel:(id)arg1 ;
-(BOOL)showTraffic;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(VKPolylineOverlayPainter *)selectedPolylinePainter;
-(void)setShowTraffic:(BOOL)arg1 ;
-(void)_addPainterForOverlay:(id)arg1 ;
@end

