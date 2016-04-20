/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWIrisStagingNodeUpdateStopPTSDelegate;
@class NSURL, NSMutableArray, FigIrisAutoTrimmer, BWIrisSequenceAdjuster;

@interface BWIrisStagingNode : BWNode {

	SCD_Struct_BW2 _bufferingTime;
	SCD_Struct_BW2 _targetFrameDuration;
	SCD_Struct_BW2 _beginIrisMovieCaptureTime;
	SCD_Struct_BW2 _endIrisMovieCaptureTime;
	SCD_Struct_BW2 _nextTargetFramePTS;
	SCD_Struct_BW2 _lastEmittedVideoPTS;
	SCD_Struct_BW2 _lastProcessedVideoPTS;
	SCD_Struct_BW2 _masterMovieStartPTS;
	NSURL* _masterMovieURL;
	NSMutableArray* _stagingQueues;
	NSMutableArray* _lastEmittedBuffers;
	BOOL _valveOpen;
	BOOL _valveDraining;
	NSMutableArray* _irisRequestsInFlight;
	int _emittedIrisRequestCount;
	OpaqueFigSimpleMutexRef _stateMutex;
	SCD_Struct_BW2* _firstEmittedPTSArray;
	OpaqueCMClockRef _masterClock;
	int _trimMethod;
	FigIrisAutoTrimmer* _trimmer;
	SCD_Struct_BW2 _firstTrimStartPTS;
	id<BWIrisStagingNodeUpdateStopPTSDelegate> _delegate;
	BWIrisSequenceAdjuster* _sequenceAdjuster;
	int _numEODMessagesReceived;

}

@property (assign) SCD_Struct_BW2 beginIrisMovieCaptureTime; 
@property (assign) SCD_Struct_BW2 endIrisMovieCaptureTime; 
+(void)initialize;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)dealloc;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(BOOL)closeValve;
-(SCD_Struct_BW2)bufferingTime;
-(BOOL)openValveWithIrisRequest:(id)arg1 ;
-(BOOL)enqueueIrisRequest:(id)arg1 ;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 autoTrimMethod:(int)arg4 updateStopPTSDelegate:(id)arg5 ;
-(void)setBufferingTime:(SCD_Struct_BW2)arg1 ;
-(void)setTargetFrameDuration:(SCD_Struct_BW2)arg1 ;
-(void)setBeginIrisMovieCaptureTime:(SCD_Struct_BW2)arg1 ;
-(void)setEndIrisMovieCaptureTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)targetFrameDuration;
-(void)_serviceIrisRequestsForCurrentTime:(SCD_Struct_BW2)arg1 emitBuffers:(BOOL)arg2 ;
-(void)_emitIrisRequest:(id)arg1 withEndTime:(SCD_Struct_BW2)arg2 ;
-(void)_emitBuffersThroughPTS:(SCD_Struct_BW2)arg1 ;
-(void)_trimQueueForInputIndex:(unsigned long long)arg1 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_enqueueIrisRequest:(id)arg1 ;
-(void)_updateRetainedBufferCount;
-(void)_emitBuffersThroughPTS:(SCD_Struct_BW2)arg1 forInputIndex:(unsigned long long)arg2 ;
-(int)_emissionStatusForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_sendUpdateStopPTS:(SCD_Struct_BW2)arg1 ;
-(unsigned long long)_indexOfBufferBeforeOrEqualToPTS:(SCD_Struct_BW2)arg1 inputIndex:(unsigned long long)arg2 ;
-(BOOL)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg1 ;
-(void)_prepareToEmitFramesFromStartTime:(SCD_Struct_BW2)arg1 throughEndTime:(SCD_Struct_BW2)arg2 ;
-(BOOL)_fillInRefMovieStartAndTrimTimes;
-(void)_processQueuedVideoFrames;
-(SCD_Struct_BW2)beginIrisMovieCaptureTime;
-(SCD_Struct_BW2)endIrisMovieCaptureTime;
@end

