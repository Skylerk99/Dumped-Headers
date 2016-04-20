/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIControl.h>

@protocol PLPhotoScrubberDataSource, PLPhotoScrubberSpeedDelegate;
@class UIView, NSMutableArray, UIImageView, NSTimer;

@interface PLPhotoScrubber : UIControl {

	id<PLPhotoScrubberDataSource> _dataSource;
	unsigned long long _displayedImageIndex;
	long long _prospectiveImageIndex;
	double _timeOfLastTouch;
	double _lastUpdate;
	UIView* _thumbnailTrackView;
	CGRect _thumbnailBounds;
	double _imagesPerViewRatio;
	NSMutableArray* _thumbnailViews;
	UIImageView* _loupeView;
	long long _loupeIndex;
	unsigned long long _imageCount;
	BOOL _scrubbing;
	BOOL _deferImageLoading;
	BOOL _loadImagesSynchronously;
	id<PLPhotoScrubberSpeedDelegate> _speedDelegate;
	double __scrubbingSpeed;
	long long __lastSpeedRegime;
	double __lastTime;
	NSTimer* __timeoutTimer;

}

@property (assign,nonatomic) id<PLPhotoScrubberDataSource> dataSource; 
@property (assign,nonatomic) id<PLPhotoScrubberSpeedDelegate> speedDelegate;                      //@synthesize speedDelegate=_speedDelegate - In the implementation block
@property (assign,setter=_setScrubbingSpeed:,nonatomic) double _scrubbingSpeed;                   //@synthesize _scrubbingSpeed=__scrubbingSpeed - In the implementation block
@property (assign,setter=_setLastSpeedRegime:,nonatomic) long long _lastSpeedRegime;              //@synthesize _lastSpeedRegime=__lastSpeedRegime - In the implementation block
@property (assign,setter=_setLastTime:,nonatomic) double _lastTime;                               //@synthesize _lastTime=__lastTime - In the implementation block
@property (setter=_setTimeoutTimer:,nonatomic,retain) NSTimer * _timeoutTimer;                    //@synthesize _timeoutTimer=__timeoutTimer - In the implementation block
-(double)_lastTime;
-(BOOL)isScrubbing;
-(void)_setLastTime:(double)arg1 ;
-(NSTimer *)_timeoutTimer;
-(void)_handleTimeoutTimer:(id)arg1 ;
-(void)_setTimeoutTimer:(id)arg1 ;
-(void)setImage:(id)arg1 atIndex:(long long)arg2 ;
-(void)ppt_scrubToAbsoluteIndex:(long long)arg1 immediately:(BOOL)arg2 ;
-(void)ppt_setIsScrubbing:(BOOL)arg1 ;
-(void)setDataSource:(id<PLPhotoScrubberDataSource>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)willRotate;
-(void)didRotate;
-(void)setDataSource:(id)arg1 reloadData:(BOOL)arg2 ;
-(void)setSpeedDelegate:(id<PLPhotoScrubberSpeedDelegate>)arg1 ;
-(void)setDeferImageLoading:(BOOL)arg1 ;
-(void)reloadDataWithNewDisplayedIndex:(unsigned long long)arg1 ;
-(void)reloadImageAtIndex:(long long)arg1 ;
-(long long)displayedImageIndex;
-(void)setLoupeImage:(id)arg1 ;
-(BOOL)isFastScrubbing;
-(void)setDisplayedImageIndex:(long long)arg1 ;
-(void)_setScrubbingSpeed:(double)arg1 ;
-(void)_setLastSpeedRegime:(long long)arg1 ;
-(void)_updateLoupe:(BOOL)arg1 force:(BOOL)arg2 ;
-(unsigned long long)_imageIndexFromLocation:(CGPoint)arg1 ;
-(void)_setDisplayedImageIndex:(long long)arg1 immediately:(BOOL)arg2 ;
-(long long)_lastSpeedRegime;
-(void)_setIsScrubbing:(BOOL)arg1 ;
-(unsigned long long)_thumbnailIndexFromLocation:(CGPoint)arg1 ;
-(void)_setDisplayedImageIndex:(id)arg1 ;
-(void)_updateLoupeWithTouch:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(CGPoint)_centerForImageAtIndex:(long long)arg1 ;
-(double)_scrubbingSpeed;
-(void)_setSpeedRegime:(long long)arg1 ;
-(void)_rescheduleTimer;
-(void)_performSpeedUpdate;
-(id<PLPhotoScrubberSpeedDelegate>)speedDelegate;
@end

