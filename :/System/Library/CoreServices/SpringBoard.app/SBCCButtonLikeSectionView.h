/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/SBUIControlCenterButtonDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@class UIVisualEffect, UIVisualEffectView, UIView, SBUIControlCenterButton, SBUIControlCenterLabel, UIFont, NSString;

@interface SBCCButtonLikeSectionView : UIControl <SBUIControlCenterButtonDelegate, _UISettingsKeyObserver> {

	UIVisualEffect* _normalStateEffect;
	UIVisualEffect* _highlightedStateEffect;
	UIVisualEffectView* _vibrantDarkenLayer;
	UIView* _tintingDarkenLayer;
	SBUIControlCenterButton* _button;
	SBUIControlCenterLabel* _label;
	BOOL _showingMenu;
	unsigned long long _roundCorners;

}

@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) unsigned long long roundCorners;                    //@synthesize roundCorners=_roundCorners - In the implementation block
@property (assign,getter=isShowingMenu,nonatomic) BOOL showingMenu;              //@synthesize showingMenu=_showingMenu - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)roundCorners;
-(BOOL)_shouldUseButtonAppearance;
-(id)_backgroundImageWithRoundCorners:(unsigned long long)arg1 ;
-(void)prepareBackgroundLayerForAnimation;
-(void)setRoundCorners:(unsigned long long)arg1 ;
-(void)_updateEffects;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(BOOL)isHighlighted;
-(UIFont *)font;
-(void)setSelected:(BOOL)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setShowingMenu:(BOOL)arg1 ;
-(BOOL)isShowingMenu;
-(void)button:(id)arg1 didChangeState:(long long)arg2 ;
-(void)_updateForReduceTransparencyChange;
-(void)_updateBackgroundForStateChange;
@end

