/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPLayer.h>
#import <OpusOrigamiProducer/MPEffectSupportPrivate.h>
#import <OpusOrigamiProducer/MPEffectSupport.h>

@protocol MZEffectTiming;
@class MCContainerEffect, NSString, NSMutableArray, NSMutableDictionary, NSObject, NSArray;

@interface MPLayerEffect : MPLayer <MPEffectSupportPrivate, MPEffectSupport> {

	MCContainerEffect* _layerEffect;
	NSString* _effectID;
	NSString* _presetID;
	NSMutableArray* _slides;
	NSMutableArray* _secondarySlides;
	NSMutableArray* _texts;
	NSMutableDictionary* _effectAttributes;
	long long _randomSeed;
	NSObject*<MZEffectTiming> _effectTiming;
	BOOL _supportsEffectTiming;
	BOOL _skipEffectTiming;
	long long _liveIndex;

}

@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming;              //@synthesize effectTiming=_effectTiming - In the implementation block
+(id)layerEffectWithEffectID:(id)arg1 andPaths:(id)arg2 ;
+(id)layerEffectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
+(id)layerEffectWithEffectID:(id)arg1 ;
+(id)layerEffectWithEffectID:(id)arg1 andStrings:(id)arg2 ;
-(void)copySecondarySlides:(id)arg1 ;
-(id)formattedAttributes;
-(void)applyFormattedAttributes;
-(void)setSkipEffectTiming:(BOOL)arg1 ;
-(id)slideForMCSlide:(id)arg1 ;
-(id)slideInformation;
-(void)copyTexts:(id)arg1 ;
-(void)copySlides:(id)arg1 ;
-(void)setLayerEffect:(id)arg1 ;
-(void)updateTiming;
-(BOOL)isLive;
-(void)createSecondarySlidesWithPaths:(id)arg1 ;
-(double)lowestDisplayTime;
-(long long)maxNumberOfSlides;
-(void)createSlidesWithPaths:(id)arg1 ;
-(long long)maxNumberOfSecondarySlides;
-(void)setLiveIndex:(long long)arg1 ;
-(long long)liveIndex;
-(double)fullDuration;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(BOOL)arg3 ;
-(id)container;
-(void)_updateEffectTiming;
-(id)initWithEffectID:(id)arg1 andPaths:(id)arg2 ;
-(id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(void)removeSecondarySlidesAtIndices:(id)arg1 ;
-(void)setEffectAttributes:(id)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)addSecondarySlide:(id)arg1 ;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)removeAllSecondarySlides;
-(void)insertSlides:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2 ;
-(void)addSecondarySlides:(id)arg1 ;
-(void)insertTexts:(id)arg1 atIndex:(long long)arg2 ;
-(id)initWithEffectID:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 andStrings:(id)arg2 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(id)_effectAttributes;
-(void)setRandomSeed:(long long)arg1 ;
-(id)effectAttributeForKey:(id)arg1 ;
-(void)addSlides:(id)arg1 ;
-(void)setPresetID:(NSString *)arg1 ;
-(NSObject*<MZEffectTiming>)effectTiming;
-(void)_updateTiming:(BOOL)arg1 ;
-(void)removeAllTexts;
-(NSArray *)texts;
-(void)addTexts:(id)arg1 ;
-(void)setEffectID:(NSString *)arg1 ;
-(NSString *)presetID;
-(id)secondarySlides;
-(double)mainDuration;
-(NSString *)effectID;
-(id)allSlides:(BOOL)arg1 ;
-(NSArray *)slides;
-(id)effectAttributes;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)removeAllSlides;
-(void)setPhaseOutDuration:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addText:(id)arg1 ;
-(long long)randomSeed;
-(void)addSlide:(id)arg1 ;
@end

