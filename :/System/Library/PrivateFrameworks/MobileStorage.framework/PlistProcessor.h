/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PlistProcessor : NSObject
+(id)sharedPlistProcessor;
-(void)scanPlistsAtPath:(id)arg1 execBlock:(/*^block*/id)arg2 ;
-(id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2 ;
-(BOOL)verifyPlist:(id)arg1 forMountPoint:(id)arg2 ;
@end

