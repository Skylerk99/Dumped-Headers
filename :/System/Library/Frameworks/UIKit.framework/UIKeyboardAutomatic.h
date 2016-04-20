/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboard.h>

@interface UIKeyboardAutomatic : UIKeyboard {

	BOOL showsCandidateBar;
	BOOL showsCandidateInline;
	BOOL receivedCandidatesInCurrentInputMode;
	BOOL caretBlinks;

}

@property (assign,nonatomic) BOOL showsCandidateBar; 
@property (assign,nonatomic) BOOL receivedCandidatesInCurrentInputMode; 
@property (assign,nonatomic) BOOL showsCandidateInline; 
@property (assign,nonatomic) BOOL caretBlinks; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)isActive;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(void)activate;
-(BOOL)showsCandidateBar;
-(void)setShowsCandidateBar:(BOOL)arg1 ;
-(BOOL)showsCandidateInline;
-(void)minimize;
-(void)maximize;
-(BOOL)isAutomatic;
-(BOOL)caretBlinks;
-(void)setShowsCandidateInline:(BOOL)arg1 ;
-(BOOL)receivedCandidatesInCurrentInputMode;
-(void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1 ;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)didSuspend:(id)arg1 ;
-(BOOL)_isAutomaticKeyboard;
-(void)willResume:(id)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1 ;
@end

