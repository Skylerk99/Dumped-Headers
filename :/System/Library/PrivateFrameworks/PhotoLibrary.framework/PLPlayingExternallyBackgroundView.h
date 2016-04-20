/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface PLPlayingExternallyBackgroundView : UIView {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIImageView* _imageView;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setMessage:(id)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_newLabelWithText:(id)arg1 withFont:(id)arg2 ;
-(void)_updateSizeForLabel:(id)arg1 ;
@end

