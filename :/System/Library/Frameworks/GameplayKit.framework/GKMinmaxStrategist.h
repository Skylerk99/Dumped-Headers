/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKMinmaxStrategist : NSObject {

	GKCMinmaxStrategist* _cppMinmax;

}

@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (assign,nonatomic) long long maxLookAheadDepth; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
-(id<GKGameModel>)gameModel;
-(long long)maxLookAheadDepth;
-(void)setMaxLookAheadDepth:(long long)arg1 ;
-(void)setGameModel:(id<GKGameModel>)arg1 ;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id<GKRandom>)arg1 ;
-(id)bestMoveForPlayer:(id)arg1 ;
-(id)randomMoveForPlayer:(id)arg1 fromNumberOfBestMoves:(long long)arg2 ;
-(void)dealloc;
-(id)init;
@end

