/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, UIImageView;

@interface MSCLAudioAttachmentPreviewView : UIView {

	UILabel* _artistLabel;
	UIView* _categoryBackgroundView;
	UILabel* _categoryLabel;
	UIImageView* _coverImageView;
	UILabel* _dateLabel;
	UILabel* _titleLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithAttachment:(id)arg1 clientContext:(id)arg2 ;
@end

