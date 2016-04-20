/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress, TSUProgressContext, TSUBasicProgress;

@interface TSUNSProgressObserver : NSObject {

	NSProgress* _nsProgress;
	TSUProgressContext* _progressContext;
	TSUBasicProgress* _basicProgress;
	double _basicProgressMaxValue;
	BOOL _didStart;

}
+(id)observerForNSProgress:(id)arg1 reportingToProgressContext:(id)arg2 ;
+(id)observerForNSProgress:(id)arg1 reportingToBasicProgress:(id)arg2 maxValue:(double)arg3 ;
-(id)initWithNSProgress:(id)arg1 progressContext:(id)arg2 basicProgress:(id)arg3 basicProgressMaxValue:(double)arg4 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

