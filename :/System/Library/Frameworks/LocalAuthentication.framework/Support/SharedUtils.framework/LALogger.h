/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LALogger : NSObject {

	BOOL _loggingEnabled;
	BOOL _logOriginator;

}

@property (getter=isLoggingEnabled,nonatomic,readonly) BOOL loggingEnabled;              //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL logOriginator;                                       //@synthesize logOriginator=_logOriginator - In the implementation block
+(id)sharedInstance;
-(BOOL)logOriginator;
-(void)dealloc;
-(id)init;
-(void)readPreferences;
-(BOOL)isLoggingEnabled;
@end

