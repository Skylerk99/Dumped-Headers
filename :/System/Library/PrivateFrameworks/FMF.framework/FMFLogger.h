/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMLoggerDelegate.h>

@class NSString;

@interface FMFLogger : NSObject <FMLoggerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)logAtLevel:(unsigned)arg1 facility:(id)arg2 path:(const char*)arg3 lineNumber:(long long)arg4 function:(const char*)arg5 message:(id)arg6 ;
@end

