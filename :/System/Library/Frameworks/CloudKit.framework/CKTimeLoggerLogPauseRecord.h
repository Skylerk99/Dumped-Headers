/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKTimeLoggerLogPauseRecord : NSObject {

	double _time;
	NSString* _message;

}

@property (assign,nonatomic) double time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
-(NSString *)message;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)setMessage:(NSString *)arg1 ;
@end

