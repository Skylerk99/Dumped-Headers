/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFWallpaperDefaults : NSObject
+(id)defaults;
-(id)description;
-(void)setHasVideo:(BOOL)arg1 ;
-(BOOL)hasVideo;
-(double)stillTimeInVideo;
-(void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2 ;
-(BOOL)supportsCroppingForVariant:(long long)arg1 ;
-(CGRect)cropRectForVariant:(long long)arg1 ;
-(double)parallaxFactorForVariant:(long long)arg1 ;
-(double)zoomScaleForVariant:(long long)arg1 ;
-(BOOL)isPortraitForVariant:(long long)arg1 ;
-(void)setCropRect:(CGRect)arg1 forLocations:(long long)arg2 ;
-(void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2 ;
-(BOOL)magnifyEnabledForVariant:(long long)arg1 ;
-(void)setMagnifyEnabled:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setZoomScale:(double)arg1 forLocations:(long long)arg2 ;
-(void)resetParallaxFactorDefaults;
-(void)resetZoomScaleDefaults;
-(void)resetCroppingDefaults;
-(void)resetMagnifyDefaults;
-(void)setSupportsCropping:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setPortrait:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setName:(id)arg1 forLocations:(long long)arg2 ;
-(void)setStillTimeInVideo:(double)arg1 ;
-(void)resetDefaults;
-(void)resetPortraitDefaults;
-(void)resetHasVideoDefaults;
-(void)resetStillTimeInVideoDefaults;
-(void)resetNameDefaults;
-(id)nameForVariant:(long long)arg1 ;
@end

