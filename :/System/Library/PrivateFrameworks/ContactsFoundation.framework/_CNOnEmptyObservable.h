/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@interface _CNOnEmptyObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNObservable> _nextObservable;
	BOOL _observableIsEmpty;

}
-(id)subscribe:(id)arg1 ;
-(void)dealloc;
-(id)initWithObservable:(id)arg1 nextObservable:(id)arg2 ;
-(void)observableDidSendResult;
-(BOOL)isObservableEmpty;
-(id)subscribeNextObservable:(id)arg1 ;
@end

