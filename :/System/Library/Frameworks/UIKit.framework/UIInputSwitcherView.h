/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardMenuView.h>

@class NSMutableArray, UISwitch, NSArray;

@interface UIInputSwitcherView : UIKeyboardMenuView {

	unsigned long long m_currentInputModeIndex;
	BOOL m_keyboardSettingsFromSwitcher;
	NSMutableArray* m_inputModes;
	UISwitch* m_predictiveSwitch;
	UISwitch* m_assistantSwitch;

}

@property (nonatomic,retain) NSArray * inputModes; 
@property (assign,nonatomic) BOOL keyboardSettingsFromSwitcher; 
+(id)sharedInstance;
+(id)activeInstance;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setInputMode:(id)arg1 ;
-(unsigned long long)numberOfItems;
-(id)selectedInputMode;
-(id)previousInputMode;
-(NSArray *)inputModes;
-(id)nextInputMode;
-(void)selectInputMode:(id)arg1 ;
-(CGSize)preferredSize;
-(unsigned long long)defaultSelectedIndex;
-(id)predictiveSwitch;
-(void)toggleKeyboardPredictionPreference;
-(id)assistantSwitch;
-(void)toggleKeyboardAssistantPreference;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(id)localizedTitleForItemAtIndex:(unsigned long long)arg1 ;
-(id)fontForItemAtIndex:(unsigned long long)arg1 ;
-(id)subtitleForItemAtIndex:(unsigned long long)arg1 ;
-(id)subtitleFontForItemAtIndex:(unsigned long long)arg1 ;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(void)setKeyboardSettingsFromSwitcher:(BOOL)arg1 ;
-(void)setInputModes:(NSArray *)arg1 ;
-(BOOL)keyboardSettingsFromSwitcher;
-(void)switchAction;
-(void)selectRowForInputMode:(id)arg1 ;
-(void)selectNextInputMode;
-(void)selectPreviousInputMode;
@end

