/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell {

	BOOL _editing;
	UIImageView* _checkmark;
	CGRect _contentAlignmentRect;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _marginInsets;

}

@property (assign,nonatomic) CGRect contentAlignmentRect;                        //@synthesize contentAlignmentRect=_contentAlignmentRect - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentAlignmentInsets; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                         //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                          //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                      //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) UIImageView * checkmark;                            //@synthesize checkmark=_checkmark - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(CGRect)contentAlignmentRect;
-(UIEdgeInsets)contentAlignmentInsets;
-(UIImageView *)checkmark;
-(void)setContentAlignmentRect:(CGRect)arg1 ;
-(void)updateCheckmarkImage;
-(void)setCheckmark:(UIImageView *)arg1 ;
@end

