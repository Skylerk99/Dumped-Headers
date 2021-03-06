/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPFilterSupport.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>

@protocol MPEffectSupport;
@class MPFrame, NSMutableDictionary, NSString, MPLayerGroup, NSMutableArray, MCSlide, NSObject;

@interface MPSlide : NSObject <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport> {

	MPFrame* _frame;
	NSMutableDictionary* _attributes;
	NSString* _path;
	MPLayerGroup* _layerGroup;
	NSMutableArray* _filters;
	NSMutableDictionary* _animationPaths;
	MCSlide* _slide;
	NSObject*<MPEffectSupport> _parent;
	double _startTime;
	double _duration;
	double _audioFadeInDuration;
	double _audioFadeOutDuration;
	double _audioDuckInDuration;
	double _audioDuckOutDuration;
	double _audioDuckLevel;
	double _scale;
	double _rotation;
	CGPoint _center;
	double _audioVolume;
	NSString* _sizingMode;
	unsigned long long _mediaType;
	BOOL _isSecondary;
	BOOL _mirrorToDuplicatePaths;
	double _cachedShowTime;
	double _cachedShowDuration;
	CGSize _cachedSize;

}

@property (nonatomic,retain) MPFrame * frame; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSString * absolutePath; 
@property (nonatomic,retain) MPLayerGroup * layerGroup; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (assign,nonatomic) double audioDuckLevel; 
@property (nonatomic,copy) NSString * sizingMode; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
+(id)slideWithPath:(id)arg1 ;
+(id)slide;
-(id)scriptingAnimations;
-(id)objectInFilterAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFilterAtIndex:(long long)arg2 ;
-(void)removeObjectFromFilterAtIndex:(long long)arg1 ;
-(void)setScriptingAnimations:(id)arg1 ;
-(void)setScriptingFrame:(id)arg1 ;
-(id)scriptingFrame;
-(long long)countOfFilter;
-(void)replaceObjectInFilterAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(BOOL)determineShowTime:(double*)arg1 showDuration:(double*)arg2 ;
-(void)setMirrorToDuplicatePaths:(BOOL)arg1 ;
-(void)resetCachedTimes;
-(BOOL)isPanoramaInDocument:(id)arg1 ;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)duplicateAnimationPaths;
-(void)copyLayerGroup:(id)arg1 ;
-(id)nearestLayer;
-(void)copyFrame:(id)arg1 ;
-(void)setSlide:(id)arg1 ;
-(void)setIsSecondary:(BOOL)arg1 ;
-(void)copyFilters:(id)arg1 ;
-(void)copyVars:(id)arg1 ;
-(id)parentDocument;
-(id)action;
-(void)cleanup;
-(void)setParent:(id)arg1 ;
-(id)fullDebugLog;
-(BOOL)canZoom;
-(double)maxDuration;
-(void)dump;
-(void)setMediaType:(unsigned long long)arg1 ;
-(id)slide;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(double)audioDuckOutDuration;
-(id)userInfoAttributeForKey:(id)arg1 ;
-(void)setAudioDuckLevel:(double)arg1 ;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(double)originalAspectRatio;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(BOOL)needsTimingUpdateOnSlideChange;
-(void)setUserInfoAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)setAbsolutePath:(NSString *)arg1 ;
-(double)audioFadeInDuration;
-(BOOL)needsStyleUpdateOnSlideChange;
-(id)animationPathForKey:(id)arg1 ;
-(id)initWithLayerGroup:(id)arg1 ;
-(void)removeAllFilters;
-(double)audioDuckInDuration;
-(void)setKeyframedAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)parentSubtitleEffect;
-(double)showDisplayStartTime;
-(NSString *)sizingMode;
-(double)showDuration;
-(double)audioDuckLevel;
-(void)setLayerGroup:(MPLayerGroup *)arg1 ;
-(long long)liveIndex;
-(double)showTime;
-(void)setSizingMode:(NSString *)arg1 ;
-(double)showDisplayTime;
-(id)parentEffect;
-(id)animationPaths;
-(id)keyframedAnimationPathForKey:(id)arg1 ;
-(BOOL)hasAnimationPathForKey:(id)arg1 ;
-(MPLayerGroup *)layerGroup;
-(double)aspectRatio;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(MPFrame *)arg1 ;
-(MPFrame *)frame;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(NSString *)path;
-(double)scale;
-(CGPoint)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(id)filters;
-(long long)index;
-(void)setPath:(NSString *)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(id)initWithPath:(id)arg1 ;
-(double)startTime;
-(NSString *)absolutePath;
-(void)addFilters:(id)arg1 ;
-(BOOL)hasMovie;
-(id)parent;
-(BOOL)isSecondary;
-(void)addFilter:(id)arg1 ;
-(double)audioFadeOutDuration;
-(void)setAudioVolume:(double)arg1 ;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(double)audioVolume;
@end

