/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class MCDRepeatButton, MCDLikeButton, MCDPlayModeButton;

@interface MCDPlayModeControlView : UIView {

	BOOL _creatingGenius;
	MCDRepeatButton* _repeatButton;
	MCDLikeButton* _likeButton;
	MCDPlayModeButton* _shuffleButton;

}

@property (nonatomic,readonly) MCDRepeatButton * repeatButton;                 //@synthesize repeatButton=_repeatButton - In the implementation block
@property (nonatomic,readonly) MCDLikeButton * likeButton;                     //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,readonly) MCDPlayModeButton * shuffleButton;              //@synthesize shuffleButton=_shuffleButton - In the implementation block
@property (assign,nonatomic) BOOL creatingGenius;                              //@synthesize creatingGenius=_creatingGenius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_addConstraints;
-(MCDRepeatButton *)repeatButton;
-(MCDLikeButton *)likeButton;
-(MCDPlayModeButton *)shuffleButton;
-(BOOL)creatingGenius;
-(void)setCreatingGenius:(BOOL)arg1 ;
@end

