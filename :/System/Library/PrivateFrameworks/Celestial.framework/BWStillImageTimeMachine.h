/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWStillImageTimeMachine : NSObject {

	OpaqueFigSimpleMutexRef _timeMachineMutex;
	opaqueCMSampleBuffer* _frames;
	BOOL _suspended;
	int _capacity;

}

@property (nonatomic,readonly) int capacity;              //@synthesize capacity=_capacity - In the implementation block
+(void)initialize;
+(BOOL)afComplete:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(void)resume;
-(void)drain;
-(void)_drain;
-(void)suspendAndDrain;
-(int)insertFrame:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)copyBestFrame;
-(int)capacity;
@end

