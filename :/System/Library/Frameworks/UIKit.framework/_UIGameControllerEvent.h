/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIEvent.h>

@interface _UIGameControllerEvent : UIEvent {

	SCD_Struct_UI97 _previousState;
	int _inputType;

}
-(long long)type;
-(void)_maybeConvertAndSendAsPressesEvent;
-(long long)subtype;
-(CGPoint)_leftStickPosition;
-(void)_sendEventToResponder:(id)arg1 ;
-(BOOL)_processStandardButtons:(SCD_Struct_UI97*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_determineInputTypeAndProcess:(SCD_Struct_UI97*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processDPad:(SCD_Struct_UI97*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processLeftStick:(SCD_Struct_UI97*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processShoulder:(SCD_Struct_UI97*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
@end

