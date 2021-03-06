/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface SBPieChartSlice : NSObject {

	double _value;
	UIColor* _fillColor;

}

@property (readonly) double value;                            //@synthesize value=_value - In the implementation block
@property (retain,readonly) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(id)sliceWithValue:(double)arg1 fillColor:(id)arg2 ;
-(id)initWithValue:(double)arg1 fillColor:(id)arg2 ;
-(void)dealloc;
-(double)value;
-(UIColor *)fillColor;
@end

