/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKBadgeView.h>

@class UIImage;

@interface CMKFlashBadge : CMKBadgeView {

	UIImage* __contentImage;

}

@property (nonatomic,retain) UIImage * _contentImage;              //@synthesize _contentImage=__contentImage - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_commonInit;
-(id)_maskImage;
-(UIEdgeInsets)_imageInsets;
-(UIImage *)_contentImage;
-(void)set_contentImage:(UIImage *)arg1 ;
-(CGSize)_imageSize;
@end

