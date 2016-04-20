/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBLegibility.h>

@class _UILegibilityView, NSString;

@interface SBLockScreenTimerDialView : UIView <SBLegibility> {

	_UILegibilityView* _dialView;
	double _strength;

}

@property (assign,nonatomic) double strength;                       //@synthesize strength=_strength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(id)_newDialViewForSettings:(id)arg1 ;
-(id)_imageNameForCurrentContentSize:(id)arg1 ;
@end

