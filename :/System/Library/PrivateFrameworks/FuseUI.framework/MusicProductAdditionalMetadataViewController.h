/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicProductDescriptionTableViewCellDelegate.h>
#import <libobjc.A.dylib/MusicProductMetadataTableViewCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MusicProductAdditionalMetadataViewControllerDelegate;
@class UIColor, NSMutableIndexSet, MusicProductDescriptionTableViewCell, UITableView, NSIndexSet, MusicMediaDetailTintInformation, MusicProductDescription, NSString;

@interface MusicProductAdditionalMetadataViewController : UIViewController <MusicProductDescriptionTableViewCellDelegate, MusicProductMetadataTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	UIColor* _customSelectionTintColor;
	UIColor* _defaultSelectionTintColor;
	NSMutableIndexSet* _metadataItems;
	MusicProductDescriptionTableViewCell* _productDescriptionTableViewCell;
	UITableView* _tableView;
	SCD_Struct_Mu18 _delegateRespondsToSelector;
	BOOL _publicSwitchOn;
	BOOL _visibleSwitchOn;
	NSIndexSet* _allowedMetadataItems;
	id<MusicProductAdditionalMetadataViewControllerDelegate> _delegate;
	MusicMediaDetailTintInformation* _detailTintInformation;
	MusicProductDescription* _productDescription;
	long long _productDescriptionMaximumLengthForTextInput;
	NSString* _publicSwitchDescription;
	NSString* _visibleSwitchDescription;

}

@property (nonatomic,copy) NSIndexSet * allowedMetadataItems;                                                       //@synthesize allowedMetadataItems=_allowedMetadataItems - In the implementation block
@property (assign,nonatomic,__weak) id<MusicProductAdditionalMetadataViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double effectiveContentHeight; 
@property (nonatomic,copy) MusicMediaDetailTintInformation * detailTintInformation;                                 //@synthesize detailTintInformation=_detailTintInformation - In the implementation block
@property (nonatomic,copy) MusicProductDescription * productDescription;                                            //@synthesize productDescription=_productDescription - In the implementation block
@property (assign,nonatomic) long long productDescriptionMaximumLengthForTextInput;                                 //@synthesize productDescriptionMaximumLengthForTextInput=_productDescriptionMaximumLengthForTextInput - In the implementation block
@property (nonatomic,copy) NSString * publicSwitchDescription;                                                      //@synthesize publicSwitchDescription=_publicSwitchDescription - In the implementation block
@property (assign,getter=isPublicSwitchOn,nonatomic) BOOL publicSwitchOn;                                           //@synthesize publicSwitchOn=_publicSwitchOn - In the implementation block
@property (nonatomic,copy) NSString * visibleSwitchDescription;                                                     //@synthesize visibleSwitchDescription=_visibleSwitchDescription - In the implementation block
@property (assign,getter=isVisibleSwitchOn,nonatomic) BOOL visibleSwitchOn;                                         //@synthesize visibleSwitchOn=_visibleSwitchOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MusicProductAdditionalMetadataViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<MusicProductAdditionalMetadataViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(MusicMediaDetailTintInformation *)detailTintInformation;
-(void)setAllowedMetadataItems:(NSIndexSet *)arg1 ;
-(void)setProductDescription:(MusicProductDescription *)arg1 ;
-(MusicProductDescription *)productDescription;
-(void)_willBeginContentHeightAnimation;
-(void)_didFinishContentHeightAnimation;
-(double)effectiveContentHeight;
-(void)switchDidChangeStateInProductMetadataTableViewCell:(id)arg1 ;
-(void)productDescriptionDidChangeForProductDescriptionTableViewCell:(id)arg1 ;
-(long long)productDescriptionMaximumLengthForTextInput;
-(void)setProductDescriptionMaximumLengthForTextInput:(long long)arg1 ;
-(void)setPublicSwitchDescription:(NSString *)arg1 ;
-(void)setVisibleSwitchDescription:(NSString *)arg1 ;
-(BOOL)isPublicSwitchOn;
-(BOOL)isVisibleSwitchOn;
-(void)setPublicSwitchOn:(BOOL)arg1 ;
-(void)setVisibleSwitchOn:(BOOL)arg1 ;
-(void)_handlePreferredContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_updateVisibleMetadataItems;
-(BOOL)_shouldDeferContentHeightAnimationUpdates;
-(id)_productDescriptionTableViewCell;
-(long long)_rowIndexForMetadataItem:(long long)arg1 ;
-(void)_reloadTableViewRowHeights;
-(long long)_metadataItemForRowAtIndexPath:(id)arg1 ;
-(void)_didSelectAddSongsButton;
-(id)_publicSwitchCell;
-(NSIndexSet *)allowedMetadataItems;
-(NSString *)publicSwitchDescription;
-(NSString *)visibleSwitchDescription;
@end

