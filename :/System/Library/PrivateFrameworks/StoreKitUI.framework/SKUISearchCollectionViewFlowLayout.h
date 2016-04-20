/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemGridCollectionViewLayout.h>

@class UICollectionView;

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout {

	UICollectionView* _collectionView;
	long long _numberOfRows;
	long long _numberOfColumns;
	CGSize _headerSize;
	double _horizontalPadding;
	double _verticalPadding;
	BOOL _backfills;

}

@property (assign,nonatomic) double horizontalPadding;              //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) double verticalPadding;                //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (assign,nonatomic) BOOL backfills;                        //@synthesize backfills=_backfills - In the implementation block
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(double)verticalPadding;
-(void)setVerticalPadding:(double)arg1 ;
-(BOOL)backfills;
-(void)setBackfills:(BOOL)arg1 ;
@end

