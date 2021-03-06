/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerAxisInput.h>

@class GCControllerButtonInput, GCControllerElement;

@interface _GCControllerAxisInput : GCControllerAxisInput {

	float _value;
	/*^block*/id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;
	BOOL _flipped;
	BOOL _digital;
	GCControllerElement* _collection;

}
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(BOOL)isDigital;
-(id)positive;
-(id)initWithCollection:(id)arg1 flipped:(BOOL)arg2 digital:(BOOL)arg3 ;
-(id)collection;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
-(BOOL)isFlipped;
-(id)negative;
@end

