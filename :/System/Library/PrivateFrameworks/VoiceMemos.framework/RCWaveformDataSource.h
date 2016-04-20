/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/RCWaveformGeneratorSegmentOutputObserver.h>

@protocol OS_dispatch_queue;
@class RCMutableWaveform, NSObject, RCWaveformGenerator, NSURL, NSHashTable, RCWaveform, NSString;

@interface RCWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver> {

	RCMutableWaveform* _accumulatorWaveform;
	BOOL _hasStartedLoading;
	BOOL _hasSavedGeneratedWaveform;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	RCWaveformGenerator* _waveformGenerator;
	NSURL* _generatedWaveformOutputURL;
	NSHashTable* _weakObservers;

}

@property (nonatomic,readonly) RCWaveform * accumulatorWaveform;                        //@synthesize accumulatorWaveform=_accumulatorWaveform - In the implementation block
@property (nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) BOOL canceled; 
@property (nonatomic,readonly) float loadingProgress; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) SCD_Struct_RC4 timeRangeToHighlight; 
@property (nonatomic,readonly) double averagePowerLevelsRate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,readonly) RCWaveformGenerator * waveformGenerator;                 //@synthesize waveformGenerator=_waveformGenerator - In the implementation block
@property (nonatomic,readonly) NSURL * generatedWaveformOutputURL;                      //@synthesize generatedWaveformOutputURL=_generatedWaveformOutputURL - In the implementation block
@property (nonatomic,readonly) NSHashTable * weakObservers;                             //@synthesize weakObservers=_weakObservers - In the implementation block
@property (nonatomic,readonly) BOOL hasStartedLoading;                                  //@synthesize hasStartedLoading=_hasStartedLoading - In the implementation block
@property (nonatomic,readonly) BOOL hasSavedGeneratedWaveform;                          //@synthesize hasSavedGeneratedWaveform=_hasSavedGeneratedWaveform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)waitUntilFinished;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)finished;
-(void)dealloc;
-(double)duration;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)setPaused:(BOOL)arg1 ;
-(void)beginLoading;
-(BOOL)canceled;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(float)loadingProgress;
-(void)waveformGeneratorWillBeginLoading:(id)arg1 ;
-(void)_performObserversBlock:(/*^block*/id)arg1 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSURL *)generatedWaveformOutputURL;
-(RCWaveformGenerator *)waveformGenerator;
-(void)_performOnObserversBlock:(/*^block*/id)arg1 ;
-(RCWaveform *)accumulatorWaveform;
-(double)averagePowerLevelsRate;
-(id)saveableWaveform;
-(void)saveGeneratedWaveformIfNecessary;
-(id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1 ;
-(id)initWithWaveformGenerator:(id)arg1 generatedWaveformOutputURL:(id)arg2 ;
-(SCD_Struct_RC4)timeRangeToHighlight;
-(id)waveformSegmentsInTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)updateAccumulatorWaveformSegmentsWithBlock:(/*^block*/id)arg1 ;
-(NSHashTable *)weakObservers;
-(BOOL)hasStartedLoading;
-(BOOL)hasSavedGeneratedWaveform;
@end

