/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIAsyncInvocationObserver;

@interface _UIAsyncInvocation : NSObject {

	_UIAsyncInvocationObserver* _observer;
	/*^block*/id _invocationBlock;
	BOOL _invocationBlockHasBeenCalled;

}
+(id)invocationWithBlock:(/*^block*/id)arg1 ;
+(id)emptyInvocation;
-(id)invoke;
@end

