/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class OKWidgetView;

@interface OKWidgetGridViewCell : UICollectionViewCell {

	OKWidgetView* _widgetView;

}

@property (nonatomic,retain) OKWidgetView * widgetView;              //@synthesize widgetView=_widgetView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setWidgetView:(OKWidgetView *)arg1 ;
-(OKWidgetView *)widgetView;
@end

