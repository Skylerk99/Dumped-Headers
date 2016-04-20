/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNCancelable, CNObservable, CNScheduler;
@interface _CNThrottledObservable : CNObservable {

	double _interval;
	id<CNCancelable> _delayToken;
	id<CNObservable> _observable;
	id<CNScheduler> _scheduler;
	id _result;
	BOOL _hasResult;
	unsigned long long _resultCounter;

}
-(id)subscribe:(id)arg1 ;
-(void)dealloc;
-(void)_cancel;
-(void)_sendCompletionToObserver:(id)arg1 ;
-(void)_clearResult;
-(void)_setDelayToken:(id)arg1 ;
-(unsigned long long)_setResult:(id)arg1 ;
-(void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned long long)arg2 ;
-(id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3 ;
@end

