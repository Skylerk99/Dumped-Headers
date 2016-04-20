/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKTurnBasedParticipantInternal, GKPlayer, NSDate, NSString;

@interface GKTurnBasedParticipant : NSObject {

	GKTurnBasedParticipantInternal* _internal;

}

@property (nonatomic,retain,readonly) GKPlayer * player; 
@property (nonatomic,copy) NSDate * lastTurnDate; 
@property (nonatomic,readonly) long long status; 
@property (assign,nonatomic) long long matchOutcome; 
@property (nonatomic,copy) NSDate * timeoutDate; 
@property (nonatomic,copy,readonly) NSString * playerID; 
@property (nonatomic,readonly) NSString * matchStatusString; 
@property (nonatomic,readonly) NSString * matchOutcomeString; 
@property (nonatomic,readonly) BOOL isWinner; 
@property (nonatomic,readonly) GKPlayer * invitedBy; 
@property (nonatomic,readonly) NSString * inviteMessage; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (retain,readonly) GKTurnBasedParticipantInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)stringForMatchOutcome:(long long)arg1 ;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+(id)keyPathsForValuesAffectingMatchOutcomeString;
+(BOOL)matchOutcomeIsValidForDoneState:(long long)arg1 ;
-(GKPlayer *)player;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)basicMatchOutcomeString;
-(BOOL)isWinner;
-(NSString *)playerID;
-(BOOL)isLocalPlayer;
-(GKTurnBasedParticipantInternal *)internal;
-(GKPlayer *)invitedBy;
-(NSDate *)lastTurnDate;
-(NSString *)matchOutcomeString;
-(NSString *)matchStatusString;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

