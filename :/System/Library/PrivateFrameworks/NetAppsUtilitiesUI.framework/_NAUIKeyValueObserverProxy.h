/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilitiesUI/_NAUIObserverProxy.h>

@class NSString;

@interface _NAUIKeyValueObserverProxy : _NAUIObserverProxy {

	BOOL _isObserving;
	/*^block*/id _observerBlock;
	id _observedObject;
	NSString* _keyPath;

}

@property (nonatomic,copy,readonly) id observerBlock;                 //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,__weak,readonly) id observedObject;              //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;               //@synthesize keyPath=_keyPath - In the implementation block
-(void)invalidate;
-(NSString *)keyPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)observedObject;
-(id)initWithWeakObserver:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 observerBlock:(/*^block*/id)arg5 ;
-(id)observerBlock;
@end

