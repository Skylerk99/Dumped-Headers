/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScreen;


@protocol _UIViewHost <NSObject>
@property (retain,readonly) UIScreen * hostingScreen; 
@required
-(BOOL)hasHostedViews;
-(void)addHostedView:(id)arg1 withViewRemovalHandler:(/*^block*/id)arg2;
-(UIScreen *)hostingScreen;

@end

