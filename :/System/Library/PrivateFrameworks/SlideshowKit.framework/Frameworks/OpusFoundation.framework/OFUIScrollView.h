/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKit/UIScrollView.h>

@class OFUIViewController, NSMutableArray;

@interface OFUIScrollView : UIScrollView {

	OFUIViewController* _viewControllerProxy;
	NSMutableArray* _draggingPasteboardTypes;

}

@property (assign,nonatomic) OFUIViewController * viewControllerProxy;              //@synthesize viewControllerProxy=_viewControllerProxy - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)setViewControllerProxy:(OFUIViewController *)arg1 ;
-(void)registerDraggingPasteboardType:(id)arg1 ;
-(void)unregisterAllDraggingPasteboardType;
-(id)draggingPasteboardTypes;
-(OFUIViewController *)viewControllerProxy;
@end

