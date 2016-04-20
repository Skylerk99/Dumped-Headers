/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class UILongPressGestureRecognizer, NSIndexPath, NSArray, _UIActivityGroupActivityCell;

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout {

	UILongPressGestureRecognizer* _editingGestureRecognizer;
	NSIndexPath* _indexPathForDraggedItem;
	double _evaluatedHorizontalItemOffset;
	NSArray* _preparedLayoutAttributes;
	NSArray* _preparedUpdateItems;
	_UIActivityGroupActivityCell* _draggingView;
	CGSize _evaluatedItemSize;
	CGSize _evaluatedContentSize;
	UIOffset _draggingOffset;
	UIEdgeInsets _evaluatedInset;

}

@property (nonatomic,retain) UILongPressGestureRecognizer * editingGestureRecognizer;              //@synthesize editingGestureRecognizer=_editingGestureRecognizer - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPathForDraggedItem;                                  //@synthesize indexPathForDraggedItem=_indexPathForDraggedItem - In the implementation block
@property (assign,nonatomic) UIEdgeInsets evaluatedInset;                                          //@synthesize evaluatedInset=_evaluatedInset - In the implementation block
@property (assign,nonatomic) CGSize evaluatedItemSize;                                             //@synthesize evaluatedItemSize=_evaluatedItemSize - In the implementation block
@property (assign,nonatomic) CGSize evaluatedContentSize;                                          //@synthesize evaluatedContentSize=_evaluatedContentSize - In the implementation block
@property (assign,nonatomic) double evaluatedHorizontalItemOffset;                                 //@synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset - In the implementation block
@property (nonatomic,copy) NSArray * preparedLayoutAttributes;                                     //@synthesize preparedLayoutAttributes=_preparedLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * preparedUpdateItems;                                          //@synthesize preparedUpdateItems=_preparedUpdateItems - In the implementation block
@property (assign,nonatomic) UIOffset draggingOffset;                                              //@synthesize draggingOffset=_draggingOffset - In the implementation block
@property (nonatomic,retain) _UIActivityGroupActivityCell * draggingView;                          //@synthesize draggingView=_draggingView - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)handleEditingGesture:(id)arg1 ;
-(void)setEditingGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)editingGestureRecognizer;
-(id)indexPathForItemRecognizedByGesture:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(_UIActivityGroupActivityCell *)draggingView;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)_indexPathsForItemsInSection:(long long)arg1 ;
-(CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1 ;
-(UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1 ;
-(double)_evaluateHorizontalItemOffsetForItemSize:(CGSize)arg1 inset:(UIEdgeInsets)arg2 offscreenPeekInFactor:(float)arg3 ;
-(void)setEvaluatedHorizontalItemOffset:(double)arg1 ;
-(void)setEvaluatedInset:(UIEdgeInsets)arg1 ;
-(void)setEvaluatedItemSize:(CGSize)arg1 ;
-(CGSize)evaluatedContentSize;
-(void)setEvaluatedContentSize:(CGSize)arg1 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2 ;
-(void)setPreparedLayoutAttributes:(NSArray *)arg1 ;
-(NSArray *)preparedLayoutAttributes;
-(id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1 ;
-(NSArray *)preparedUpdateItems;
-(void)setPreparedUpdateItems:(NSArray *)arg1 ;
-(BOOL)shouldReverseLayoutDirection;
-(CGSize)evaluatedItemSize;
-(double)evaluatedHorizontalItemOffset;
-(UIEdgeInsets)evaluatedInset;
-(NSIndexPath *)indexPathForDraggedItem;
-(void)setDraggingOffset:(UIOffset)arg1 ;
-(void)setIndexPathForDraggedItem:(NSIndexPath *)arg1 ;
-(void)beginDraggingForGesture:(id)arg1 ;
-(void)updateDraggingViewForGesture:(id)arg1 ;
-(BOOL)shouldCancelDraggingForGesture:(id)arg1 ;
-(void)cancelDraggingForGesture:(id)arg1 ;
-(id)draggingViewForItemAtIndexPath:(id)arg1 ;
-(void)setDraggingView:(_UIActivityGroupActivityCell *)arg1 ;
-(void)invalidateGroupViewLayoutAnimated:(BOOL)arg1 ;
-(UIOffset)draggingOffset;
@end

