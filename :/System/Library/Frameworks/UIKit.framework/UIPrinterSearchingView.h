/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIPrintMessageAndSpinnerView;

@interface UIPrinterSearchingView : UIView {

	BOOL _constraintsSet;
	_UIPrintMessageAndSpinnerView* _messageAndSpinner;

}

@property (assign,nonatomic,__weak) _UIPrintMessageAndSpinnerView * messageAndSpinner;              //@synthesize messageAndSpinner=_messageAndSpinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(_UIPrintMessageAndSpinnerView *)messageAndSpinner;
-(void)searchTimeout;
-(void)setSearching:(BOOL)arg1 ;
-(void)setMessageAndSpinner:(_UIPrintMessageAndSpinnerView *)arg1 ;
@end

