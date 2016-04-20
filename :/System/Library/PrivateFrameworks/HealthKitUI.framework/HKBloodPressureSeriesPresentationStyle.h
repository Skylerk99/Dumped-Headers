/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKitUI/HealthKitUI-Structs.h>
@class UIColor;

@interface HKBloodPressureSeriesPresentationStyle : NSObject {

	UIColor* _arrowColor;
	UIColor* _fillColor;
	double _arrowStrokeWidth;
	CGSize _arrowSize;

}

@property (nonatomic,retain) UIColor * arrowColor;                 //@synthesize arrowColor=_arrowColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                  //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) CGSize arrowSize;                     //@synthesize arrowSize=_arrowSize - In the implementation block
@property (assign,nonatomic) double arrowStrokeWidth;              //@synthesize arrowStrokeWidth=_arrowStrokeWidth - In the implementation block
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(UIColor *)arrowColor;
-(CGSize)arrowSize;
-(double)arrowStrokeWidth;
-(void)setArrowColor:(UIColor *)arg1 ;
-(void)setArrowSize:(CGSize)arg1 ;
-(void)setArrowStrokeWidth:(double)arg1 ;
@end

