/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLSlideshowPluginDelegate;
#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSArray, PLManagedAsset;

@interface PLSlideshowPlugin : NSObject {

	id<PLSlideshowPluginDelegate> _delegate;
	NSObject* _album;
	NSArray* _albumAssets;
	double _secondsPerSlide;
	BOOL _shuffleAlbum;
	BOOL _shouldRepeat;

}

@property (assign,nonatomic) id<PLSlideshowPluginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> album; 
@property (nonatomic,retain) NSArray * albumAssets;                               //@synthesize albumAssets=_albumAssets - In the implementation block
@property (nonatomic,readonly) NSArray * displayedPhotos; 
@property (nonatomic,readonly) PLManagedAsset * currentPhoto; 
@property (assign,nonatomic) double secondsPerSlide;                              //@synthesize secondsPerSlide=_secondsPerSlide - In the implementation block
@property (assign,nonatomic) BOOL shuffleAlbum;                                   //@synthesize shuffleAlbum=_shuffleAlbum - In the implementation block
@property (assign,nonatomic) BOOL shouldRepeat;                                   //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
-(NSObject*<PLAlbumProtocol>)album;
-(void)setAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)setShouldRepeat:(BOOL)arg1 ;
-(BOOL)shouldRepeat;
-(void)setDelegate:(id<PLSlideshowPluginDelegate>)arg1 ;
-(void)dealloc;
-(id<PLSlideshowPluginDelegate>)delegate;
-(void)slideshowViewDidDisappear;
-(void)stopSlideshow;
-(id)newSlideshowView;
-(void)slideshowViewWillAppear;
-(void)slideshowViewDidAppear;
-(void)pauseSlideshow;
-(void)setAlbumAssets:(NSArray *)arg1 ;
-(PLManagedAsset *)currentPhoto;
-(NSArray *)displayedPhotos;
-(void)resumeSlideshow;
-(NSArray *)albumAssets;
-(double)secondsPerSlide;
-(void)setSecondsPerSlide:(double)arg1 ;
-(BOOL)shuffleAlbum;
-(void)setShuffleAlbum:(BOOL)arg1 ;
@end

