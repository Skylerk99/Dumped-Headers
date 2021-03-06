/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, SKUIPlayButton, NSString;

@interface MSCLAudioPickerVoiceMemoTableViewCell : UITableViewCell {

	UILabel* _creationDateLabel;
	UILabel* _durationLabel;
	SKUIPlayButton* _playButton;

}

@property (nonatomic,readonly) SKUIPlayButton * playButton;              //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,copy) NSString * creationDateString; 
@property (nonatomic,copy) NSString * durationString; 
@property (nonatomic,copy) NSString * titleString; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)titleString;
-(void)setDurationString:(NSString *)arg1 ;
-(void)setCreationDateString:(NSString *)arg1 ;
-(NSString *)creationDateString;
-(NSString *)durationString;
-(SKUIPlayButton *)playButton;
@end

