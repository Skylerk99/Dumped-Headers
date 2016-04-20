/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol SiriUIReviewsViewControllerDelegate;
@class SALocalSearchReviewList, NSMutableArray, UIView, NSString, UICollectionView;

@interface SiriUIReviewsViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	SALocalSearchReviewList* _reviewList;
	NSMutableArray* _cellSizeForRowCache;
	struct {
		unsigned didLoadCollectionView : 1;
		unsigned viewForRatingForReview : 1;
		unsigned offsetForRatingView : 1;
	}  _delegateFlags;
	BOOL _ignoreBackgroundInsets;
	id<SiriUIReviewsViewControllerDelegate> _reviewsDelegate;
	long long _reviewCharacterLimit;
	UIView* _totalRatingView;
	double _verticalSpaceNeededForRatingView;
	UIView* _providerView;
	NSString* _providerName;
	UIOffset _totalRatingViewOffset;
	UIOffset _providerViewOffset;

}

@property (assign,nonatomic,__weak) id<SiriUIReviewsViewControllerDelegate> reviewsDelegate;              //@synthesize reviewsDelegate=_reviewsDelegate - In the implementation block
@property (nonatomic,retain) SALocalSearchReviewList * reviewList;                                        //@synthesize reviewList=_reviewList - In the implementation block
@property (assign,nonatomic) long long reviewCharacterLimit;                                              //@synthesize reviewCharacterLimit=_reviewCharacterLimit - In the implementation block
@property (nonatomic,retain) UIView * totalRatingView;                                                    //@synthesize totalRatingView=_totalRatingView - In the implementation block
@property (assign,nonatomic) UIOffset totalRatingViewOffset;                                              //@synthesize totalRatingViewOffset=_totalRatingViewOffset - In the implementation block
@property (assign,nonatomic) double verticalSpaceNeededForRatingView;                                     //@synthesize verticalSpaceNeededForRatingView=_verticalSpaceNeededForRatingView - In the implementation block
@property (nonatomic,retain) UIView * providerView;                                                       //@synthesize providerView=_providerView - In the implementation block
@property (assign,nonatomic) UIOffset providerViewOffset;                                                 //@synthesize providerViewOffset=_providerViewOffset - In the implementation block
@property (nonatomic,copy) NSString * providerName;                                                       //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,retain) UICollectionView * view; 
@property (assign,nonatomic) BOOL ignoreBackgroundInsets;                                                 //@synthesize ignoreBackgroundInsets=_ignoreBackgroundInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSString *)providerName;
-(void)setProviderView:(UIView *)arg1 ;
-(UIView *)providerView;
-(UIOffset)providerViewOffset;
-(void)setProviderViewOffset:(UIOffset)arg1 ;
-(void)siriDidLayoutSnippetView;
-(void)updateSubtitle;
-(id)_displayStringForReviewCount:(long long)arg1 providerName:(id)arg2 providerView:(id)arg3 ;
-(UIEdgeInsets)_reviewCollectionInsets;
-(double)_effectiveContentWidthForItemCellsForWidth:(double)arg1 ;
-(double)_minCellWidth;
-(double)_horizontalCellSpacing;
-(long long)_numberOfCells;
-(CGSize)_sizeForCellAtIndex:(long long)arg1 forWidth:(double)arg2 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(id)_punchoutForIndexPath:(id)arg1 ;
-(long long)_rowForItemAtIndex:(long long)arg1 forWidth:(double)arg2 ;
-(void)setReviewsDelegate:(id<SiriUIReviewsViewControllerDelegate>)arg1 ;
-(long long)_numberOfRowsForWidth:(double)arg1 ;
-(Class)headerViewClass;
-(void)didEndDisplayingReusableHeaderView:(id)arg1 ;
-(id<SiriUIReviewsViewControllerDelegate>)reviewsDelegate;
-(long long)reviewCharacterLimit;
-(void)setReviewCharacterLimit:(long long)arg1 ;
-(UIView *)totalRatingView;
-(void)setTotalRatingView:(UIView *)arg1 ;
-(UIOffset)totalRatingViewOffset;
-(void)setTotalRatingViewOffset:(UIOffset)arg1 ;
-(double)verticalSpaceNeededForRatingView;
-(void)setVerticalSpaceNeededForRatingView:(double)arg1 ;
-(BOOL)ignoreBackgroundInsets;
-(void)setIgnoreBackgroundInsets:(BOOL)arg1 ;
-(void)setReviewList:(SALocalSearchReviewList *)arg1 ;
-(SALocalSearchReviewList *)reviewList;
-(long long)_numberOfColumnsForWidth:(double)arg1 ;
@end

