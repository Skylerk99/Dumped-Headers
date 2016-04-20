/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface UITableViewCellSelectedBackground : UIView {

	long long _selectionStyle;
	UIColor* _multiselectBackgroundColor;
	UIColor* _selectionTintColor;
	UIColor* _noneStyleBackgroundColor;
	BOOL _multiselect;

}

@property (assign,nonatomic) long long selectionStyle;                           //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,retain) UIColor * multiselectBackgroundColor;               //@synthesize multiselectBackgroundColor=_multiselectBackgroundColor - In the implementation block
@property (assign,getter=isMultiselect,nonatomic) BOOL multiselect; 
@property (nonatomic,retain) UIColor * selectionTintColor;                       //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
@property (nonatomic,retain) UIColor * noneStyleBackgroundColor;                 //@synthesize noneStyleBackgroundColor=_noneStyleBackgroundColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(void)setMultiselect:(BOOL)arg1 ;
-(BOOL)isMultiselect;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setNoneStyleBackgroundColor:(UIColor *)arg1 ;
-(long long)selectionStyle;
-(UIColor *)multiselectBackgroundColor;
-(void)setMultiselectBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(UIColor *)noneStyleBackgroundColor;
@end

