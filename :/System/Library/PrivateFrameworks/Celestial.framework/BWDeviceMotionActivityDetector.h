/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject {

	BWMotionSampleRingBuffer* _motionDataRingBuffer;
	OpaqueFigSimpleMutexRef _ringMutex;
	BOOL _stationary;
	BOOL _newMotionDataAvailable;

}

@property (getter=isStationary,nonatomic,readonly) BOOL stationary; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_detectIfStationary;
-(BOOL)isStationary;
@end

