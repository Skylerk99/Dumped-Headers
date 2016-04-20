/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKView.h>
#import <WebCore/WebCoreFrameScrollView.h>

@class WAKView, WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {

	WAKView* _documentView;
	WAKClipView* _contentView;
	id _delegate;
	CGPoint _scrollOrigin;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)delegate;
-(id)contentView;
-(void)scrollWheel:(id)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(id)documentView;
-(CGRect)unobscuredContentRect;
-(BOOL)drawsBackground;
-(void)setDocumentView:(id)arg1 ;
-(void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(BOOL)arg3 ;
-(void)scrollingModes:(int*)arg1 vertical:(int*)arg2 ;
-(CGRect)exposedContentRect;
-(void)setActualScrollPosition:(CGPoint)arg1 ;
-(CGRect)documentVisibleRect;
-(void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2 ;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3 ;
-(BOOL)_selfHandleEvent:(id)arg1 ;
-(void)reflectScrolledClipView:(id)arg1 ;
-(void)setHorizontalScrollingMode:(int)arg1 ;
-(void)setVerticalScrollingMode:(int)arg1 ;
-(void)setScrollingMode:(int)arg1 ;
-(int)horizontalScrollingMode;
-(int)verticalScrollingMode;
-(void)_adjustScrollers;
-(float)verticalLineScroll;
-(void)setHasVerticalScroller:(BOOL)arg1 ;
-(void)setHasHorizontalScroller:(BOOL)arg1 ;
-(void)setLineScroll:(float)arg1 ;
-(CGPoint)scrollOrigin;
-(float)horizontalLineScroll;
-(BOOL)hasHorizontalScroller;
-(BOOL)hasVerticalScroller;
-(BOOL)inProgrammaticScroll;
@end

