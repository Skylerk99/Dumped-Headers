/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSMTraceBuffer, NSDictionary;

@interface TSUQuickTestMeasurement : NSObject {

	TSMTraceBuffer* mBuffer;
	NSDictionary* mPrevious;

}
+(id)sharedManager;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(id)p_niceString:(unsigned long long)arg1 withPrefix:(id)arg2 ;
-(id)getPreviousTimeForKey:(id)arg1 ;
-(id)displayTime:(unsigned long long)arg1 forClassAndMethodName:(id)arg2 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setup;
-(void)teardown;
@end

