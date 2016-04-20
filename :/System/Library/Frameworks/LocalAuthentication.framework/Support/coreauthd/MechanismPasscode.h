/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <coreauthd/MechanismPassphrase.h>

@class NSNumber, BackoffCounter;

@interface MechanismPasscode : MechanismPassphrase {

	unsigned long long _failures;
	NSNumber* _failureLimit;
	BackoffCounter* _backoffCounter;

}
-(BOOL)isAvailableWithError:(id*)arg1 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)enterPassphrase:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
@end

