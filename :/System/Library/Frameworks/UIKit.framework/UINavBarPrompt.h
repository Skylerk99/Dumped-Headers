/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UINavigationBar;

@interface UINavBarPrompt : UIView {

	UILabel* _label;
	UINavigationBar* _navBar;

}
-(void)layoutSubviews;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(id)initWithPrompt:(id)arg1 navBar:(id)arg2 ;
-(CGRect)promptBounds;
-(CGRect)_labelFrame;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset_legacy;
@end

