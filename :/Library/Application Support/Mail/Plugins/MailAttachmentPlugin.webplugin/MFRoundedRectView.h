/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Application Support/Mail/Plugins/MailAttachmentPlugin.webplugin/MailAttachmentPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailAttachmentPlugin/MailAttachmentPlugin-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface MFRoundedRectView : UIView {

	UIView* _backdropView;
	UIView* _insetView;
	UIView* _overlayView;
	CGSize _scaleDimensions;
	CGSize _scaleBaselineSize;
	double _scaleAspectRatio;
	double _stroke;
	double _radius;
	double _inset;
	UIColor* _normalStrokeColor;
	UIColor* _normalFillColor;
	CGRect _minimumRoundedRect;

}

@property (assign,nonatomic) CGSize scaleBaselineSize;              //@synthesize scaleBaselineSize=_scaleBaselineSize - In the implementation block
@property (assign,nonatomic) double scaleAspectRatio;               //@synthesize scaleAspectRatio=_scaleAspectRatio - In the implementation block
-(double)scaleAspectRatio;
-(CGSize)scaleDimensions;
-(void)setScaleAspectRatio:(double)arg1 ;
-(CGSize)scaleBaselineSize;
-(void)_printView:(id)arg1 ;
-(void)constraintWithLowerBounds:(CGRect)arg1 ;
-(void)setScaleBaselineSize:(CGSize)arg1 ;
-(void)setInsetBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)drawRectForPrinting:(CGRect)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(CGRect)insetBounds;
-(BOOL)isDisabled;
@end

