/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicMediaProductSplitMainViewController.h>
#import <libobjc.A.dylib/MusicMediaPickerDelegate.h>

@class NSString, MusicProductDescription, NSNumber;

@interface MusicMediaPlaylistSplitMainViewController : MusicMediaProductSplitMainViewController <MusicMediaPickerDelegate> {

	NSString* _curatorStoreID;
	MusicProductDescription* _editedPlaylistDescription;
	NSNumber* _editedPlaylistPublicState;
	NSNumber* _editedPlaylistVisibleState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEditedContentArtworkImage:(id)arg1 ;
-(void)setEditedContentTitle:(id)arg1 ;
-(void)_configureProductAdditionalMetadataViewController:(id)arg1 ;
-(id)_loadProductTracklistTableViewConfigurationWithTracklistEntityProvider:(id)arg1 ;
-(void)mediaPickerNavigationController:(id)arg1 didFinishWithSelectedEntities:(id)arg2 ;
-(id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(long long)arg4 forContentCreation:(BOOL)arg5 ;
-(void)addEntitiesToSelection:(id)arg1 ;
-(id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(long long)arg4 forContentCreation:(BOOL)arg5 curatorStoreID:(id)arg6 ;
-(void)_updateEditableComponents;
-(void)_commitEditingWithTracklistEntityProviderChangeRecords:(id)arg1 ;
-(BOOL)_isCuratorPlaylist;
-(void)_setEditedValue:(id)arg1 forProperty:(id)arg2 onPlaylist:(id)arg3 withSuccessfullyEditedPropertiesAccumulatorDictionary:(id)arg4 ;
-(BOOL)_applyInsertChangeRecords:(id)arg1 toPlaylist:(id)arg2 ;
-(BOOL)_applyMoveChangeRecord:(id)arg1 toPlaylist:(id)arg2 ;
-(BOOL)_applyDeleteChangeRecord:(id)arg1 toPlaylist:(id)arg2 ;
-(void)_resetAdditionalMetadataViewController:(id)arg1 ;
-(void)productAdditionalMetadataViewControllerDidSelectAddSongsButton:(id)arg1 ;
-(void)productAdditionalMetadataViewControllerDidUpdateProductDescription:(id)arg1 ;
-(void)productAdditionalMetadataViewControllerDidUpdatePublicSwitchState:(id)arg1 ;
-(void)productAdditionalMetadataViewControllerDidUpdateVisibleSwitchState:(id)arg1 ;
-(BOOL)productAdditionalMetadataViewControllerShouldDeferContentHeightAnimationUpdates:(id)arg1 ;
@end

