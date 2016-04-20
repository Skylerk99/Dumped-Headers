/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMPriorityNotificationCenterEntry : NSObject {

	id _observer;
	SEL _selector;
	id _object;

}

@property (assign,nonatomic,__weak) id observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;                    //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) id object;                       //@synthesize object=_object - In the implementation block
-(id)description;
-(void)setSelector:(SEL)arg1 ;
-(id)object;
-(SEL)selector;
-(id)observer;
-(void)setObserver:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)initWithObserver:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
@end

