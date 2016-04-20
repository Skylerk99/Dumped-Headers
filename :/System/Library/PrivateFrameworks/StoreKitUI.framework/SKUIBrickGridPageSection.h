/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>

@class NSMapTable, SKUIMissingItemLoader, UIImage, SKUIGridComponent, NSString;

@interface SKUIBrickGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {

	NSMapTable* _artworkRequests;
	double _baseHeight;
	double _columnWidth;
	NSMapTable* _editorialLayouts;
	SKUIMissingItemLoader* _missingItemLoader;
	long long _numberOfColumns;
	double _paddingHorizontal;
	double _paddingTop;
	UIImage* _placeholderImage;

}

@property (nonatomic,readonly) SKUIGridComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(UIEdgeInsets)_contentInsetsForColumnIndex:(long long)arg1 rowWidth:(double)arg2 ;
-(id)_editorialLayoutForBrick:(id)arg1 ;
-(void)_loadArtworkForBrick:(id)arg1 artworkLoader:(id)arg2 reason:(long long)arg3 ;
-(void)_enumerateVisibleBricksUsingBlock:(/*^block*/id)arg1 ;
@end

