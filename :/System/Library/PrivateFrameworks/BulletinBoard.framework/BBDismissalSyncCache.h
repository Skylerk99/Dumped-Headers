/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface BBDismissalSyncCache : NSObject {

	NSMutableDictionary* _cache;
	NSDate* _timeToCheck;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSDate * timeToCheck;                     //@synthesize timeToCheck=_timeToCheck - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)findBulletinMatch:(id)arg1 ;
-(void)removeBulletinMatch:(id)arg1 ;
-(void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 inSection:(id)arg3 forFeeds:(unsigned long long)arg4 ;
-(void)_checkCache;
-(NSDate *)timeToCheck;
-(BOOL)_isTimeToCheck;
-(void)setTimeToCheck:(NSDate *)arg1 ;
@end

