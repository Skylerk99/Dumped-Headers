/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/MusicEntityVerticalLockupViewDelegate.h>
#import <libobjc.A.dylib/MusicEntityHorizontalLockupViewDelegate.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>
#import <libobjc.A.dylib/MusicEntityViewPlaybackStatusObserving.h>

@class UITraitCollection, UIImageView, MusicEntityVerticalLockupView, UIView, UIColor, MusicEntityViewContentDescriptor, NSString;

@interface MusicEntityLockupContainerCollectionViewCell : UICollectionViewCell <MusicEntityVerticalLockupViewDelegate, MusicEntityHorizontalLockupViewDelegate, MusicEntityContentDescriptorViewConfiguring, MusicEntityViewPlaybackStatusObserving> {

	UITraitCollection* _cachedTraitCollection;
	UIImageView* _highlightBackgroundView;
	BOOL _highlightBackgroundViewVisible;
	unsigned long long _highlightBackgroundVisibilityTransactionCount;
	MusicEntityVerticalLockupView* _lockupView;
	UIView* _hairlineView;
	BOOL _showsHairline;
	UIColor* _hairlineColor;

}

@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,copy) UIColor * hairlineColor;                                             //@synthesize hairlineColor=_hairlineColor - In the implementation block
@property (assign,nonatomic) BOOL showsHairline;                                                //@synthesize showsHairline=_showsHairline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)traitCollection;
-(void)dealloc;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)verticalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 ;
-(void)setEntityDisabled:(BOOL)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(void)_reloadHighlightImageViewAnimated:(BOOL)arg1 ;
-(id)_parentCollectionView;
-(void)_layoutHairlineView;
-(void)setPlaybackStatus:(id)arg1 ;
-(void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1 ;
-(void)horizontalLockupViewDidSelectAddButton:(id)arg1 events:(unsigned long long)arg2 ;
-(void)horizontalLockupViewDidLayoutSubviews:(id)arg1 ;
-(void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 ;
-(void)setHairlineColor:(UIColor *)arg1 ;
-(void)setShowsHairline:(BOOL)arg1 ;
-(UIColor *)hairlineColor;
-(BOOL)showsHairline;
-(void)setEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(id<MusicEntityValueProviding>)entityValueProvider;
@end

