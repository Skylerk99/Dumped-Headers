/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBDisplayItem, SBIcon, UIImageView, NSString;

@interface SBDeckSwitcherIconImageContainerView : UIView {

	SBDisplayItem* _displayItem;
	SBIcon* _icon;
	UIImageView* _imageView;

}

@property (nonatomic,retain,readonly) SBDisplayItem * displayItem;              //@synthesize displayItem=_displayItem - In the implementation block
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,retain) SBIcon * icon;                                     //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
-(SBDisplayItem *)displayItem;
-(id)initWithDisplayItem:(id)arg1 ;
-(void)updateIcon;
-(void)_configureIconImageView:(id)arg1 ;
-(void)_crossfadeToIconImage:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setIcon:(SBIcon *)arg1 ;
-(SBIcon *)icon;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSString *)displayName;
@end

