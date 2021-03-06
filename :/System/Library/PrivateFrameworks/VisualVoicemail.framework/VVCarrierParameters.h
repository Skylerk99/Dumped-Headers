/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VVCarrierParameters : NSObject {

	NSDictionary* _parameterValues;

}
+(BOOL)supportsDetachedStorage;
+(id)carrierServiceName;
+(BOOL)supportsGreetingChanges;
+(BOOL)supportsPasswordChanges;
+(BOOL)ignoresRoamingSwitch;
+(id)messageNotificationFallbackTimeout;
+(id)retryIntervals;
-(id)parameterValueForKey:(id)arg1 ;
-(id)initForService:(id)arg1 ;
-(void)_initForBundle:(id)arg1 ;
-(id)initForServiceBundleId:(id)arg1 ;
@end

