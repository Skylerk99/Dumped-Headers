/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUNavigationItem.h>

@class NSNumber, SUNavigationItem;

@interface SUDelayedNavigationItem : SUNavigationItem {

	id _delayedBackButtonTitle;
	id _delayedLeftBarButtonItems;
	NSNumber* _delayedLeftItemsSupplementBackButton;
	id _delayedTitle;
	id _delayedTitleView;
	id _delayedRightBarButtonItems;
	BOOL _shouldDelayChanges;
	SUNavigationItem* _wrappedNavigationItem;

}

@property (nonatomic,retain) SUNavigationItem * wrappedNavigationItem;              //@synthesize wrappedNavigationItem=_wrappedNavigationItem - In the implementation block
@property (assign,nonatomic) BOOL shouldDelayChanges;                               //@synthesize shouldDelayChanges=_shouldDelayChanges - In the implementation block
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)navigationBar;
-(id)leftBarButtonItems;
-(BOOL)leftItemsSupplementBackButton;
-(id)title;
-(id)backButtonTitle;
-(id)rightBarButtonItems;
-(id)titleView;
-(id)initWithNavigationItem:(id)arg1 ;
-(void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTitleView:(id)arg1 ;
-(id)leftBarButtonItem;
-(id)rightBarButtonItem;
-(void)setBackButtonTitle:(id)arg1 ;
-(void)setLeftItemsSupplementBackButton:(BOOL)arg1 ;
-(void)setTitleView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShouldDelayChanges:(BOOL)arg1 ;
-(void)setWrappedNavigationItem:(SUNavigationItem *)arg1 ;
-(void)commitDelayedChanges;
-(void)_prepareButtonItemForDisplay:(id)arg1 ;
-(BOOL)shouldDelayChanges;
-(void)_scheduleCommit;
-(SUNavigationItem *)wrappedNavigationItem;
@end

