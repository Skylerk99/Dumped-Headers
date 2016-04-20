/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class GAXStyleProvider;

@interface GAXOptionsDoneButton : UIButton {

	GAXStyleProvider* _styleProvider;

}

@property (nonatomic,retain) GAXStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
+(id)optionsDoneButtonWithTitle:(id)arg1 styleProvider:(id)arg2 ;
-(id)initWithTitle:(id)arg1 styleProvider:(id)arg2 ;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
@end

