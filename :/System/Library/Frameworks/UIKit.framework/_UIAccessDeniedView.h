/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString;

@interface _UIAccessDeniedView : UIView {

	UIImageView* _lockView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSString* _title;
	NSString* _message;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_textColor;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
@end

