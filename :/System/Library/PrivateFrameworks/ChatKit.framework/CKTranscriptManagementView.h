/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CKTranscriptManagementView : UIView {

	BOOL _suppressMapMovement;
	UIView* _mapView;
	UIView* _attachmentsCollectionView;
	UIView* _nameField;
	double _navigationBarTopInset;
	double _bottomPadding;
	double _scrollYOffset;

}

@property (nonatomic,retain) UIView * mapView;                                //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UIView * attachmentsCollectionView;              //@synthesize attachmentsCollectionView=_attachmentsCollectionView - In the implementation block
@property (nonatomic,retain) UIView * nameField;                              //@synthesize nameField=_nameField - In the implementation block
@property (assign,nonatomic) BOOL suppressMapMovement;                        //@synthesize suppressMapMovement=_suppressMapMovement - In the implementation block
@property (assign,nonatomic) double navigationBarTopInset;                    //@synthesize navigationBarTopInset=_navigationBarTopInset - In the implementation block
@property (assign,nonatomic) double bottomPadding;                            //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) double scrollYOffset;                            //@synthesize scrollYOffset=_scrollYOffset - In the implementation block
-(void)setMapView:(UIView *)arg1 ;
-(UIView *)mapView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)layoutMarginsFollowReadableWidth;
-(void)layoutMarginsDidChange;
-(double)scrollYOffset;
-(UIView *)attachmentsCollectionView;
-(double)bottomPadding;
-(BOOL)suppressMapMovement;
-(UIView *)nameField;
-(double)navigationBarTopInset;
-(void)setAttachmentsCollectionView:(UIView *)arg1 ;
-(void)setNameField:(UIView *)arg1 ;
-(void)setSuppressMapMovement:(BOOL)arg1 ;
-(void)setNavigationBarTopInset:(double)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(void)setScrollYOffset:(double)arg1 ;
@end

