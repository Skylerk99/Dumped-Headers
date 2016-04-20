/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface CKTranscriptAddRecipientCell : UITableViewCell {

	UILabel* _addLabel;
	UIImageView* _addIcon;

}

@property (nonatomic,retain) UILabel * addLabel;                 //@synthesize addLabel=_addLabel - In the implementation block
@property (nonatomic,retain) UIImageView * addIcon;              //@synthesize addIcon=_addIcon - In the implementation block
+(double)preferredHeight;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setAddLabel:(UILabel *)arg1 ;
-(UILabel *)addLabel;
-(void)setAddIcon:(UIImageView *)arg1 ;
-(UIImageView *)addIcon;
@end

