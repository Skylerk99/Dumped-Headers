/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetViewProxy.h>

@class OKRoundProgressView;

@interface OKWidgetView : OKWidgetViewProxy {

	OKRoundProgressView* _roundProgressView;

}
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)commonInit;
-(void)setActivityIndicatorVisible:(BOOL)arg1 ;
-(BOOL)isActivityIndicatorVisible;
-(BOOL)_canRespondToEventWithPoint:(CGPoint)arg1 ;
-(void)updateProgressIndicator:(double)arg1 ;
@end

