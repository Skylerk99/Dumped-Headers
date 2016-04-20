/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UIImage, PLWallpaperImageViewController;

@interface WallpaperController : PSListController {

	BOOL __wallpaperThumbnailsAreValid;
	UIImage* __homeScreenImage;
	UIImage* __lockScreenImage;
	PLWallpaperImageViewController* _wallpaperImageViewController;

}

@property (setter=_setHomeScreenImage:,nonatomic,retain) UIImage * _homeScreenImage;                                 //@synthesize _homeScreenImage=__homeScreenImage - In the implementation block
@property (setter=_setLockScreenImage:,nonatomic,retain) UIImage * _lockScreenImage;                                 //@synthesize _lockScreenImage=__lockScreenImage - In the implementation block
@property (assign,setter=_setWallpaperThumbnailsAreValid:,nonatomic) BOOL _wallpaperThumbnailsAreValid;              //@synthesize _wallpaperThumbnailsAreValid=__wallpaperThumbnailsAreValid - In the implementation block
@property (nonatomic,retain) PLWallpaperImageViewController * wallpaperImageViewController;                          //@synthesize wallpaperImageViewController=_wallpaperImageViewController - In the implementation block
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_wallpaperDidChange:(id)arg1 ;
-(void)_setWallpaperThumbnailsAreValid:(BOOL)arg1 ;
-(void)_updateImagesSynchronously:(BOOL)arg1 ;
-(void)_updatePreviewCellWithImages;
-(BOOL)_wallpaperThumbnailsAreValid;
-(void)_setHomeScreenImage:(id)arg1 ;
-(void)_setLockScreenImage:(id)arg1 ;
-(UIImage *)_homeScreenImage;
-(UIImage *)_lockScreenImage;
-(void)_thumbnailTapped:(id)arg1 ;
-(void)setWallpaperImageViewController:(PLWallpaperImageViewController *)arg1 ;
-(void)_updateButtonTargets;
-(void)_pushAppropriateController;
-(void)_pushFactoryStillsController;
-(void)_pushAlbumListTableViewController;
-(double)_requiredHeight;
-(PLWallpaperImageViewController *)wallpaperImageViewController;
-(void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2 ;
-(void)editImageViewControllerDidCancel:(id)arg1 ;
@end

