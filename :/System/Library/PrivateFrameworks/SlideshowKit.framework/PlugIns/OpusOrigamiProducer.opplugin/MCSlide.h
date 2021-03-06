/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCFilterSupport.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>

@class NSSet, NSArray, NSMutableDictionary, NSMutableSet, MCPlugSlide, MCSong, NSString, MCContainerEffect, MCAssetVideo, NSDictionary;

@interface MCSlide : MCObject <MCFilterSupport, MCAnimationPathSupport> {

	id* mSlideAsset;
	NSMutableDictionary* mFrameAttributes;
	NSMutableSet* mAnimationPaths;
	NSMutableSet* mFilters;
	NSArray* mCachedOrderedFilters;
	unsigned long long mFlags;
	float mAudioVolume;
	float mAudioDuckLevel;
	MCPlugSlide* mPlug;
	MCSong* mSong;
	unsigned long long mIndex;
	double mAudioFadeInDuration;
	double mAudioFadeOutDuration;
	double mAudioDuckInDuration;
	double mAudioDuckOutDuration;
	double mStartTime;
	double mDuration;
	NSString* mFrameID;
	MCContainerEffect* mContainer;

}

@property (readonly) NSSet * filters; 
@property (readonly) NSArray * orderedFilters; 
@property (nonatomic,readonly) unsigned long long countOfFilters; 
@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (retain) MCAssetVideo * asset; 
@property (retain) MCPlugSlide * plug; 
@property (readonly) MCSong * song; 
@property (assign,nonatomic) unsigned long long index; 
@property (assign,nonatomic) float audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) float audioDuckLevel; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (readonly) BOOL startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (readonly) BOOL durationIsDefined; 
@property (assign,nonatomic) double duration; 
@property (copy) NSString * frameID; 
@property (copy) NSDictionary * frameAttributes; 
@property (copy) NSString * kenBurnsType; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
@property (assign) MCContainerEffect * container; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (readonly) unsigned char countOfLayouts; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)addFilterWithFilterID:(id)arg1 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)removeAllFilters;
-(void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)initFiltersWithImprints:(id)arg1 ;
-(void)unobserveFilter:(id)arg1 ;
-(id)imprintsForFilters;
-(unsigned long long)countOfFilters;
-(void)demolishFilters;
-(void)observeFilter:(id)arg1 ;
-(id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSArray *)orderedFilters;
-(NSSet *)filters;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(unsigned long long)countOfAnimationPaths;
-(void)removeAllAnimationPaths;
-(void)addAnimationPath:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(NSSet *)animationPaths;
-(void)setKenBurnsType:(NSString *)arg1 ;
-(unsigned char)currentLayoutIndex;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)undefineStartTime;
-(double)audioDuckOutDuration;
-(void)undefineDuration;
-(void)setAudioDuckLevel:(float)arg1 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(double)audioFadeInDuration;
-(BOOL)startTimeIsDefined;
-(double)audioDuckInDuration;
-(BOOL)durationIsDefined;
-(unsigned char)countOfLayouts;
-(NSDictionary *)frameAttributes;
-(NSString *)kenBurnsType;
-(NSString *)frameID;
-(float)audioDuckLevel;
-(void)setFrameID:(NSString *)arg1 ;
-(void)setPlug:(MCPlugSlide *)arg1 ;
-(MCPlugSlide *)plug;
-(void)demolish;
-(void)setSongForAsset:(id)arg1 ;
-(void)setFrameAttributes:(NSDictionary *)arg1 ;
-(id)frameAttributeForKey:(id)arg1 ;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(MCContainerEffect *)container;
-(void)setContainer:(MCContainerEffect *)arg1 ;
-(unsigned long long)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(MCAssetVideo *)asset;
-(double)startTime;
-(void)setAsset:(MCAssetVideo *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)imprint;
-(MCSong *)song;
-(double)audioFadeOutDuration;
-(void)setAudioVolume:(float)arg1 ;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(float)audioVolume;
@end

