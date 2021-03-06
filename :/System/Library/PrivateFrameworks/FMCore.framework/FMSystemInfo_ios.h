/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMCore-Structs.h>
#import <FMCore/FMSystemInfo.h>

@interface FMSystemInfo_ios : FMSystemInfo
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(id)deviceClass;
-(id)deviceName;
-(BOOL)_boolDeviceInfoForKey:(CFStringRef)arg1 ;
-(id)deviceUDID;
-(id)deviceModelName;
-(id)imei;
-(id)meid;
-(BOOL)isDeviceSecured;
-(id)ownerAccount;
-(void)authTokenOfType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isInternalBuild;
-(id)osVersion;
-(id)productType;
-(id)osBuildVersion;
-(id)serialNumber;
-(id)productName;
@end

