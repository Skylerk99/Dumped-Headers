/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@interface PLInstrumentedBlockOperation : NSBlockOperation {

	BOOL _postambleAdded;
	double _creationTime;
	double _executionStartTime;
	double _executionEndTime;

}

@property (nonatomic,readonly) double timeSpentWaitingInQueue; 
@property (nonatomic,readonly) double executionTime; 
@property (assign,nonatomic) double creationTime;                           //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) double executionStartTime;                     //@synthesize executionStartTime=_executionStartTime - In the implementation block
@property (assign,nonatomic) double executionEndTime;                       //@synthesize executionEndTime=_executionEndTime - In the implementation block
@property (assign,nonatomic) BOOL postambleAdded;                           //@synthesize postambleAdded=_postambleAdded - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)description;
-(void)setCreationTime:(double)arg1 ;
-(void)setExecutionStartTime:(double)arg1 ;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(BOOL)postambleAdded;
-(void)setExecutionEndTime:(double)arg1 ;
-(void)setPostambleAdded:(BOOL)arg1 ;
-(double)executionTime;
-(double)timeSpentWaitingInQueue;
-(double)executionStartTime;
-(double)executionEndTime;
-(double)creationTime;
@end

