/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebNetworkStateObserver : NSObject {

	const NetworkStateNotifier* _notifier;

}

@property (assign,nonatomic) const NetworkStateNotifier* notifier;              //@synthesize notifier=_notifier - In the implementation block
-(void)dealloc;
-(void)networkStateChanged:(id)arg1 ;
-(id)initWithNotifier:(const NetworkStateNotifier*)arg1 ;
-(const NetworkStateNotifier*)notifier;
-(void)setNotifier:(const NetworkStateNotifier*)arg1 ;
@end

