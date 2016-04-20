/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIButton.h>

@class _UIBackdropView, UIImageView, UIImage;

@interface __PGButton : UIButton {

	_UIBackdropView* _backdropView;
	UIImageView* _highlightImageView;
	UIImage* _backgroundImage;
	UIImageView* _foregroundImageView;
	long long _buttonStyle;

}

@property (nonatomic,readonly) long long buttonStyle;              //@synthesize buttonStyle=_buttonStyle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithButtonStyle:(long long)arg1 ;
-(long long)buttonStyle;
-(void)_updateHighlightImageView;
@end

