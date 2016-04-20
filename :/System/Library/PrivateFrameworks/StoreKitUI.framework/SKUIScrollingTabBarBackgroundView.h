/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class _UIBackdropView, UIView, NSString;

@interface SKUIScrollingTabBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _bottomHairlineView;
	UIView* _topHairlineView;
	BOOL _showsBackdrop;
	BOOL _showsBottomHairline;
	BOOL _showsTopHairline;
	BOOL _usesOpaqueColorForTopHairline;
	NSString* _backdropBarGroupName;

}

@property (nonatomic,copy) NSString * backdropBarGroupName;                   //@synthesize backdropBarGroupName=_backdropBarGroupName - In the implementation block
@property (assign,nonatomic) BOOL showsBackdrop;                              //@synthesize showsBackdrop=_showsBackdrop - In the implementation block
@property (assign,nonatomic) BOOL showsBottomHairline;                        //@synthesize showsBottomHairline=_showsBottomHairline - In the implementation block
@property (assign,nonatomic) BOOL showsTopHairline;                           //@synthesize showsTopHairline=_showsTopHairline - In the implementation block
@property (assign,nonatomic) BOOL usesOpaqueColorForTopHairline;              //@synthesize usesOpaqueColorForTopHairline=_usesOpaqueColorForTopHairline - In the implementation block
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBackdropBarGroupName:(NSString *)arg1 ;
-(void)setShowsBackdrop:(BOOL)arg1 ;
-(void)setShowsTopHairline:(BOOL)arg1 ;
-(void)setUsesOpaqueColorForTopHairline:(BOOL)arg1 ;
-(void)setShowsBottomHairline:(BOOL)arg1 ;
-(void)_updateTopHairlineColor;
-(NSString *)backdropBarGroupName;
-(BOOL)showsBackdrop;
-(BOOL)showsBottomHairline;
-(BOOL)showsTopHairline;
-(BOOL)usesOpaqueColorForTopHairline;
@end

