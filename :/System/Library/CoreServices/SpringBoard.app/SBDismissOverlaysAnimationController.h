/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@interface SBDismissOverlaysAnimationController : SBUIAnimationController {

	unsigned long long _dismissOptions;

}

@property (nonatomic,readonly) unsigned long long dismissOptions;              //@synthesize dismissOptions=_dismissOptions - In the implementation block
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)dismissOptions;
-(void)_startAnimation;
@end

