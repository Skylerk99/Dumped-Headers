/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFUIWindowDraggingSource, OFUIWindowDraggingDestination;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class OFUIWindow, NSMutableArray, UIView, UILabel, UIPasteboard, NSMutableDictionary;

@interface OFUIWindowDraggingSession : NSObject {

	OFUIWindow* _window;
	NSMutableArray* _items;
	unsigned long long _animation;
	id<OFUIWindowDraggingSource> _source;
	id<OFUIWindowDraggingDestination> _destination;
	unsigned long long _formation;
	unsigned long long _sourceOperation;
	unsigned long long _destinationOperation;
	BOOL _showBadge;
	UIView* _badgeView;
	UILabel* _badgeLabel;
	unsigned long long _state;
	BOOL _delayUpdates;
	UIView* _presentationView;
	CGSize _presentationViewSize;
	CGPoint _position;
	UIPasteboard* _pasteboard;
	NSMutableDictionary* _pasteboardCache;

}

@property (assign,nonatomic) OFUIWindow * window;                                        //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) unsigned long long animation;                               //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) id<OFUIWindowDraggingSource> source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) id<OFUIWindowDraggingDestination> destination;              //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) unsigned long long formation;                               //@synthesize formation=_formation - In the implementation block
@property (assign,nonatomic) unsigned long long sourceOperation;                         //@synthesize sourceOperation=_sourceOperation - In the implementation block
@property (assign,nonatomic) unsigned long long destinationOperation;                    //@synthesize destinationOperation=_destinationOperation - In the implementation block
@property (assign,nonatomic) BOOL showBadge;                                             //@synthesize showBadge=_showBadge - In the implementation block
@property (assign,nonatomic) BOOL delayUpdates;                                          //@synthesize delayUpdates=_delayUpdates - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGPoint position;                                           //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) UIView * presentationView;                                  //@synthesize presentationView=_presentationView - In the implementation block
@property (assign,nonatomic) CGSize presentationViewSize;                                //@synthesize presentationViewSize=_presentationViewSize - In the implementation block
@property (nonatomic,retain) UIPasteboard * pasteboard;                                  //@synthesize pasteboard=_pasteboard - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                     //@synthesize items=_items - In the implementation block
-(void)_updateBadge;
-(void)moveToPosition:(CGPoint)arg1 ;
-(void)dealloc;
-(OFUIWindow *)window;
-(id)init;
-(BOOL)isDragging;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setWindow:(OFUIWindow *)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(unsigned long long)animation;
-(CGPoint)position;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)addItem:(id)arg1 ;
-(unsigned long long)numberOfItems;
-(id<OFUIWindowDraggingSource>)source;
-(void)setSource:(id<OFUIWindowDraggingSource>)arg1 ;
-(id<OFUIWindowDraggingDestination>)destination;
-(void)setDestination:(id<OFUIWindowDraggingDestination>)arg1 ;
-(void)setAnimation:(unsigned long long)arg1 ;
-(UIPasteboard *)pasteboard;
-(unsigned long long)indexOfItem:(id)arg1 ;
-(id)initWithWindow:(id)arg1 items:(id)arg2 position:(CGPoint)arg3 source:(id)arg4 ;
-(void)beginDragging;
-(void)endDragging:(BOOL)arg1 ;
-(void)setPasteboard:(UIPasteboard *)arg1 ;
-(void)updatePresentationViewOrientation:(id)arg1 ;
-(void)_updateView:(id)arg1 orientation:(long long)arg2 animated:(BOOL)arg3 ;
-(id)_hitDestinationInSuperview:(id)arg1 ;
-(void)updateDragging;
-(void)_updatePresentationViewWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)itemsContainObject:(id)arg1 ;
-(void)_updateDraggingInSameWindow;
-(id)_hitDestinationInView:(id)arg1 ;
-(void)_finishPresentationViewWithCompletion:(/*^block*/id)arg1 ;
-(id)objectsForPasteboardType:(id)arg1 transcodeBlock:(/*^block*/id)arg2 cache:(BOOL)arg3 ;
-(unsigned long long)formation;
-(void)setFormation:(unsigned long long)arg1 ;
-(unsigned long long)sourceOperation;
-(void)setSourceOperation:(unsigned long long)arg1 ;
-(unsigned long long)destinationOperation;
-(void)setDestinationOperation:(unsigned long long)arg1 ;
-(BOOL)showBadge;
-(void)setShowBadge:(BOOL)arg1 ;
-(BOOL)delayUpdates;
-(void)setDelayUpdates:(BOOL)arg1 ;
-(void)setPresentationView:(UIView *)arg1 ;
-(CGSize)presentationViewSize;
-(void)setPresentationViewSize:(CGSize)arg1 ;
-(UIView *)presentationView;
@end

