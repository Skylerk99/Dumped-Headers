/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol UIDebuggingInformationValueViewObserver;
@class UIDebuggingInformationValue, UIView;

@interface UIDebuggingInformationValueView : UIView {

	id<UIDebuggingInformationValueViewObserver> _valueObserver;
	UIDebuggingInformationValue* _value;
	UIView* _contentView;

}

@property (assign,nonatomic) id<UIDebuggingInformationValueViewObserver> valueObserver;              //@synthesize valueObserver=_valueObserver - In the implementation block
@property (nonatomic,retain) UIDebuggingInformationValue * value;                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
+(Class)_viewClassForValueType:(long long)arg1 ;
+(id)viewWithValue:(id)arg1 ;
-(UIDebuggingInformationValue *)value;
-(void)setValue:(UIDebuggingInformationValue *)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)_prepareConstraints;
-(void)addViewsToContentView;
-(id<UIDebuggingInformationValueViewObserver>)valueObserver;
-(id)initWithValue:(id)arg1 ;
-(void)valueChangedToValue:(id)arg1 ;
-(void)setValueObserver:(id<UIDebuggingInformationValueViewObserver>)arg1 ;
@end

