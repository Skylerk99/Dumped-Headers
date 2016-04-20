/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicEntityHorizontalLockupTableViewCell.h>

@protocol MusicUpNextReorderLayoutDelegate;
@class UIView;

@interface MusicUpNextTableViewCell : MusicEntityHorizontalLockupTableViewCell {

	UIView* _hairlineView;
	id<MusicUpNextReorderLayoutDelegate> _layoutDelegate;

}

@property (assign,nonatomic,__weak) id<MusicUpNextReorderLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(id<MusicUpNextReorderLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<MusicUpNextReorderLayoutDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)horizontalLockupViewDidLayoutSubviews:(id)arg1 ;
@end

