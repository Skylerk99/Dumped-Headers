/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface PUPhotosPanoramaHeaderView : UICollectionReusableView {

	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

