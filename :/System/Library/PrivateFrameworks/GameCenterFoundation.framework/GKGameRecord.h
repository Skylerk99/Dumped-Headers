/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKGame.h>

@class GKPlayer, GKGameRecordInternal, NSDate, NSString;

@interface GKGameRecord : GKGame {

	GKPlayer* _player;

}

@property (retain,readonly) GKGameRecordInternal * internal; 
@property (nonatomic,retain) GKPlayer * player;                                         //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) BOOL played; 
@property (nonatomic,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) NSDate * purchaseDate; 
@property (nonatomic,readonly) BOOL supportsAchievements; 
@property (nonatomic,readonly) unsigned long long achievements; 
@property (nonatomic,readonly) unsigned long long maxAchievements; 
@property (nonatomic,readonly) unsigned long long achievementPoints; 
@property (nonatomic,readonly) unsigned long long maxAchievementPoints; 
@property (nonatomic,readonly) BOOL supportsLeaderboards; 
@property (nonatomic,readonly) unsigned long long numberOfLeaderboards; 
@property (nonatomic,readonly) unsigned long long numberOfCategories; 
@property (nonatomic,readonly) unsigned long long rank; 
@property (nonatomic,readonly) unsigned long long maxRank; 
@property (nonatomic,readonly) unsigned long long friendRank; 
@property (nonatomic,readonly) unsigned long long maxFriendRank; 
@property (nonatomic,readonly) BOOL supportsLeaderboardSets; 
@property (nonatomic,readonly) unsigned long long numberOfLeaderboardSets; 
@property (nonatomic,readonly) NSString * defaultLeaderboardIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)internalRepresentationCache;
+(id)cacheKeyForPlayer:(id)arg1 game:(id)arg2 ;
+(id)internalRepresentationForPlayer:(id)arg1 game:(id)arg2 ;
+(void)loadGameRecordsForPlayer:(id)arg1 games:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)partitionGameRecords:(id)arg1 returniOS:(id*)arg2 returnMac:(id*)arg3 ;
+(id)cacheKeyForPlayer:(id)arg1 internal:(id)arg2 ;
+(void)invalidateCaches;
+(id)gameRecordForPlayer:(id)arg1 game:(id)arg2 ;
+(void)loadGameRecordForPlayer:(id)arg1 game:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 player:(id)arg2 ;
-(BOOL)played;
@end

