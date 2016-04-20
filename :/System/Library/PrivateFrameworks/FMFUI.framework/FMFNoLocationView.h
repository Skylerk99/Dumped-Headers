/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <UIKit/UIView.h>

@protocol FMFNoLocationViewDelegate;
@class NSLayoutConstraint, UIImage, UIImageView, UILabel, UIView;

@interface FMFNoLocationView : UIView {

	BOOL _blockLabelUpdates;
	id<FMFNoLocationViewDelegate> _delegate;
	NSLayoutConstraint* _topInsetConstraint;
	NSLayoutConstraint* _bottomInsetConstraint;
	UIImage* _offlineProfileImage;
	UIImageView* _offlineProfileImageView;
	UIImageView* _personImageView;
	UILabel* _detailsLabel;
	UIView* _blur;
	UIView* _insetView;

}

@property (assign,nonatomic,__weak) id<FMFNoLocationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL blockLabelUpdates;                                     //@synthesize blockLabelUpdates=_blockLabelUpdates - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topInsetConstraint;                    //@synthesize topInsetConstraint=_topInsetConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomInsetConstraint;                 //@synthesize bottomInsetConstraint=_bottomInsetConstraint - In the implementation block
@property (nonatomic,retain) UIImage * offlineProfileImage;                              //@synthesize offlineProfileImage=_offlineProfileImage - In the implementation block
@property (nonatomic,retain) UIImageView * offlineProfileImageView;                      //@synthesize offlineProfileImageView=_offlineProfileImageView - In the implementation block
@property (nonatomic,retain) UIImageView * personImageView;                              //@synthesize personImageView=_personImageView - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabel;                                     //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (nonatomic,retain) UIView * blur;                                              //@synthesize blur=_blur - In the implementation block
@property (nonatomic,retain) UIView * insetView;                                         //@synthesize insetView=_insetView - In the implementation block
-(UIImageView *)personImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FMFNoLocationViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setAlpha:(double)arg1 ;
-(id<FMFNoLocationViewDelegate>)delegate;
-(UIView *)blur;
-(void)setBlur:(UIView *)arg1 ;
-(UIImage *)offlineProfileImage;
-(void)setOfflineProfileImageView:(UIImageView *)arg1 ;
-(void)setPersonImageView:(UIImageView *)arg1 ;
-(void)setDetailsLabel:(UILabel *)arg1 ;
-(void)setInsetView:(UIView *)arg1 ;
-(void)addLayoutConstraints;
-(void)updatePersonImageViewImage;
-(void)updateLabelNotification:(id)arg1 ;
-(void)setTopInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateConstriantsForInsets;
-(BOOL)blockLabelUpdates;
-(UILabel *)detailsLabel;
-(void)setOfflineProfileImage:(UIImage *)arg1 ;
-(void)setBlockLabelUpdates:(BOOL)arg1 ;
-(NSLayoutConstraint *)topInsetConstraint;
-(NSLayoutConstraint *)bottomInsetConstraint;
-(UIImageView *)offlineProfileImageView;
-(UIView *)insetView;
-(void)updateLabel;
@end

