/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MPUExtrasZoomingImageTransitionParticipant.h>

@class UIImage, UIImageView, NSString;

@interface MPUExtrasZoomableImageView : UIScrollView <UIScrollViewDelegate, MPUExtrasZoomingImageTransitionParticipant> {

	UIImage* _image;
	double _scaleToRestoreAfterResize;
	UIImageView* _zoomView;
	CGSize _imageSize;
	CGPoint _pointToCenterAfterResize;

}

@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                              //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) CGPoint pointToCenterAfterResize;              //@synthesize pointToCenterAfterResize=_pointToCenterAfterResize - In the implementation block
@property (assign,nonatomic) double scaleToRestoreAfterResize;              //@synthesize scaleToRestoreAfterResize=_scaleToRestoreAfterResize - In the implementation block
@property (nonatomic,retain) UIImageView * zoomView;                        //@synthesize zoomView=_zoomView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(UIImage *)image;
-(CGSize)imageSize;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(void)_recoverFromResizing;
-(UIImageView *)zoomView;
-(void)setZoomView:(UIImageView *)arg1 ;
-(void)_updateMinimumAndMaximumZoomScalesForCurrentBounds;
-(void)setPointToCenterAfterResize:(CGPoint)arg1 ;
-(void)setScaleToRestoreAfterResize:(double)arg1 ;
-(double)scaleToRestoreAfterResize;
-(CGPoint)pointToCenterAfterResize;
-(CGPoint)_maximumContentOffset;
-(CGPoint)_minimumContentOffset;
-(void)zoomToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_prepareToResize;
@end

