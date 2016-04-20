/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/AXElementInteractionUIServer.axuiservice/AXElementInteractionUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXElementInteractionUIServer/AXElementInteractionUIServer-Structs.h>
#import <UIKit/UIViewController.h>

@class AXElementInteractionCursorView;

@interface AXElementInteractionViewController : UIViewController {

	CGPathRef _cursorPath;
	AXElementInteractionCursorView* _cursorView;

}

@property (nonatomic,retain) AXElementInteractionCursorView * cursorView;              //@synthesize cursorView=_cursorView - In the implementation block
-(void)_updateCursorPath;
-(void)setCursorPath:(CGPathRef)arg1 ;
-(void)setCursorView:(AXElementInteractionCursorView *)arg1 ;
-(AXElementInteractionCursorView *)cursorView;
-(void)setCursorHidden:(BOOL)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 ;
-(void)loadView;
@end

