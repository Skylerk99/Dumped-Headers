/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol ABPersonTableHeaderViewDelegate, ABStyleProvider;
@class ABPersonImageView, UIImageView, ABPersonNameDisplayView, ABNamePropertyGroup, ABMultiCellContentView, ABMultiCell, UITableView, UIView, ABUIPerson, NSString, UIFont;

@interface ABPersonTableHeaderView : UIView <UITableViewDelegate, UITableViewDataSource> {

	BOOL _editing;
	BOOL _representsLinkedPeople;
	ABPersonImageView* _imageView;
	UIImageView* _imageShadowView;
	ABPersonNameDisplayView* _displayView;
	BOOL _showsMultiplePhotoBackdropView;
	ABNamePropertyGroup* _namePropertyGroup;
	ABMultiCellContentView* _editingView;
	ABMultiCell* _editingViewCell;
	UITableView* _editingViewContainer;
	UIView* _extraHeaderView;
	BOOL _extraHeaderViewAlignsToImage;
	id<ABPersonTableHeaderViewDelegate> _delegate;
	id<ABStyleProvider> _styleProvider;

}

@property (nonatomic,retain) ABUIPerson * personForImageView; 
@property (assign,nonatomic) id<ABPersonTableHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                         //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,readonly) ABPersonImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) ABPersonNameDisplayView * displayView;                   //@synthesize displayView=_displayView - In the implementation block
@property (nonatomic,readonly) ABMultiCellContentView * editingView;                    //@synthesize editingView=_editingView - In the implementation block
@property (nonatomic,retain) ABNamePropertyGroup * namePropertyGroup;                   //@synthesize namePropertyGroup=_namePropertyGroup - In the implementation block
@property (assign,nonatomic) BOOL representsLinkedPeople;                               //@synthesize representsLinkedPeople=_representsLinkedPeople - In the implementation block
@property (nonatomic,copy) NSString * alternateName; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) UIFont * messageFont; 
@property (nonatomic,copy) NSString * messageDetail; 
@property (nonatomic,retain) UIFont * messageDetailFont; 
@property (nonatomic,retain) UIView * customMessageView; 
@property (nonatomic,retain) UIView * extraHeaderView;                                  //@synthesize extraHeaderView=_extraHeaderView - In the implementation block
@property (assign,nonatomic) BOOL extraHeaderViewAlignsToImage;                         //@synthesize extraHeaderViewAlignsToImage=_extraHeaderViewAlignsToImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)entryFieldForRow:(unsigned long long)arg1 ;
-(void)reloadImageData;
-(void)setPersonForImageView:(ABUIPerson *)arg1 ;
-(void)setNamePropertyGroup:(ABNamePropertyGroup *)arg1 ;
-(void)setMessageFont:(UIFont *)arg1 ;
-(void)setMessageDetailFont:(UIFont *)arg1 ;
-(void)setMessageDetail:(NSString *)arg1 ;
-(void)setCustomMessageView:(UIView *)arg1 ;
-(void)reloadNameDataAnimated:(BOOL)arg1 ;
-(ABNamePropertyGroup *)namePropertyGroup;
-(NSString *)messageDetail;
-(UIFont *)messageDetailFont;
-(UIView *)customMessageView;
-(CGRect)_imageViewFrameWhenEditing:(BOOL)arg1 ;
-(void)imageViewSelected:(id)arg1 ;
-(CGPoint)_displayViewOrigin;
-(double)_displayViewWidthForWidth:(double)arg1 ;
-(CGPoint)_editingViewOrigin;
-(double)_editingViewWidthForWidth:(double)arg1 ;
-(CGRect)_editingViewContainerFrameForWidth:(double)arg1 ;
-(CGRect)_displayViewFrameForWidth:(double)arg1 ;
-(double)extraHeaderViewHorizontalPaddingWhenEditing:(BOOL)arg1 ;
-(BOOL)representsLinkedPeople;
-(void)_recreateEditingViewContainer;
-(id)_displayView;
-(CGPoint)_extraHeaderViewOriginForWidth:(double)arg1 whenEditing:(BOOL)arg2 ;
-(double)_extraHeaderViewAvailableWidthForWidth:(double)arg1 whenEditing:(BOOL)arg2 ;
-(void)_updateShowsMultiplePhotoBackdrop;
-(void)_layoutExtraHeaderView;
-(void)reloadNameDataButNotModelAnimated:(BOOL)arg1 ;
-(id)_imageShadowView;
-(ABUIPerson *)personForImageView;
-(NSString *)alternateName;
-(void)setExtraHeaderView:(UIView *)arg1 ;
-(void)setRepresentsLinkedPeople:(BOOL)arg1 ;
-(void)deselectAnimated:(BOOL)arg1 ;
-(CGPoint)extraHeaderViewOrigin;
-(void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2 ;
-(void)_updateRecordIfNeeded;
-(ABPersonNameDisplayView *)displayView;
-(ABMultiCellContentView *)editingView;
-(UIView *)extraHeaderView;
-(BOOL)extraHeaderViewAlignsToImage;
-(void)setExtraHeaderViewAlignsToImage:(BOOL)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setAlternateName:(NSString *)arg1 ;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(UIFont *)messageFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<ABPersonTableHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ABPersonTableHeaderViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)_isSpecialInternalHeaderView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)marginForTableView:(id)arg1 ;
-(NSString *)message;
-(ABPersonImageView *)imageView;
-(BOOL)canResignFirstResponder;
-(void)setMessage:(NSString *)arg1 ;
-(void)setAllowsEditing:(BOOL)arg1 ;
@end

