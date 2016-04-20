/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDServer;
@class _HKWorkoutSession, NSString;

@interface _HDWorkoutData : NSObject {

	BOOL _isFirstParty;
	_HKWorkoutSession* _workoutSession;
	NSString* _clientIdentifier;
	id<HDServer> _server;

}

@property (nonatomic,retain) _HKWorkoutSession * workoutSession;              //@synthesize workoutSession=_workoutSession - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HDServer> server;                      //@synthesize server=_server - In the implementation block
@property (assign,nonatomic) BOOL isFirstParty;                               //@synthesize isFirstParty=_isFirstParty - In the implementation block
-(id<HDServer>)server;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)initWithWorkoutSession:(id)arg1 clientIdentifier:(id)arg2 server:(id)arg3 isFirstParty:(BOOL)arg4 ;
-(void)deliverError:(id)arg1 ;
-(void)deliverChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 ;
-(_HKWorkoutSession *)workoutSession;
-(void)setWorkoutSession:(_HKWorkoutSession *)arg1 ;
-(void)setServer:(id<HDServer>)arg1 ;
-(BOOL)isFirstParty;
-(void)setIsFirstParty:(BOOL)arg1 ;
-(NSString *)clientIdentifier;
@end

