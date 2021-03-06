/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>
#import <UIKit/UIKeyboardCandidateRowViewControllerDelegate.h>

@protocol UIKeyboardCandidateListDelegate, UICollectionViewDelegate;
@class UIImageView, UIView, UIKeyboardCandidateSortControl, UIKeyboardCandidateGridHeader, TIKeyboardCandidateResultSet, NSMutableDictionary, UIKeyboardCandidateGridCollectionViewController, UIKBBackdropView, NSArray, NSString, UIKeyboardCandidateRowViewController;

@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateRowViewControllerDelegate> {

	UIImageView* _backgroundView;
	UIView* _topBarShadow;
	UIView* _bottomBarShadow;
	UIKeyboardCandidateSortControl* _sortBar;
	UIKeyboardCandidateGridHeader* _gridHeader;
	BOOL _drawTopShadow;
	BOOL _drawBottomShadow;
	BOOL _secondaryCandidatesViewIsCurrent;
	int _candidatesVisualStyle;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	TIKeyboardCandidateResultSet* _candidateSet;
	NSMutableDictionary* _collectionViewControllers;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	unsigned long long _numberOfColumns;
	id<UICollectionViewDelegate> _scrollViewDelegate;
	UIKBBackdropView* _backdropView;
	NSArray* _sortedCandidates;
	NSString* _inlineText;
	UIKeyboardCandidateRowViewController* _secondaryCandidatesViewController;

}

@property (assign,nonatomic) BOOL drawTopShadow;                                                                      //@synthesize drawTopShadow=_drawTopShadow - In the implementation block
@property (assign,nonatomic) BOOL drawBottomShadow;                                                                   //@synthesize drawBottomShadow=_drawBottomShadow - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                             //@synthesize candidateSet=_candidateSet - In the implementation block
@property (nonatomic,retain) NSArray * sortedCandidates;                                                              //@synthesize sortedCandidates=_sortedCandidates - In the implementation block
@property (nonatomic,retain) NSString * inlineText;                                                                   //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns;                                                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                                                               //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) UIKeyboardCandidateSortControl * sortBar;                                                //@synthesize sortBar=_sortBar - In the implementation block
@property (assign,nonatomic) UIKeyboardCandidateGridHeader * gridHeader;                                              //@synthesize gridHeader=_gridHeader - In the implementation block
@property (assign,nonatomic) id<UICollectionViewDelegate> scrollViewDelegate;                                         //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;                               //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * collectionViewControllers;                                       //@synthesize collectionViewControllers=_collectionViewControllers - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateRowViewController * secondaryCandidatesViewController;                //@synthesize secondaryCandidatesViewController=_secondaryCandidatesViewController - In the implementation block
@property (assign,nonatomic) BOOL secondaryCandidatesViewIsCurrent;                                                   //@synthesize secondaryCandidatesViewIsCurrent=_secondaryCandidatesViewIsCurrent - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * backdropView;                                                         //@synthesize backdropView=_backdropView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(void)layout;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(BOOL)hasCandidates;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(BOOL)isExtendedList;
-(BOOL)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6 ;
-(void)setInlineText:(NSString *)arg1 ;
-(BOOL)handleNumberKey:(unsigned long long)arg1 ;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1 ;
-(BOOL)hasNextPage;
-(BOOL)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(NSString *)inlineText;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(BOOL)padInlineFloatingViewIsExpanded:(id)arg1 ;
-(void)setSecondaryCandidatesViewIsCurrent:(BOOL)arg1 ;
-(BOOL)secondaryCandidatesViewIsCurrent;
-(unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1 ;
-(void)candidateViewDidFinishExtending;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
-(void)setCollectionViewController:(UIKeyboardCandidateGridCollectionViewController *)arg1 ;
-(void)sortSelectionBarAction:(id)arg1 ;
-(void)setBackdropView:(UIKBBackdropView *)arg1 ;
-(UIKBBackdropView *)backdropView;
-(void)setDrawTopShadow:(BOOL)arg1 ;
-(void)setDrawBottomShadow:(BOOL)arg1 ;
-(void)statusBarFrameWillChange:(id)arg1 ;
-(void)setSortBar:(UIKeyboardCandidateSortControl *)arg1 ;
-(void)setGridHeader:(UIKeyboardCandidateGridHeader *)arg1 ;
-(UIKeyboardCandidateSortControl *)sortBar;
-(BOOL)drawTopShadow;
-(BOOL)drawBottomShadow;
-(UIKeyboardCandidateRowViewController *)secondaryCandidatesViewController;
-(void)setSecondaryCandidatesViewController:(UIKeyboardCandidateRowViewController *)arg1 ;
-(UIKeyboardCandidateGridHeader *)gridHeader;
-(void)clearViews;
-(NSMutableDictionary *)collectionViewControllers;
-(id<UICollectionViewDelegate>)scrollViewDelegate;
-(void)showArrowButton:(BOOL)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(void)setScrollViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(NSArray *)sortedCandidates;
-(void)setSortedCandidates:(NSArray *)arg1 ;
@end

