/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate, NSTimer, ICCloudThrottlingLevel;

@interface ICCloudThrottlingPolicy : NSObject {

	NSArray* _throttlingLevels;
	double _resetInterval;
	unsigned long long _currentBatchCount;
	unsigned long long _currentLevelIndex;
	NSDate* _policyStartDate;
	NSTimer* _policyResetTimer;

}

@property (nonatomic,readonly) double batchInterval; 
@property (nonatomic,retain) NSArray * throttlingLevels;                           //@synthesize throttlingLevels=_throttlingLevels - In the implementation block
@property (assign,nonatomic) double resetInterval;                                 //@synthesize resetInterval=_resetInterval - In the implementation block
@property (assign,nonatomic) unsigned long long currentBatchCount;                 //@synthesize currentBatchCount=_currentBatchCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentLevelIndex;                 //@synthesize currentLevelIndex=_currentLevelIndex - In the implementation block
@property (nonatomic,readonly) ICCloudThrottlingLevel * currentLevel; 
@property (nonatomic,retain) NSDate * policyStartDate;                             //@synthesize policyStartDate=_policyStartDate - In the implementation block
@property (nonatomic,retain) NSTimer * policyResetTimer;                           //@synthesize policyResetTimer=_policyResetTimer - In the implementation block
+(void)resetSavedPolicyState;
-(void)dealloc;
-(id)init;
-(id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2 ;
-(void)setThrottlingLevels:(NSArray *)arg1 ;
-(void)setResetInterval:(double)arg1 ;
-(void)loadSavedPolicyState;
-(NSDate *)policyStartDate;
-(double)resetInterval;
-(void)resetPolicy;
-(void)startPolicyResetTimer;
-(void)savePolicyState;
-(void)setCurrentBatchCount:(unsigned long long)arg1 ;
-(ICCloudThrottlingLevel *)currentLevel;
-(unsigned long long)currentLevelIndex;
-(NSArray *)throttlingLevels;
-(void)changeLevelIfNecessary;
-(void)setCurrentLevelIndex:(unsigned long long)arg1 ;
-(double)batchInterval;
-(void)setPolicyStartDate:(NSDate *)arg1 ;
-(NSTimer *)policyResetTimer;
-(void)setPolicyResetTimer:(NSTimer *)arg1 ;
-(void)incrementBatchCount;
-(unsigned long long)currentBatchCount;
@end

