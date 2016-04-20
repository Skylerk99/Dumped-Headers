/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/EDGESettings.bundle/EDGESettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EDGESettings/EDGESettings-Structs.h>
@interface LoggingControllerHelper : NSObject {

	BOOL _canCollectWifiLogs;
	BOOL _canCollectThumperLogs;

}
+(void)stopTcpDump;
+(void)startTcpDump;
+(void)enableVideoConfLogging:(BOOL)arg1 ;
+(void)enableWirelessRadioManagerLogging:(BOOL)arg1 ;
+(void)enableWifiLogging:(BOOL)arg1 ;
+(void)enablePhoneLogging:(BOOL)arg1 ;
+(void)enableNetworkExtensionsLog:(BOOL)arg1 ;
+(void)writePreference:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
+(void)enableiCloudLogging:(BOOL)arg1 ;
+(void)enableLocationLogging:(BOOL)arg1 ;
+(BOOL)readPreferenceForKey:(CFStringRef)arg1 ;
-(id)init;
-(BOOL)configureRecommendedLogging:(id)arg1 ;
-(void)collectLogs;
-(void)setCapabilityFlags;
-(BOOL)collectingWifiLogs;
-(BOOL)collectingThumperLogs;
@end

