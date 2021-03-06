/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MREffectManager : NSObject {

	NSMutableDictionary* mEffectSets;
	NSMutableDictionary* mEffectPools;
	NSMutableDictionary* mFontRepository;

}
+(id)sharedManager;
+(void)initialize;
-(BOOL)hasCustomTimingForEffectID:(id)arg1 ;
-(id)sizeScriptForEffectID:(id)arg1 andKey:(id)arg2 ;
-(BOOL)hasMultiImageInputForEffectID:(id)arg1 ;
-(id)imageProviderInfosForEffectID:(id)arg1 ;
-(BOOL)isOpaqueForEffectID:(id)arg1 ;
-(Class)classForEffectID:(id)arg1 ;
-(id)imageInputInfosForEffectID:(id)arg1 ;
-(void)releaseResources;
-(double)lineSpacingFactorForTextInEffectID:(id)arg1 presetID:(id)arg2 atIndex:(long long)arg3 ;
-(id)resourcePathForEffectID:(id)arg1 andResource:(id)arg2 ;
-(double)defaultPhaseInDurationForEffectID:(id)arg1 ;
-(double)defaultMainDurationForEffectID:(id)arg1 ;
-(id)descriptionForEffectID:(id)arg1 ;
-(double)defaultPhaseOutDurationForEffectID:(id)arg1 ;
-(void)recycleEffect:(id)arg1 ;
-(id)effectWithEffectID:(id)arg1 ;
-(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
-(id)defaultEffectAttributesWithEffectID:(id)arg1 andSlideInformation:(id)arg2 ;
-(id)attributeDescriptionForEffectID:(id)arg1 andKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
@end

