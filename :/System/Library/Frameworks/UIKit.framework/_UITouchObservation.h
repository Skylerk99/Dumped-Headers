/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITouch;

@interface _UITouchObservation : NSObject {

	UITouch* _observedTouches[8];
	unsigned long long _observedTouchCount;
	unsigned long long _observedTouchOffset;

}
-(void)dealloc;
-(void)reset;
-(void)enumerateTouchesWithBlock:(/*^block*/id)arg1 ;
-(void)observeTouch:(id)arg1 ;
-(unsigned long long)touchCount;
@end

