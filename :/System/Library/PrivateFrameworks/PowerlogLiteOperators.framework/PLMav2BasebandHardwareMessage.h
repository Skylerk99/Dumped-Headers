/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogLiteOperators/PLBasebandHardwareMessage.h>

@interface PLMav2BasebandHardwareMessage : PLBasebandHardwareMessage {

	PLMav2BasebandHWStatsRX* _mav2_rx;
	PLMav2BasebandHWStatsTX* _mav2_tx;

}

@property (assign,nonatomic) PLMav2BasebandHWStatsRX* rx;              //@synthesize mav2_rx=_mav2_rx - In the implementation block
@property (assign,nonatomic) PLMav2BasebandHWStatsTX* tx;              //@synthesize mav2_tx=_mav2_tx - In the implementation block
-(void)parseData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setRx:(PLMav2BasebandHWStatsRX*)arg1 ;
-(void)setTx:(PLMav2BasebandHWStatsTX*)arg1 ;
-(void)logHeaderWithLogger:(id)arg1 ;
-(void)logRFWithLogger2:(id)arg1 ;
-(PLMav2BasebandHWStatsRX*)rx;
-(PLMav2BasebandHWStatsTX*)tx;
-(id)indexToRAT:(unsigned long long)arg1 ;
-(void)logWithLogger:(id)arg1 ;
@end

