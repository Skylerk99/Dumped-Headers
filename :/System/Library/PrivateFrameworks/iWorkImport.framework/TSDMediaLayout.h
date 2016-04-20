/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledLayout.h>

@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout {

	CGRect mCachedAlignmentFrame;
	struct {
		unsigned alignmentFrame : 1;
	}  mMediaInvalidFlags;
	TSDMutableStroke* mDynamicStroke;
	BOOL mShouldRenderFrameStroke;
	CGRect mBoundsForStandardKnobs;

}

@property (assign,nonatomic) CGRect boundsForStandardKnobs; 
@property (assign,nonatomic) BOOL shouldRenderFrameStroke; 
-(CGRect)boundsForStandardKnobs;
-(BOOL)shouldRenderFrameStroke;
-(void)setShouldRenderFrameStroke:(BOOL)arg1 ;
-(void)setBoundsForStandardKnobs:(CGRect)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)alignmentFrame;
-(BOOL)isStrokeBeingManipulated;
-(CGRect)alignmentFrameInRoot;
-(BOOL)supportsRotation;
-(void)invalidateAlignmentFrame;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(id)stroke;
-(void)setGeometry:(id)arg1 ;
-(id)mediaInfo;
@end

