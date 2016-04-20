/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIView;

@interface UILayoutContainerView : UIView <NSCoding> {

	double _cornerRadius;
	BOOL _shadowViewsInstalled;
	UIView* _shadowView;
	BOOL _usesRoundedCorners;
	BOOL _usesInnerShadow;
	BOOL _forwardMoveToWindowCallbacks;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesInnerShadow;                           //@synthesize usesInnerShadow=_usesInnerShadow - In the implementation block
@property (assign,nonatomic) BOOL usesRoundedCorners;                        //@synthesize usesRoundedCorners=_usesRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL forwardMoveToWindowCallbacks;              //@synthesize forwardMoveToWindowCallbacks=_forwardMoveToWindowCallbacks - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setUsesRoundedCorners:(BOOL)arg1 ;
-(void)setUsesInnerShadow:(BOOL)arg1 ;
-(BOOL)forwardMoveToWindowCallbacks;
-(void)_installShadowViews;
-(void)_tearDownShadowViews;
-(BOOL)usesRoundedCorners;
-(BOOL)usesInnerShadow;
-(void)setForwardMoveToWindowCallbacks:(BOOL)arg1 ;
@end

