/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, CarrierBundlingEligibilityResponse;

@interface CarrierBundlingEligibilityOperation : ISOperation {

	NSString* _cellularProviderName;
	BOOL _deepLink;
	CarrierBundlingEligibilityResponse* _eligibilityResponse;
	NSString* _mobileSubscriberCountryCode;
	NSString* _mobileSubscriberNetworkCode;
	NSString* _phoneNumber;

}

@property (getter=isDeepLink) BOOL deepLink; 
@property (copy,readonly) NSString * cellularProviderName; 
@property (readonly) CarrierBundlingEligibilityResponse * eligibilityResponse; 
@property (copy,readonly) NSString * mobileSubscriberCountryCode; 
@property (copy,readonly) NSString * mobileSubscriberNetworkCode; 
@property (copy,readonly) NSString * phoneNumber; 
-(void)setDeepLink:(BOOL)arg1 ;
-(NSString *)cellularProviderName;
-(id)_sendPreflightRequest:(id*)arg1 ;
-(void)_sendEnrichmentRequestWithPreflightResponse:(id)arg1 outputBlock:(/*^block*/id)arg2 ;
-(id)_newDefaultRequestBodyDictionary;
-(BOOL)isDeepLink;
-(void)_finishEnrichmentWithSessionID:(id)arg1 carrierResponse:(id)arg2 URLResponse:(id)arg3 outputBlock:(/*^block*/id)arg4 ;
-(CarrierBundlingEligibilityResponse *)eligibilityResponse;
-(void)run;
-(NSString *)phoneNumber;
-(NSString *)mobileSubscriberCountryCode;
-(NSString *)mobileSubscriberNetworkCode;
@end

