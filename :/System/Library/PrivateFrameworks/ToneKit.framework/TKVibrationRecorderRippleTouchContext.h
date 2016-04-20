/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ToneKit/ToneKit-Structs.h>
@interface TKVibrationRecorderRippleTouchContext : NSObject {

	double _creationTimestamp;
	CGPoint _location;

}

@property (nonatomic,readonly) CGPoint location; 
@property (assign,setter=_setCreationTimestamp:,nonatomic) double _creationTimestamp;              //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (assign,setter=_setLocation:,nonatomic) CGPoint _location;                               //@synthesize location=_location - In the implementation block
-(id)init;
-(void)reset;
-(CGPoint)location;
-(double)_creationTimestamp;
-(void)_setCreationTimestamp:(double)arg1 ;
-(double)timeIntervalSinceCreation;
-(void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(CGPoint)arg2 ;
-(CGPoint)_location;
-(void)_setLocation:(CGPoint)arg1 ;
@end

