/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIButton.h>

@class CAShapeLayer, PKShapeView, UIImageView, UILabel, CAFilter;

@interface PKAddPassButton : UIButton {

	CAShapeLayer* _layer;
	CGSize _boundsSize;
	PKShapeView* _maskView;
	UIImageView* _iconView;
	UILabel* _singleLineLabel;
	UILabel* _multiLineLabel;
	CAFilter* _highlightFilter;
	BOOL _highlighted;
	CGSize _iconSize;
	CGSize _singlelineSize;
	CGSize _multilineSize;
	long long _addPassButtonStyle;

}

@property (assign,nonatomic) long long addPassButtonStyle;              //@synthesize addPassButtonStyle=_addPassButtonStyle - In the implementation block
+(id)addPassButtonWithStyle:(long long)arg1 ;
+(Class)layerClass;
-(id)initWithAddPassButtonStyle:(long long)arg1 ;
-(void)_applyStyle;
-(void)_adjustVisibleLabel;
-(void)_createHighlightFilterIfNecessary;
-(void)setAddPassButtonStyle:(long long)arg1 ;
-(long long)addPassButtonStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
@end

