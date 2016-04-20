/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVPingTest : NSObject {

	NSString* ipAsString;
	BOOL usingWifi;
	NSString* interfaceNameToTest;
	float min;
	float max;
	float avg;
	float stddev;
	float packetLossRate;
	long long lastReturnedError;

}

@property (nonatomic,readonly) BOOL usingWifi; 
@property (nonatomic,readonly) float min; 
@property (nonatomic,readonly) float max; 
@property (nonatomic,readonly) float avg; 
@property (nonatomic,readonly) float stddev; 
@property (nonatomic,readonly) float packetLossRate; 
-(long long)parseResults:(char*)arg1 secondLastLine:(char*)arg2 ;
-(BOOL)parsePingLineForBadInterface:(char*)arg1 ;
-(BOOL)parsePingLineForBadCommand:(char*)arg1 ;
-(BOOL)parsePingLineForPLR:(char*)arg1 ;
-(BOOL)parsePingLineForLatencyStats:(char*)arg1 ;
-(float)max;
-(float)min;
-(void)dealloc;
-(id)description;
-(long long)start;
-(float)packetLossRate;
-(void)calculateInterfaceName;
-(id)initWithIPAsString:(id)arg1 usingWifi:(BOOL)arg2 ;
-(BOOL)usingWifi;
-(float)avg;
-(float)stddev;
@end

