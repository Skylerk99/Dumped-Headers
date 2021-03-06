/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface VOTUICursorView : UIView {

	CGRect _cursorFrame;
	BOOL _isHidden;
	UIColor* _bgColor;
	double _cachedAlpha;
	CGPathRef _path;
	BOOL largeCursorEnabled;

}

@property (nonatomic,readonly) BOOL largeCursorEnabled; 
@property (assign,nonatomic) CGPathRef path;                         //@synthesize path=_path - In the implementation block
+(CGRect)resizeFrameForDisplay:(CGRect)arg1 ;
-(id)_retrieveBezierPaths:(CGRect)arg1 usingRealPaths:(BOOL*)arg2 ;
-(id)_retrieveFrameBezierPath:(CGRect)arg1 ;
-(void)_orderIn;
-(id)_retrievePathBezierPaths;
-(void)_orderOut;
-(BOOL)largeCursorEnabled;
-(void)setCursorFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(CGRect)resizeFrameForWindow:(CGRect)arg1 ;
-(BOOL)userInteractionEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(CGPathRef)path;
-(double)lineWidth;
-(void)setIsHidden:(BOOL)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
@end

