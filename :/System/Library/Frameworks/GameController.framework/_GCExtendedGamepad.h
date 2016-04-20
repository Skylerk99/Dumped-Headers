/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCExtendedGamepad.h>
#import <libobjc.A.dylib/GCNamedProfile.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GCController, _GCControllerDirectionPad, _GCControllerButtonInput, NSString;

@interface _GCExtendedGamepad : GCExtendedGamepad <GCNamedProfile, NSSecureCoding> {

	GCController* _controller;
	/*^block*/id _valueChangedHandler;
	_GCControllerDirectionPad* _dpad;
	_GCControllerDirectionPad* _leftThumbstick;
	_GCControllerDirectionPad* _rightThumbstick;
	_GCControllerButtonInput* _button0;
	_GCControllerButtonInput* _button1;
	_GCControllerButtonInput* _button2;
	_GCControllerButtonInput* _button3;
	_GCControllerButtonInput* _leftShoulder;
	_GCControllerButtonInput* _rightShoulder;
	_GCControllerButtonInput* _leftTrigger;
	_GCControllerButtonInput* _rightTrigger;
	BOOL _dpadFlippedY;
	BOOL _leftFlippedY;
	BOOL _rightFlippedY;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
+(BOOL)supportsUSBInterfaceProtocol:(unsigned char)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)dpad;
-(id)buttonA;
-(id)buttonB;
-(id)buttonX;
-(id)buttonY;
-(id)leftShoulder;
-(id)rightShoulder;
-(id)leftThumbstick;
-(id)rightThumbstick;
-(id)leftTrigger;
-(id)rightTrigger;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(void)handleReport:(unsigned)arg1 data:(id)arg2 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2 leftFlippedY:(BOOL)arg3 rightFlippedY:(BOOL)arg4 ;
-(id)initWithController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)controller;
-(void)setController:(id)arg1 ;
@end

