/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class CNWeakReference;

@interface CNWeakProxy : NSProxy {

	Class _targetClass;
	CNWeakReference* _weakReference;

}
+(id)weakProxyWithObject:(id)arg1 ;
-(Class)class;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
@end

