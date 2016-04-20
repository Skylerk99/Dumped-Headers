/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@protocol ZWTouchTrapViewDelegate;
@interface ZWTouchTrapView : UIView {

	id<ZWTouchTrapViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ZWTouchTrapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
-(BOOL)_accessibilityViewIsVisible;
-(BOOL)enabled;
-(void)setDelegate:(id<ZWTouchTrapViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<ZWTouchTrapViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
@end

