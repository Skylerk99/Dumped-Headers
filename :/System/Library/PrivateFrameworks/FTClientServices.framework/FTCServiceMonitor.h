/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FTCServiceMonitor : NSObject {

	long long _availability;
	long long _type;
	int _token;

}

@property (nonatomic,readonly) long long serviceType; 
-(void)_updateAvailability;
-(id)initWithServiceType:(long long)arg1 ;
-(void)dealloc;
-(long long)serviceType;
-(long long)serviceAvailability;
-(void)updateAvailability;
-(void)_postAvailability:(long long)arg1 ;
-(void)handleActiveAccountsChanged:(id)arg1 ;
@end

