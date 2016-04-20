/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUProgress.h>

@protocol OS_dispatch_queue;
@class TSUProgressContext, NSObject;

@interface TSUProgressContextProgress : TSUProgress {

	TSUProgressContext* mProgressContext;
	NSObject*<OS_dispatch_queue> mProgressContextObserverQueue;
	BOOL hasAddedProgressContextObserver;

}
-(double)maxValue;
-(void)dealloc;
-(id)init;
-(double)value;
-(void)removeProgressObserver:(id)arg1 ;
-(BOOL)isIndeterminate;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithProgressContext:(id)arg1 ;
-(void)p_updateProgressContextObserver;
-(void)p_progressDidChange:(id)arg1 ;
@end

