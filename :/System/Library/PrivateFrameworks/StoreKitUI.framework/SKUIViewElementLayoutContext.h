/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIArtworkRequestDelegate;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableDictionary, SKUIBadgeTextAttachmentLoader, MPUBorderDrawingCache, SKUIClientContext, NSMapTable, NSHashTable, SKUIItemOfferButton, SKUIViewElementTextLayoutCache, NSMutableSet, UIViewController, UIColor, SKUIResourceLoader, NSString;

@interface SKUIViewElementLayoutContext : NSObject {

	double _activePageWidth;
	NSMutableDictionary* _aggregateValues;
	id<SKUIArtworkRequestDelegate> _artworkRequestDelegate;
	SKUIBadgeTextAttachmentLoader* _badgeImageLoader;
	MPUBorderDrawingCache* _borderDrawingCache;
	SKUIClientContext* _clientContext;
	unsigned long long _containerViewElementType;
	NSMapTable* _editorialLayouts;
	NSHashTable* _expandedEditorialLayouts;
	SKUIItemOfferButton* _itemOfferButton;
	NSMutableDictionary* _itemOfferButtonSizes;
	SKUIViewElementTextLayoutCache* _labelLayoutCache;
	NSMutableSet* _observedArtworkRequestIDs;
	UIViewController* _parentViewController;
	UIColor* _placeholderColor;
	NSMapTable* _placeholderImages;
	NSMapTable* _blurColors;
	SKUIResourceLoader* _resourceLoader;
	UIColor* _tintColor;
	NSString* _backdropGroupName;
	double _displayScale;

}

@property (assign,nonatomic) double activePageWidth;                                                    //@synthesize activePageWidth=_activePageWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIArtworkRequestDelegate> artworkRequestDelegate;              //@synthesize artworkRequestDelegate=_artworkRequestDelegate - In the implementation block
@property (nonatomic,readonly) SKUIBadgeTextAttachmentLoader * badgeImageLoader; 
@property (nonatomic,readonly) MPUBorderDrawingCache * borderDrawingCache; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                                         //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) unsigned long long containerViewElementType;                               //@synthesize containerViewElementType=_containerViewElementType - In the implementation block
@property (nonatomic,retain) SKUIViewElementTextLayoutCache * labelLayoutCache;                         //@synthesize labelLayoutCache=_labelLayoutCache - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;                            //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;                                       //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                                                //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                                //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) double displayScale;                                                       //@synthesize displayScale=_displayScale - In the implementation block
+(double)itemWidthForElement:(id)arg1 withDefaultWidth:(double)arg2 fitWidth:(double)arg3 ;
+(double)_calculateValueFromString:(id)arg1 withDefault:(double)arg2 coefficent:(double)arg3 ;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)dealloc;
-(id)init;
-(UIViewController *)parentViewController;
-(double)displayScale;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)aggregateValueForKey:(id)arg1 ;
-(id)imageResourceCacheKeyForArtwork:(id)arg1 ;
-(id)requestIdentifierForArtwork:(id)arg1 ;
-(SKUIResourceLoader *)resourceLoader;
-(BOOL)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(long long)arg3 ;
-(id)placeholderImageForSize:(CGSize)arg1 ;
-(id)requestIdentifierForViewElement:(id)arg1 ;
-(BOOL)loadImageForImageElement:(id)arg1 reason:(long long)arg2 ;
-(CGSize)sizeForViewElement:(id)arg1 width:(double)arg2 ;
-(id)imageResourceCacheKeyForViewElement:(id)arg1 ;
-(id)requestIdentifierForResourceCacheKey:(id)arg1 ;
-(void)setArtworkRequestDelegate:(id<SKUIArtworkRequestDelegate>)arg1 ;
-(void)setAggregateValue:(id)arg1 forKey:(id)arg2 ;
-(void)setContainerViewElementType:(unsigned long long)arg1 ;
-(void)setLabelLayoutCache:(SKUIViewElementTextLayoutCache *)arg1 ;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 ;
-(double)defaultItemWidthForViewElement:(id)arg1 ;
-(SKUIViewElementTextLayoutCache *)labelLayoutCache;
-(CGSize)sizeForImageElement:(id)arg1 ;
-(double)activePageWidth;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2 ;
-(NSString *)backdropGroupName;
-(BOOL)loadImageForArtwork:(id)arg1 reason:(long long)arg2 ;
-(id)textPropertiesForViewElement:(id)arg1 width:(double)arg2 ;
-(MPUBorderDrawingCache *)borderDrawingCache;
-(void)_artworkRequestDidLoadImageNotification:(id)arg1 ;
-(void)invalidateAllEditorialLayouts;
-(void)setActivePageWidth:(double)arg1 ;
-(long long)maxWidthForElement:(id)arg1 withDefaultWidth:(long long)arg2 ;
-(unsigned long long)containerViewElementType;
-(id)editorialLayoutForLabelElement:(id)arg1 width:(double)arg2 ;
-(id)initWithStorePageSectionContext:(id)arg1 ;
-(BOOL)isEditorialLayoutExpanded:(id)arg1 ;
-(BOOL)loadTemplatedImageForBadgeElement:(id)arg1 reason:(long long)arg2 ;
-(SKUIBadgeTextAttachmentLoader *)badgeImageLoader;
-(id)transientRequestIdentifierForViewElement:(id)arg1 ;
-(id)placeholderImageForImageElement:(id)arg1 ;
-(id)blurColorForCacheKey:(id)arg1 ;
-(void)setBlurColor:(id)arg1 cacheKey:(id)arg2 ;
-(BOOL)loadImageForBadgeElement:(id)arg1 reason:(long long)arg2 ;
-(id)_initSKUIViewElementLayoutContext;
-(void)setDisplayScale:(double)arg1 ;
-(BOOL)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4 ;
-(CGSize)_sizeForImageElement:(id)arg1 applyTransform:(BOOL)arg2 ;
-(CGSize)sizeForBadgeElement:(id)arg1 ;
-(CGSize)sizeForItemOfferButton:(id)arg1 ;
-(void)expandEditorialForLabelElement:(id)arg1 ;
-(id<SKUIArtworkRequestDelegate>)artworkRequestDelegate;
@end

