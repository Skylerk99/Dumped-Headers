/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {

	NSLock* _lock;
	NSString* _hostname;
	SCNetworkReachabilityRef _reachability;
	unsigned _flags;
	CFDictionaryRef _observers;
	BOOL _isReachable;
	BOOL _receivedAtLeastOneCallback;

}

@property (assign,nonatomic) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
-(void)dealloc;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)reachabilityChangedWithFlags:(unsigned)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)hasObservers;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
@end

