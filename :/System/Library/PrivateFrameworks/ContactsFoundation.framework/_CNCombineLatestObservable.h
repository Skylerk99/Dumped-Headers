/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@class NSMutableArray, NSArray;

@interface _CNCombineLatestObservable : CNObservable {

	NSMutableArray* _observables;
	NSMutableArray* _results;
	NSMutableArray* _tokens;
	NSMutableArray* _isSequenceActive;

}

@property (nonatomic,readonly) NSArray * observables;                          //@synthesize observables=_observables - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                       //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tokens;                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSMutableArray * isSequenceActive;              //@synthesize isSequenceActive=_isSequenceActive - In the implementation block
-(id)subscribe:(id)arg1 ;
-(void)dealloc;
-(NSMutableArray *)tokens;
-(NSMutableArray *)results;
-(id)initWithObservables:(id)arg1 ;
-(NSArray *)observables;
-(void)observableAtIndex:(unsigned long long)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3 ;
-(void)observableAtIndexDidComplete:(unsigned long long)arg1 forObserver:(id)arg2 ;
-(void)observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3 ;
-(NSMutableArray *)isSequenceActive;
@end

