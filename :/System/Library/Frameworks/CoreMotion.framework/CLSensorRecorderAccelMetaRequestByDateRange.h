/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderAccelMetaRequestByDateRange : NSObject <NSSecureCoding> {

	double _startTime;
	double _endTime;

}

@property (assign) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
@end

