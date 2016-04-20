/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSData;

@interface MPPlaybackContext : NSObject <NSCoding> {

	BOOL _shouldStartPlayback;
	BOOL _shouldRestartPlayback;
	long long _startIndex;
	unsigned long long _shuffleType;
	unsigned long long _repeatType;

}

@property (setter=mpuReporting_setFeatureName:,nonatomic,copy) NSString * mpuReporting_featureName; 
@property (setter=mpuReporting_setRecommendationData:,nonatomic,copy) NSData * mpuReporting_recommendationData; 
@property (assign,nonatomic) long long startIndex;                                                                           //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL shouldStartPlayback;                                                                       //@synthesize shouldStartPlayback=_shouldStartPlayback - In the implementation block
@property (assign,nonatomic) BOOL shouldRestartPlayback;                                                                     //@synthesize shouldRestartPlayback=_shouldRestartPlayback - In the implementation block
@property (assign,nonatomic) unsigned long long shuffleType;                                                                 //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) unsigned long long repeatType;                                                                  //@synthesize repeatType=_repeatType - In the implementation block
+(Class)queueFeederClass;
-(void)mpuReporting_setRecommendationData:(id)arg1 ;
-(void)mpuReporting_setFeatureName:(id)arg1 ;
-(NSString *)mpuReporting_featureName;
-(NSData *)mpuReporting_recommendationData;
-(void)setShouldStartPlayback:(BOOL)arg1 ;
-(unsigned long long)repeatType;
-(unsigned long long)shuffleType;
-(void)setRepeatType:(unsigned long long)arg1 ;
-(void)setShuffleType:(unsigned long long)arg1 ;
-(BOOL)shouldStartPlayback;
-(BOOL)shouldRestartPlayback;
-(id)descriptionComponents;
-(void)setShouldRestartPlayback:(BOOL)arg1 ;
-(void)setStartIndex:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(long long)startIndex;
@end

