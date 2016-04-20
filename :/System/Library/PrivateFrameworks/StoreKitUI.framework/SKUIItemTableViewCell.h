/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUITableViewCell.h>
#import <libobjc.A.dylib/SKUICellLayoutParentView.h>

@class SKUIItemCellLayout, NSString;

@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView> {

	BOOL _layoutNeedsLayout;

}

@property (nonatomic,readonly) SKUIItemCellLayout * layout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(SKUIItemCellLayout *)layout;
-(void)setCellLayoutNeedsLayout;
-(void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3 ;
-(void)configureForItem:(id)arg1 rowIndex:(long long)arg2 ;
@end

