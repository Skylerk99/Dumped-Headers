/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXNotificationHandler : NSObject {

	NSString* _notificationName;
	id _target;
	/*^block*/id _dispatcher;
	unsigned long long _observerIdentifier;
	BOOL _valid;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid;                                            //@synthesize valid=_valid - In the implementation block
@property (setter=_setNotificationName:,nonatomic,retain) NSString * _notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
@property (setter=_setTarget:,nonatomic,retain) id _target;                                          //@synthesize target=_target - In the implementation block
@property (setter=_setDispatcher:,nonatomic,copy) id _dispatcher; 
+(unsigned long long)_safelyRegisterObserver:(id)arg1 ;
+(void)_safelyRemoveObserverForIdentifier:(unsigned long long)arg1 ;
+(id)_safelyGetObserverForIdentifier:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(BOOL)isValid;
-(id)_target;
-(void)_setTarget:(id)arg1 ;
-(void)_startObserving;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3 ;
-(void)processHandler:(SEL)arg1 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 startObserving:(BOOL)arg4 ;
-(void)_setNotificationName:(id)arg1 ;
-(void)_setDispatcher:(/*^block*/id)arg1 ;
-(id)_notificationTypeDescription;
-(NSString *)_notificationName;
-(void)_stopObserving;
-(id)_dispatcher;
-(void)_handleNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3 ;
@end

