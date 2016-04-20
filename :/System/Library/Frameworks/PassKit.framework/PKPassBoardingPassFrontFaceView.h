/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPassFrontFaceView.h>

@class UIImageView;

@interface PKPassBoardingPassFrontFaceView : PKPassFrontFaceView {

	UIImageView* _transitImageView;
	UIImageView* _footerImageView;

}
-(id)shortFaceTemplate;
-(void)createBodyContentViews;
-(id)_transitGlyphForTransitType:(long long)arg1 ;
-(void)setShowsBarcodeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)shortScrunchedFaceTemplate;
-(id)tallFaceTemplate;
-(void)dealloc;
-(void)layoutSubviews;
@end

