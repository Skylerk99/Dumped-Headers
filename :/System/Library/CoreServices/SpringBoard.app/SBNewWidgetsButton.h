/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIButton.h>

@class UIButton, SBNotificationControlColorSettings, NSString;

@interface SBNewWidgetsButton : UIButton {

	UIButton* _vibrantButton;
	UIButton* _overlayButton;
	SBNotificationControlColorSettings* _colorSettings;
	unsigned long long _badgeNumber;
	NSString* _text;
	NSString* _numberText;

}

@property (assign,nonatomic) unsigned long long badgeNumber;              //@synthesize badgeNumber=_badgeNumber - In the implementation block
@property (nonatomic,retain) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * numberText;                       //@synthesize numberText=_numberText - In the implementation block
-(id)initWithColorSettings:(id)arg1 ;
-(void)_buttonStateChanged:(id)arg1 ;
-(void)_buttonPushed:(id)arg1 ;
-(void)setNumberText:(NSString *)arg1 ;
-(void)_setAttributeTitleForButton:(id)arg1 withSettings:(id)arg2 ;
-(id)_attributedStringWithColor:(id)arg1 ;
-(id)_numberFont;
-(NSString *)numberText;
-(id)_numberTextAttributesWithColor:(id)arg1 ;
-(id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2 ;
-(id)_textAttributesWithColor:(id)arg1 ;
-(id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2 ;
-(CGSize)_numberLabelSizeForText:(id)arg1 ;
-(void)updateForContentCategorySizeChange;
-(id)_textFont;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)badgeNumber;
-(void)setBadgeNumber:(unsigned long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateButtons;
@end

