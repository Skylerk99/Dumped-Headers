/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, UIColor;

@interface CNAvatarCardHighlightView : UIView {

	CALayer* _highlightLayer;

}

@property (nonatomic,retain) CALayer * highlightLayer;              //@synthesize highlightLayer=_highlightLayer - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor; 
@property (nonatomic,readonly) BOOL highlighted; 
-(void)setHighlightLayer:(CALayer *)arg1 ;
-(CALayer *)highlightLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_commonInit;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)highlighted;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
@end

