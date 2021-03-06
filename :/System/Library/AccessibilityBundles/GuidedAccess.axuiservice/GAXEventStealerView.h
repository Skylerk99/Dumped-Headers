/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>

@protocol GAXEventStealerViewDelegate;
@interface GAXEventStealerView : UIView {

	BOOL _shouldStealAllEvents;
	id<GAXEventStealerViewDelegate> _eventStealerViewDelegate;

}

@property (assign,nonatomic) BOOL shouldStealAllEvents;                                             //@synthesize shouldStealAllEvents=_shouldStealAllEvents - In the implementation block
@property (assign,nonatomic) id<GAXEventStealerViewDelegate> eventStealerViewDelegate;              //@synthesize eventStealerViewDelegate=_eventStealerViewDelegate - In the implementation block
-(void)setShouldStealAllEvents:(BOOL)arg1 ;
-(void)setEventStealerViewDelegate:(id<GAXEventStealerViewDelegate>)arg1 ;
-(id<GAXEventStealerViewDelegate>)eventStealerViewDelegate;
-(BOOL)shouldStealAllEvents;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
@end

