/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/PlugIns/CoreRCHIDService.plugin/CoreRCHIDService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IIOHIDService2Delegate <IUnknownDelegate>
@required
-(id)copyIOHIDServicePropertyForKey:(id)arg1;
-(BOOL)setIOHIDServicePropertyForKey:(id)arg1 withValue:(id)arg2;
-(void)setIOHIDServiceEventCallback:(/*function pointer*/void*)arg1 target:(void*)arg2 context:(void*)arg3;
-(void)scheduleWithDispatchQueue:(id)arg1;
-(void)unscheduleFromDispatchQueue:(id)arg1;

@end

