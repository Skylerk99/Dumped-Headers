/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSString, NSObject, GKThreadsafeDictionary, NSError;

@interface GKDispatchGroup : NSObject {

	NSString* _name;
	NSObject*<OS_dispatch_group> _group;
	GKThreadsafeDictionary* _values;
	NSError* _error;
	id result;
	int _sequence;
	BOOL _loggingEnabled;
	id _result;

}

@property (retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (retain) id result;                                                          //@synthesize result=_result - In the implementation block
@property (assign,getter=isLoggingEnabled,nonatomic) BOOL loggingEnabled;              //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
@property (assign) NSObject*<OS_dispatch_group> group;                                 //@synthesize group=_group - In the implementation block
+(id)mainQueue;
+(id)dispatchGroupWithName:(id)arg1 ;
+(id)defaultConcurrentQueue;
+(void)waitUntilDone:(/*^block*/id)arg1 ;
+(id)backgroundConcurrentQueue;
+(id)dispatchGroup;
-(void)enter;
-(NSError *)error;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)perform:(/*^block*/id)arg1 ;
-(id)allValues;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(id)initWithName:(id)arg1 ;
-(id)result;
-(id)_values;
-(void)leave;
-(void)notifyOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_waitWithDispatchTimeout:(unsigned long long)arg1 ;
-(void)waitWithTimeout:(double)arg1 ;
-(void)join:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isLoggingEnabled;
-(void)notifyOnMainQueueWithBlock:(/*^block*/id)arg1 ;
-(void)wait;
-(void)setError:(NSError *)arg1 ;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(void)setResult:(id)arg1 ;
@end

