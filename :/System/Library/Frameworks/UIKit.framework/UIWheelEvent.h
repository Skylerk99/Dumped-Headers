/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIEvent.h>

@class NSMutableArray;

@interface UIWheelEvent : UIEvent {

	long long _recentScrollDistance;
	NSMutableArray* _recentScrollEvents;
	long long lastSubtype;

}
-(long long)type;
-(long long)subtype;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
-(double)_wheelVelocity;
-(BOOL)_canHaveVelocity;
@end

