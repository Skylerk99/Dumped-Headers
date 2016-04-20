/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBFProceduralWallpaper.h>

@protocol SBFProceduralWallpaper <NSObject>
@property (assign,nonatomic) id<SBFProceduralWallpaperDelegate> delegate; 
@optional
+(id)presetWallpaperOptions;
+(id)thumbnailImageForOptions:(id)arg1;
+(BOOL)colorChangesSignificantly;
+(id)thumbnailImageName;
+(id)representativeThumbnailImageName;
-(void)setDelegate:(id)arg1;
-(id<SBFProceduralWallpaperDelegate>)delegate;
-(void)setWallpaperOptions:(id)arg1;
-(void)stopGeneratingBlurs;
-(void)stopComputingAverageColor;
-(void)setWallpaperVariant:(long long)arg1;
-(id)averageColorForRect:(CGRect)arg1;
-(id)averageLifetimeColor;
-(void)startGeneratingBlursForRect:(CGRect)arg1;
-(IOSurfaceRef)copyBlurForRect:(inout CGRect*)arg1;
-(void)startComputingAverageColorForRect:(CGRect)arg1;

@required
+(id)identifier;
-(id)view;
-(void)setAnimating:(BOOL)arg1;

@end


@class NSString;

@interface SBFProceduralWallpaper : UIView <SBFProceduralWallpaper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBFProceduralWallpaperDelegate> delegate; 
+(id)identifier;
-(id)view;
-(void)setAnimating:(BOOL)arg1 ;
@end

