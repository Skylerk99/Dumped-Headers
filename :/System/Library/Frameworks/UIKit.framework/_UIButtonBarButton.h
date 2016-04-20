/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class _UIButtonBarButtonVisualProvider;

@interface _UIButtonBarButton : UIControl {

	_UIButtonBarButtonVisualProvider* _visualProvider;
	BOOL _backButton;

}

@property (nonatomic,copy,readonly) _UIButtonBarButtonVisualProvider * visualProvider;              //@synthesize visualProvider=_visualProvider - In the implementation block
@property (getter=isBackButton,nonatomic,readonly) BOOL backButton;                                 //@synthesize backButton=_backButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)reset;
-(void)setEnabled:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(void)_configureFromBarItem:(id)arg1 isBackButton:(BOOL)arg2 ;
-(id)initWithVisualProvider:(id)arg1 ;
-(void)configureFromBarItem:(id)arg1 ;
-(void)configureBackButtonFromBarItem:(id)arg1 ;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(BOOL)isBackButton;
@end

