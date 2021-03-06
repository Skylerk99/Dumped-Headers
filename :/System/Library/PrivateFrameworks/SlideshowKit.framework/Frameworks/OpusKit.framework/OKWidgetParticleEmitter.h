/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class SCNParticleSystem, NSArray, OKDocument, NSDictionary, NSString;

@interface OKWidgetParticleEmitter : NSObject <OKSettingsSupport> {

	SCNParticleSystem* _particuleSystem;
	NSArray* _colliderNodeNames;
	OKDocument* _document;
	NSDictionary* _settings;

}

@property (nonatomic,retain,readonly) SCNParticleSystem * particuleSystem;              //@synthesize particuleSystem=_particuleSystem - In the implementation block
@property (nonatomic,retain,readonly) NSArray * colliderNodeNames;                      //@synthesize colliderNodeNames=_colliderNodeNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)settingLoops;
-(void)setSettingLoops:(BOOL)arg1 ;
-(double)settingBirthRate;
-(void)setSettingBirthRate:(double)arg1 ;
-(NSArray *)colliderNodeNames;
-(SCNParticleSystem *)particuleSystem;
-(void)loadParticleImage:(id)arg1 ;
-(void)setSettingFileName:(id)arg1 ;
-(void)setSettingEmissionDuration:(double)arg1 ;
-(double)settingEmissionDuration;
-(void)setSettingEmissionDurationVariation:(double)arg1 ;
-(double)settingEmissionDurationVariation;
-(void)setSettingIdleDuration:(double)arg1 ;
-(double)settingIdleDuration;
-(void)setSettingIdleDurationVariation:(double)arg1 ;
-(double)settingIdleDurationVariation;
-(void)setSettingBirthRateVariation:(double)arg1 ;
-(double)settingBirthRateVariation;
-(void)setSettingWarmupDuration:(double)arg1 ;
-(double)settingWarmupDuration;
-(void)setSettingEmitterShape:(id)arg1 ;
-(id)settingEmitterShape;
-(void)setSettingBirthLocation:(long long)arg1 ;
-(long long)settingBirthLocation;
-(void)setSettingBirthDirection:(long long)arg1 ;
-(long long)settingBirthDirection;
-(void)setSettingSpreadingAngle:(double)arg1 ;
-(double)settingSpreadingAngle;
-(void)setSettingEmittingDirection:(SCNVector3)arg1 ;
-(SCNVector3)settingEmittingDirection;
-(void)setSettingAcceleration:(SCNVector3)arg1 ;
-(SCNVector3)settingAcceleration;
-(void)setSettingLocal:(BOOL)arg1 ;
-(BOOL)settingLocal;
-(void)setSettingParticleAngle:(double)arg1 ;
-(double)settingParticleAngle;
-(void)setSettingParticleAngleVariation:(double)arg1 ;
-(double)settingParticleAngleVariation;
-(void)setSettingParticleVelocity:(double)arg1 ;
-(double)settingParticleVelocity;
-(void)setSettingParticleVelocityVariation:(double)arg1 ;
-(double)settingParticleVelocityVariation;
-(void)setSettingParticleAngularVelocity:(double)arg1 ;
-(double)settingParticleAngularVelocity;
-(void)setSettingParticleAngularVelocityVariation:(double)arg1 ;
-(double)settingParticleAngularVelocityVariation;
-(void)setSettingParticleLifeSpan:(double)arg1 ;
-(double)settingParticleLifeSpan;
-(void)setSettingParticleLifeSpanVariation:(double)arg1 ;
-(double)settingParticleLifeSpanVariation;
-(void)setSettingSystemSpawnedOnDying:(id)arg1 ;
-(id)settingSystemSpawnedOnDying;
-(void)setSettingSystemSpawnedOnCollision:(id)arg1 ;
-(id)settingSystemSpawnedOnCollision;
-(void)setSettingSystemSpawnedOnLiving:(id)arg1 ;
-(id)settingSystemSpawnedOnLiving;
-(void)setSettingParticleImage:(id)arg1 ;
-(id)settingParticleImage;
-(void)setSettingImageSequenceColumnCount:(unsigned long long)arg1 ;
-(unsigned long long)settingImageSequenceColumnCount;
-(void)setSettingImageSequenceRowCount:(unsigned long long)arg1 ;
-(unsigned long long)settingImageSequenceRowCount;
-(void)setSettingImageSequenceInitialFrame:(double)arg1 ;
-(double)settingImageSequenceInitialFrame;
-(void)setSettingImageSequenceInitialFrameVariation:(double)arg1 ;
-(double)settingImageSequenceInitialFrameVariation;
-(void)setSettingImageSequenceFrameRate:(double)arg1 ;
-(double)settingImageSequenceFrameRate;
-(void)setSettingImageSequenceFrameRateVariation:(double)arg1 ;
-(double)settingImageSequenceFrameRateVariation;
-(void)setSettingImageSequenceAnimationMode:(long long)arg1 ;
-(long long)settingImageSequenceAnimationMode;
-(void)setSettingParticleColor:(id)arg1 ;
-(id)settingParticleColor;
-(void)setSettingParticleColorVariation:(SCNVector4)arg1 ;
-(SCNVector4)settingParticleColorVariation;
-(void)setSettingParticleSize:(double)arg1 ;
-(double)settingParticleSize;
-(void)setSettingParticleSizeVariation:(double)arg1 ;
-(double)settingParticleSizeVariation;
-(void)setSettingBlendMode:(long long)arg1 ;
-(long long)settingBlendMode;
-(void)setSettingBlackPassEnabled:(BOOL)arg1 ;
-(BOOL)settingBlackPassEnabled;
-(void)setSettingOrientationMode:(long long)arg1 ;
-(long long)settingOrientationMode;
-(void)setSettingSortingMode:(long long)arg1 ;
-(long long)settingSortingMode;
-(void)setSettingLightingEnabled:(BOOL)arg1 ;
-(BOOL)settingLightingEnabled;
-(void)setSettingSoftParticlesEnabled:(BOOL)arg1 ;
-(BOOL)settingSoftParticlesEnabled;
-(void)setSettingAffectedByGravity:(BOOL)arg1 ;
-(BOOL)settingAffectedByGravity;
-(void)setSettingAffectedByPhysicsFields:(BOOL)arg1 ;
-(BOOL)settingAffectedByPhysicsFields;
-(void)setSettingParticleDiesOnCollision:(BOOL)arg1 ;
-(BOOL)settingParticleDiesOnCollision;
-(void)setSettingColliderNodeNames:(id)arg1 ;
-(id)settingColliderNodeNames;
-(void)setSettingParticleMass:(double)arg1 ;
-(double)settingParticleMass;
-(void)setSettingParticleMassVariation:(double)arg1 ;
-(double)settingParticleMassVariation;
-(void)setSettingParticleBounce:(double)arg1 ;
-(double)settingParticleBounce;
-(void)setSettingParticleBounceVariation:(double)arg1 ;
-(double)settingParticleBounceVariation;
-(void)setSettingParticleFriction:(double)arg1 ;
-(double)settingParticleFriction;
-(void)setSettingParticleFrictionVariation:(double)arg1 ;
-(double)settingParticleFrictionVariation;
-(void)setSettingDampingFactor:(double)arg1 ;
-(double)settingDampingFactor;
-(void)setSettingSpeedFactor:(double)arg1 ;
-(double)settingSpeedFactor;
-(void)setSettingStretchFactor:(double)arg1 ;
-(double)settingStretchFactor;
-(void)setSettingFresnelExponent:(double)arg1 ;
-(double)settingFresnelExponent;
-(void)setSettingPropertyControllers:(id)arg1 ;
-(id)settingPropertyControllers;
@end

