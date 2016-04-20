/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIDynamicAnimationActiveValue : NSObject {

	double _value;
	double _minimumActiveValue;
	double _maximumActiveValue;
	int _type;
	double _boundaryPull;
	id _applier;
	unsigned _lowerBoundary : 1;
	unsigned _upperBoundary : 1;

}

@property (assign,nonatomic) double value;                           //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumActiveValue;              //@synthesize minimumActiveValue=_minimumActiveValue - In the implementation block
@property (assign,nonatomic) double maximumActiveValue;              //@synthesize maximumActiveValue=_maximumActiveValue - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
+(id)activeValue:(double)arg1 ofType:(int)arg2 ;
+(id)lowerBoundary:(double)arg1 ofType:(int)arg2 ;
+(id)upperBoundary:(double)arg1 ofType:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)value;
-(void)setValue:(double)arg1 ;
-(/*^block*/id)_applier;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(void)_setBoundaryPull:(double)arg1 ;
-(BOOL)_isLowerBoundary;
-(BOOL)_isUpperBoundary;
-(double)minimumActiveValue;
-(double)maximumActiveValue;
-(void)setMinimumActiveValue:(double)arg1 ;
-(void)setMaximumActiveValue:(double)arg1 ;
-(double)_boundaryPull;
@end

