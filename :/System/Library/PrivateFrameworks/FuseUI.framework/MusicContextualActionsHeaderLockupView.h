/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityHorizontalLockupView.h>

@class UIButton, UIImageView, MusicContextualActionsHeaderBlendingHighlightView;

@interface MusicContextualActionsHeaderLockupView : MusicEntityHorizontalLockupView {

	UIButton* _addToLibraryButton;
	BOOL _highlighted;
	UIImageView* _disclosureImageView;
	MusicContextualActionsHeaderBlendingHighlightView* _highlightView;
	UIButton* _likeButton;
	UIButton* _radioButton;
	UIButton* _shareButton;
	BOOL _supportsRadio;
	BOOL _supportsSharing;
	BOOL _supportsSelection;
	unsigned long long _addToLibraryState;
	unsigned long long _likeState;

}

@property (assign,nonatomic,__weak) id<MusicContextualActionsHeaderLockupViewDelegate> delegate; 
@property (assign,nonatomic) unsigned long long addToLibraryState;                                            //@synthesize addToLibraryState=_addToLibraryState - In the implementation block
@property (assign,nonatomic) unsigned long long likeState;                                                    //@synthesize likeState=_likeState - In the implementation block
@property (assign,nonatomic) BOOL supportsRadio;                                                              //@synthesize supportsRadio=_supportsRadio - In the implementation block
@property (assign,nonatomic) BOOL supportsSharing;                                                            //@synthesize supportsSharing=_supportsSharing - In the implementation block
@property (assign,nonatomic) BOOL supportsSelection;                                                          //@synthesize supportsSelection=_supportsSelection - In the implementation block
+(double)defaultTextDescriptorHeightAdditionsForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)layoutMargins;
-(id)_touchForEvent:(id)arg1 ;
-(void)_configureArtworkCatalog:(id)arg1 ;
-(void)setAddToLibraryState:(unsigned long long)arg1 ;
-(void)setSupportsRadio:(BOOL)arg1 ;
-(void)setSupportsSelection:(BOOL)arg1 ;
-(void)setSupportsSharing:(BOOL)arg1 ;
-(void)setLikeState:(unsigned long long)arg1 ;
-(unsigned long long)likeState;
-(void)_addToLibraryButtonAction:(id)arg1 ;
-(void)_likeButtonAction:(id)arg1 ;
-(void)_radioButtonAction:(id)arg1 ;
-(void)_setHighlighted:(BOOL)arg1 ;
-(unsigned long long)addToLibraryState;
-(BOOL)supportsRadio;
-(BOOL)supportsSharing;
-(BOOL)supportsSelection;
-(void)_shareButtonAction:(id)arg1 ;
@end

