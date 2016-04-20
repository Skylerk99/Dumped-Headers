/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIImageView, NSArray;

@interface SLSheetImagePreviewView : UIView {

	UIImage* _image;
	UIImageView* _imageView;
	NSArray* _principalAttachments;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSArray * principalAttachments;              //@synthesize principalAttachments=_principalAttachments - In the implementation block
+(id)fallbackPreviewImage;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(NSArray *)principalAttachments;
-(void)setPrincipalAttachments:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImage *)image;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

