/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAMetalLayer : CALayer {

	CAMetalLayerPrivate* _priv;

}

@property (assign) unsigned long long maximumDrawableCount; 
@property (assign) BOOL lowLatency; 
@property (retain) id<MTLDevice> device; 
@property (assign) unsigned long long pixelFormat; 
@property (assign) BOOL framebufferOnly; 
@property (assign) CGSize drawableSize; 
@property (assign) BOOL presentsWithTransaction; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(BOOL)lowLatency;
-(unsigned long long)maximumDrawableCount;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(void)setLowLatency:(BOOL)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(BOOL)presentsWithTransaction;
-(CGSize)drawableSize;
-(BOOL)framebufferOnly;
-(id)newDrawable;
-(id)nextDrawable;
-(void)setDrawableSize:(CGSize)arg1 ;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)_display;
-(id<MTLDevice>)device;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(void)setDevice:(id<MTLDevice>)arg1 ;
@end

