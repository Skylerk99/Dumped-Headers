/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIScrollView, UIView;

@interface MusicContainerScrollView : UIScrollView {

	BOOL _contentScrollViewPreviousAutomaticContentOffsetAdjustmentEnabled;
	BOOL _contentScrollViewPreviousScrollEnabled;
	BOOL _isAdjustingContentScrollViewScrollEnabled;
	BOOL _isChangingContentScrollViewContentOffset;
	CGPoint _lastContentScrollViewPositionAdditions;
	SCD_Struct_Mu2 _delegateRespondsToSelector;
	UIScrollView* _contentScrollView;
	UIView* _contentView;

}

@property (nonatomic,retain) UIScrollView * contentScrollView;                                  //@synthesize contentScrollView=_contentScrollView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<MusicContainerScrollViewDelegate> delegate; 
-(void)setDelegate:(id<MusicContainerScrollViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutMarginsDidChange;
-(void)setContentSize:(CGSize)arg1 ;
-(void)_updateContentSize;
-(UIScrollView *)contentScrollView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_unregisterForNotificationsForContentScrollView:(id)arg1 ;
-(void)_getCurrentContentViewFrame:(CGRect*)arg1 contentScrollViewContentOffset:(CGPoint*)arg2 ;
-(void)_registerForNotificationsForContentScrollView:(id)arg1 ;
-(void)setContentScrollView:(UIScrollView *)arg1 ;
@end

