/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class UIImageView;

@interface OFUITrackingPinchView : OFUIView {

	UIImageView* _imageView;
	CGPoint _anchorPoint;
	CGPoint _originalCenter;
	CGSize _originalSize;
	BOOL _isRotating;
	double _originalAngle;
	double _currentAngle;

}

@property (assign) CGPoint originalCenter;              //@synthesize originalCenter=_originalCenter - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)setContentMode:(long long)arg1 ;
-(id)image;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)beginTrackingPinch:(id)arg1 ;
-(void)continueTrackingPinch:(id)arg1 ;
-(void)setSize:(CGSize)arg1 angle:(float)arg2 ;
-(void)completeTrackingPinch:(id)arg1 ;
-(CGPoint)originalCenter;
-(void)setOriginalCenter:(CGPoint)arg1 ;
@end

