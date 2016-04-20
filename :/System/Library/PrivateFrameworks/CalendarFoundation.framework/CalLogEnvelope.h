/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CalLogEnvelope : NSObject {

	NSString* _logName;
	int _level;
	NSString* _message;
	int _processID;
	NSString* _processName;
	unsigned _machPort;
	double _timestamp;
	NSString* _function;

}

@property (nonatomic,retain) NSString * logName;                  //@synthesize logName=_logName - In the implementation block
@property (assign,nonatomic) int level;                           //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int processID;                       //@synthesize processID=_processID - In the implementation block
@property (nonatomic,retain) NSString * processName;              //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) unsigned machPort;                   //@synthesize machPort=_machPort - In the implementation block
@property (assign,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * function;                 //@synthesize function=_function - In the implementation block
-(void)setMachPort:(unsigned)arg1 ;
-(NSString *)function;
-(unsigned)machPort;
-(id)init;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(NSString *)message;
-(NSString *)processName;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithLogName:(id)arg1 level:(int)arg2 message:(id)arg3 ;
-(void)setProcessID:(int)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
-(int)processID;
-(void)setLogName:(NSString *)arg1 ;
-(NSString *)logName;
-(void)setProcessName:(NSString *)arg1 ;
@end

