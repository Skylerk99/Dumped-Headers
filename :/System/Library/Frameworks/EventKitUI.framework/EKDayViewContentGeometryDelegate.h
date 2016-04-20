/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineGeometryDelegate.h>

@class EKDayViewContent, NSString;

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate> {

	EKDayViewContent* _dayViewContent;
	CGRect _frame;

}

@property (assign,nonatomic,__weak) EKDayViewContent * dayViewContent;              //@synthesize dayViewContent=_dayViewContent - In the implementation block
@property (assign,nonatomic) CGRect frame;                                          //@synthesize frame=_frame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect displayedRect; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) BOOL originIsUpperLeft; 
-(void)setDayViewContent:(EKDayViewContent *)arg1 ;
-(CGPoint)pointForDate:(double)arg1 ;
-(double)dateForPoint:(CGPoint)arg1 ;
-(EKDayViewContent *)dayViewContent;
-(double)hourHeight;
-(double)topPadding;
-(double)timeWidth;
-(CGRect)displayedRect;
-(BOOL)originIsUpperLeft;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
@end

