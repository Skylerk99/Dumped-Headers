/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@class NSArray, NSMutableArray;

@interface _CNMergingObservable : CNObservable {

	NSArray* _observables;
	NSMutableArray* _remainingObservables;
	NSMutableArray* _cancelationTokens;

}
-(id)subscribe:(id)arg1 ;
-(void)dealloc;
-(id)initWithObservables:(id)arg1 ;
-(BOOL)observableIsLastToComplete:(id)arg1 ;
-(void)cancelRemainingObservables;
@end

