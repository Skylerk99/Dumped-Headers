/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUIServices/SBInteractionPassThroughView.h>

@class _SBAnimatableCorneredView, SBIconImageView, UIView;

@interface SBIconImageCrossfadeView : SBInteractionPassThroughView {

	_SBAnimatableCorneredView* _containerView;
	SBIconImageView* _imageView;
	UIView* _crossfadeView;
	double _crossfadeFraction;
	double _containerScaleX;
	double _containerScaleY;
	BOOL _masksCorners;
	BOOL _performsTrueCrossfade;
	CGPoint _stretchAnchorPoint;

}

@property (assign,nonatomic) BOOL masksCorners;                       //@synthesize masksCorners=_masksCorners - In the implementation block
@property (assign,nonatomic) BOOL performsTrueCrossfade;              //@synthesize performsTrueCrossfade=_performsTrueCrossfade - In the implementation block
@property (assign,nonatomic) CGPoint stretchAnchorPoint;              //@synthesize stretchAnchorPoint=_stretchAnchorPoint - In the implementation block
-(void)_updateCornerMask;
-(id)initWithImageView:(id)arg1 crossfadeView:(id)arg2 ;
-(void)prepareGeometry;
-(void)setMasksCorners:(BOOL)arg1 ;
-(void)setStretchAnchorPoint:(CGPoint)arg1 ;
-(void)setFadeFraction:(double)arg1 ;
-(void)setMorphFraction:(double)arg1 totalScale:(double)arg2 ;
-(BOOL)masksCorners;
-(BOOL)performsTrueCrossfade;
-(void)setPerformsTrueCrossfade:(BOOL)arg1 ;
-(CGPoint)stretchAnchorPoint;
-(void)dealloc;
-(void)layoutSubviews;
-(void)cleanup;
@end

