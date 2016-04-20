/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol BlockableScrollViewDelegate;
@class NSObject;

@interface BlockableScrollView : UIScrollView {

	BOOL _isResizing;
	NSObject*<BlockableScrollViewDelegate> _blockableDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<BlockableScrollViewDelegate> blockableDelegate;              //@synthesize blockableDelegate=_blockableDelegate - In the implementation block
@property (assign,nonatomic) BOOL isResizing;                                                              //@synthesize isResizing=_isResizing - In the implementation block
-(void)setIsResizing:(BOOL)arg1 ;
-(NSObject*<BlockableScrollViewDelegate>)blockableDelegate;
-(void)setBlockableDelegate:(NSObject*<BlockableScrollViewDelegate>)arg1 ;
-(BOOL)isResizing;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end

