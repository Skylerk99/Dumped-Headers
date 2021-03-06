/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, UIImageView;

@interface CKMessageEntryAudioHintView : UIView {

	UIButton* _referenceButton;
	UILabel* _hintLabel;
	UIImageView* _hintImageView;
	UIButton* _hintButton;
	UIEdgeInsets _coverInsets;

}

@property (nonatomic,retain) UIButton * referenceButton;               //@synthesize referenceButton=_referenceButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets coverInsets;                 //@synthesize coverInsets=_coverInsets - In the implementation block
@property (nonatomic,retain) UILabel * hintLabel;                      //@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,retain) UIImageView * hintImageView;              //@synthesize hintImageView=_hintImageView - In the implementation block
@property (nonatomic,retain) UIButton * hintButton;                    //@synthesize hintButton=_hintButton - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIEdgeInsets)coverInsets;
-(void)setCoverInsets:(UIEdgeInsets)arg1 ;
-(id)initWithReferenceButton:(id)arg1 coverInsets:(UIEdgeInsets)arg2 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setReferenceButton:(UIButton *)arg1 ;
-(void)setHintLabel:(UILabel *)arg1 ;
-(void)setHintImageView:(UIImageView *)arg1 ;
-(void)setHintButton:(UIButton *)arg1 ;
-(UIButton *)referenceButton;
-(UIButton *)hintButton;
-(UIImageView *)hintImageView;
-(UILabel *)hintLabel;
@end

