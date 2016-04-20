/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MFModernAtomView;

@interface MFModernAtomBackgroundView : UIView {

	UIView* _selectedView;
	unsigned long long _selectionStyle;
	UIView* _separatorView;
	MFModernAtomView* _hostAtomView;
	int _separatorStyle;
	BOOL _selected;
	double _scalingFactor;

}

@property (nonatomic,readonly) UIView * selectedView;                      //@synthesize selectedView=_selectedView - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                     //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) MFModernAtomView * hostAtomView;              //@synthesize hostAtomView=_hostAtomView - In the implementation block
@property (assign,nonatomic) int separatorStyle;                           //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) double scalingFactor;                         //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(void)setHostAtomView:(MFModernAtomView *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned long long)arg3 ;
-(double)separatorWidth;
-(UIView *)selectedView;
-(void)setScalingFactor:(double)arg1 ;
-(MFModernAtomView *)hostAtomView;
-(UIEdgeInsets)_backgroundBleedArea;
-(void)_setSelectionStyle:(unsigned long long)arg1 ;
-(id)_chevronImage;
-(double)scalingFactor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setSeparatorStyle:(int)arg1 ;
-(BOOL)isSelected;
-(int)separatorStyle;
-(UIView *)separatorView;
@end

