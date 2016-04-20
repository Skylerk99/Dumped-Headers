/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _regionSupportsPaymentRegistrationInitialized;
	BOOL _regionSupportsPaymentRegistration;

}
+(id)sharedCapabilities;
-(void)dealloc;
-(id)init;
-(void)localeChanged:(id)arg1 ;
-(BOOL)isAppleTV;
-(void)getRegionSupportsPaymentRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)supportsApplePay;
@end

