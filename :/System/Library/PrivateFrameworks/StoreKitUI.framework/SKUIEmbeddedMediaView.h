/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol SKUIEmbeddedMediaViewDelegate;
@class NSString, MPMoviePlayerController, UIImageView, UIImage;

@interface SKUIEmbeddedMediaView : UIControl {

	id<SKUIEmbeddedMediaViewDelegate> _delegate;
	long long _mediaType;
	NSString* _mediaURLString;
	MPMoviePlayerController* _moviePlayer;
	UIImageView* _playerDecorationView;
	UIImageView* _thumbnailReflectionView;
	UIImageView* _thumbnailView;
	BOOL _usingInlinePlayback;

}

@property (assign,nonatomic,__weak) id<SKUIEmbeddedMediaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long mediaType;                                            //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * mediaURLString;                                        //@synthesize mediaURLString=_mediaURLString - In the implementation block
@property (nonatomic,readonly) long long playbackState; 
@property (assign,nonatomic) BOOL showsThumbnailReflection; 
@property (assign,nonatomic) long long thumbnailContentMode; 
@property (nonatomic,retain) UIImage * thumbnailImage; 
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(long long)thumbnailContentMode;
-(long long)playbackState;
-(UIImage *)thumbnailImage;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SKUIEmbeddedMediaViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<SKUIEmbeddedMediaViewDelegate>)delegate;
-(NSString *)mediaURLString;
-(void)setThumbnailContentMode:(long long)arg1 ;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(BOOL)showsThumbnailReflection;
-(void)beginPlaybackAnimated:(BOOL)arg1 ;
-(void)setShowsThumbnailReflection:(BOOL)arg1 ;
-(void)setMediaURLString:(NSString *)arg1 ;
-(void)endPlaybackAnimated:(BOOL)arg1 ;
-(void)beginInlinePlaybackWithURL:(id)arg1 ;
-(void)_tearDownMoviePlayer;
-(id)_newMoviePlayerControllerWithURL:(id)arg1 ;
-(id)_thumbnailView;
-(CGSize)_sizeToFitImageSize:(CGSize)arg1 bounds:(CGRect)arg2 ;
-(void)_sendPlaybackStateChanged;
-(void)_didExitFullscreen:(id)arg1 ;
-(void)_didFinishPlayback:(id)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
@end

