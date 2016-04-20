/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImage.h>

@interface _UIResizableImage : UIImage {

	BOOL _alwaysStretches;
	BOOL _isSubimage;
	UIEdgeInsets _subimageInsets;
	UIEdgeInsets _capInsets;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_configureImage:(id)arg1 ;
-(BOOL)_isResizable;
-(UIEdgeInsets)capInsets;
-(void)_setCapInsets:(UIEdgeInsets)arg1 ;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(CGRect)_contentStretchInPixels;
-(CGRect)_contentInsetsInPixels:(UIEdgeInsets)arg1 emptySizeFallback:(/*^block*/id)arg2 ;
-(CGRect)_contentRectInPixels;
-(long long)resizingMode;
-(BOOL)_suppressesAccessibilityHairlineThickening;
-(id)initWithImage:(id)arg1 capInsets:(UIEdgeInsets)arg2 ;
-(void)_setSubimageInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isSubimage;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)_resizableImageWithCapMask:(int)arg1 ;
@end

