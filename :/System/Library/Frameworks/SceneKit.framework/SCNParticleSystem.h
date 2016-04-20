/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SCNAnimatable.h>

@class SCNOrderedDictionary, NSString, SCNGeometry, UIColor, NSArray, NSDictionary;

@interface SCNParticleSystem : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {

	C3DParticleSystemRef _particleSystem;
	unsigned _isPresentationInstance : 1;
	SCNOrderedDictionary* _animations;
	NSString* _name;
	double _emissionDuration;
	double _emissionDurationVariation;
	double _idleDuration;
	double _idleDurationVariation;
	double _birthRate;
	double _birthRateVariation;
	double _warmupDuration;
	SCNGeometry* _emitterShape;
	long long _birthLocation;
	long long _birthDirection;
	SCNVector3 _emittingDirection;
	SCNVector3 _acceleration;
	double _spreadingAngle;
	BOOL _loops;
	BOOL _isLocal;
	BOOL _affectedByGravity;
	BOOL _affectedByPhysicsFields;
	BOOL _physicsCollisionsEnabled;
	BOOL _lightingEnabled;
	BOOL _softParticlesEnabled;
	BOOL _particleDiesOnCollision;
	BOOL _blackPassEnabled;
	double _particleAngle;
	double _particleAngleVariation;
	double _particleVelocity;
	double _particleVelocityVariation;
	double _particleAngularVelocity;
	double _particleAngularVelocityVariation;
	double _particleLifeSpan;
	double _particleLifeSpanVariation;
	double _particleBounce;
	double _particleBounceVariation;
	double _particleFriction;
	double _particleFrictionVariation;
	double _particleCharge;
	double _particleChargeVariation;
	id _particleImage;
	UIColor* _particleColor;
	SCNVector4 _particleColorVariation;
	SCNParticleSystem* _systemSpawnedOnCollision;
	SCNParticleSystem* _systemSpawnedOnDying;
	SCNParticleSystem* _systemSpawnedOnLiving;
	double _particleSize;
	double _particleSizeVariation;
	long long _seed;
	long long _blendMode;
	long long _renderingMode;
	long long _orientationMode;
	long long _imageSequenceAnimationMode;
	NSArray* _particleGeometries;
	NSArray* _colliderNodes;
	NSDictionary* _propertyControllers;
	long long _sortingMode;
	double _particleMass;
	double _particleMassVariation;
	double _dampingFactor;
	double _speedFactor;
	double _fixedTimeStep;
	double _stretchFactor;
	double _fresnelExponent;
	unsigned long long _imageSequenceColumnCount;
	unsigned long long _imageSequenceRowCount;
	double _imageSequenceInitialFrame;
	double _imageSequenceInitialFrameVariation;
	double _imageSequenceFrameRate;
	double _imageSequenceFrameRateVariation;
	NSString* _referenceName;

}

@property (assign,nonatomic) double emissionDuration; 
@property (assign,nonatomic) double emissionDurationVariation; 
@property (assign,nonatomic) double idleDuration; 
@property (assign,nonatomic) double idleDurationVariation; 
@property (assign,nonatomic) BOOL loops; 
@property (assign,nonatomic) double birthRate; 
@property (assign,nonatomic) double birthRateVariation; 
@property (assign,nonatomic) double warmupDuration; 
@property (nonatomic,retain) SCNGeometry * emitterShape; 
@property (assign,nonatomic) long long birthLocation; 
@property (assign,nonatomic) long long birthDirection; 
@property (assign,nonatomic) double spreadingAngle; 
@property (assign,nonatomic) SCNVector3 emittingDirection; 
@property (assign,nonatomic) SCNVector3 acceleration; 
@property (assign,getter=isLocal,nonatomic) BOOL local; 
@property (assign,nonatomic) double particleAngle; 
@property (assign,nonatomic) double particleAngleVariation; 
@property (assign,nonatomic) double particleVelocity; 
@property (assign,nonatomic) double particleVelocityVariation; 
@property (assign,nonatomic) double particleAngularVelocity; 
@property (assign,nonatomic) double particleAngularVelocityVariation; 
@property (assign,nonatomic) double particleLifeSpan; 
@property (assign,nonatomic) double particleLifeSpanVariation; 
@property (nonatomic,retain) SCNParticleSystem * systemSpawnedOnDying; 
@property (nonatomic,retain) SCNParticleSystem * systemSpawnedOnCollision; 
@property (nonatomic,retain) SCNParticleSystem * systemSpawnedOnLiving; 
@property (nonatomic,retain) id particleImage; 
@property (assign,nonatomic) unsigned long long imageSequenceColumnCount; 
@property (assign,nonatomic) unsigned long long imageSequenceRowCount; 
@property (assign,nonatomic) double imageSequenceInitialFrame; 
@property (assign,nonatomic) double imageSequenceInitialFrameVariation; 
@property (assign,nonatomic) double imageSequenceFrameRate; 
@property (assign,nonatomic) double imageSequenceFrameRateVariation; 
@property (assign,nonatomic) long long imageSequenceAnimationMode; 
@property (nonatomic,retain) UIColor * particleColor; 
@property (assign,nonatomic) SCNVector4 particleColorVariation; 
@property (assign,nonatomic) double particleSize; 
@property (assign,nonatomic) double particleSizeVariation; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,getter=isBlackPassEnabled,nonatomic) BOOL blackPassEnabled; 
@property (assign,nonatomic) long long orientationMode; 
@property (assign,nonatomic) long long sortingMode; 
@property (assign,getter=isLightingEnabled,nonatomic) BOOL lightingEnabled; 
@property (assign,nonatomic) BOOL affectedByGravity; 
@property (assign,nonatomic) BOOL affectedByPhysicsFields; 
@property (assign,nonatomic) BOOL particleDiesOnCollision; 
@property (nonatomic,copy) NSArray * colliderNodes; 
@property (assign,nonatomic) double particleMass; 
@property (assign,nonatomic) double particleMassVariation; 
@property (assign,nonatomic) double particleBounce; 
@property (assign,nonatomic) double particleBounceVariation; 
@property (assign,nonatomic) double particleFriction; 
@property (assign,nonatomic) double particleFrictionVariation; 
@property (assign,nonatomic) double particleCharge; 
@property (assign,nonatomic) double particleChargeVariation; 
@property (assign,nonatomic) double dampingFactor; 
@property (assign,nonatomic) double speedFactor; 
@property (assign,nonatomic) double stretchFactor; 
@property (assign,nonatomic) double fresnelExponent; 
@property (nonatomic,copy) NSDictionary * propertyControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
+(id)particleSystem;
+(id)particleSystemNamed:(id)arg1 inDirectory:(id)arg2 ;
+(id)particleSystemWithParticleSystemRef:(C3DParticleSystemRef)arg1 ;
+(BOOL)supportsSecureCoding;
-(void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(BOOL)_isAReference;
-(void)setReferenceName:(id)arg1 ;
-(id)referenceName;
-(void)_syncObjCModel;
-(void)_syncEntityObjCModel;
-(C3DParticleSystemRef)particleSystemRef;
-(void)setIsLocal:(BOOL)arg1 ;
-(BOOL)physicsCollisionsEnabled;
-(void)setPhysicsCollisionsEnabled:(BOOL)arg1 ;
-(double)particleCharge;
-(void)setParticleCharge:(double)arg1 ;
-(double)particleChargeVariation;
-(void)setParticleChargeVariation:(double)arg1 ;
-(id)particleGeometries;
-(void)setParticleGeometries:(id)arg1 ;
-(NSArray *)colliderNodes;
-(double)fixedTimeStep;
-(void)setFixedTimeStep:(double)arg1 ;
-(id)initWithParticleSystemRef:(C3DParticleSystemRef)arg1 ;
-(id)initPresentationSystemWithSystemRef:(C3DParticleSystemRef)arg1 ;
-(BOOL)softParticlesEnabled;
-(BOOL)lightingEnabled;
-(BOOL)blackPassEnabled;
-(void)_customEncodingOfSCNParticleSystem:(id)arg1 ;
-(void)_customDecodingOfSCNParticleSystem:(id)arg1 ;
-(short)typeOfProperty:(id)arg1 ;
-(void)handleEvent:(long long)arg1 forProperties:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)addModifierForProperties:(id)arg1 atStage:(long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)removeModifiersOfStage:(long long)arg1 ;
-(void)removeAllModifiers;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copy;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)identifier;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)renderingMode;
-(NSArray *)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setIdentifier:(id)arg1 ;
-(void)removeAllAnimations;
-(long long)seed;
-(void)addAnimation:(id)arg1 ;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(BOOL)affectedByGravity;
-(SCNVector3)acceleration;
-(void)setRenderingMode:(long long)arg1 ;
-(void)setBlendMode:(long long)arg1 ;
-(long long)blendMode;
-(void)setAcceleration:(SCNVector3)arg1 ;
-(id)scene;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(double)birthRate;
-(void)setBirthRate:(double)arg1 ;
-(BOOL)isLocal;
-(void)setColliderNodes:(NSArray *)arg1 ;
-(void)setEmissionDuration:(double)arg1 ;
-(double)emissionDuration;
-(void)setEmissionDurationVariation:(double)arg1 ;
-(double)emissionDurationVariation;
-(void)setIdleDuration:(double)arg1 ;
-(double)idleDuration;
-(void)setIdleDurationVariation:(double)arg1 ;
-(double)idleDurationVariation;
-(void)setBirthRateVariation:(double)arg1 ;
-(double)birthRateVariation;
-(void)setWarmupDuration:(double)arg1 ;
-(double)warmupDuration;
-(void)setEmitterShape:(SCNGeometry *)arg1 ;
-(SCNGeometry *)emitterShape;
-(void)setBirthLocation:(long long)arg1 ;
-(long long)birthLocation;
-(void)setBirthDirection:(long long)arg1 ;
-(long long)birthDirection;
-(void)setSpreadingAngle:(double)arg1 ;
-(double)spreadingAngle;
-(void)setEmittingDirection:(SCNVector3)arg1 ;
-(SCNVector3)emittingDirection;
-(void)setLocal:(BOOL)arg1 ;
-(void)setParticleAngle:(double)arg1 ;
-(double)particleAngle;
-(void)setParticleAngleVariation:(double)arg1 ;
-(double)particleAngleVariation;
-(void)setParticleVelocity:(double)arg1 ;
-(double)particleVelocity;
-(void)setParticleVelocityVariation:(double)arg1 ;
-(double)particleVelocityVariation;
-(void)setParticleAngularVelocity:(double)arg1 ;
-(double)particleAngularVelocity;
-(void)setParticleAngularVelocityVariation:(double)arg1 ;
-(double)particleAngularVelocityVariation;
-(void)setParticleLifeSpan:(double)arg1 ;
-(double)particleLifeSpan;
-(void)setParticleLifeSpanVariation:(double)arg1 ;
-(double)particleLifeSpanVariation;
-(SCNParticleSystem *)systemSpawnedOnDying;
-(void)setSystemSpawnedOnDying:(SCNParticleSystem *)arg1 ;
-(SCNParticleSystem *)systemSpawnedOnCollision;
-(void)setSystemSpawnedOnCollision:(SCNParticleSystem *)arg1 ;
-(SCNParticleSystem *)systemSpawnedOnLiving;
-(void)setSystemSpawnedOnLiving:(SCNParticleSystem *)arg1 ;
-(void)setParticleImage:(id)arg1 ;
-(id)particleImage;
-(void)setImageSequenceColumnCount:(unsigned long long)arg1 ;
-(unsigned long long)imageSequenceColumnCount;
-(void)setImageSequenceRowCount:(unsigned long long)arg1 ;
-(unsigned long long)imageSequenceRowCount;
-(void)setImageSequenceInitialFrame:(double)arg1 ;
-(double)imageSequenceInitialFrame;
-(void)setImageSequenceInitialFrameVariation:(double)arg1 ;
-(double)imageSequenceInitialFrameVariation;
-(void)setImageSequenceFrameRate:(double)arg1 ;
-(double)imageSequenceFrameRate;
-(void)setImageSequenceFrameRateVariation:(double)arg1 ;
-(double)imageSequenceFrameRateVariation;
-(void)setImageSequenceAnimationMode:(long long)arg1 ;
-(long long)imageSequenceAnimationMode;
-(void)setParticleColor:(UIColor *)arg1 ;
-(UIColor *)particleColor;
-(void)setParticleColorVariation:(SCNVector4)arg1 ;
-(SCNVector4)particleColorVariation;
-(void)setParticleSize:(double)arg1 ;
-(double)particleSize;
-(void)setParticleSizeVariation:(double)arg1 ;
-(double)particleSizeVariation;
-(void)setBlackPassEnabled:(BOOL)arg1 ;
-(BOOL)isBlackPassEnabled;
-(void)setOrientationMode:(long long)arg1 ;
-(long long)orientationMode;
-(void)setSortingMode:(long long)arg1 ;
-(long long)sortingMode;
-(void)setLightingEnabled:(BOOL)arg1 ;
-(BOOL)isLightingEnabled;
-(void)setSoftParticlesEnabled:(BOOL)arg1 ;
-(BOOL)areSoftParticlesEnabled;
-(void)setAffectedByPhysicsFields:(BOOL)arg1 ;
-(BOOL)affectedByPhysicsFields;
-(void)setParticleDiesOnCollision:(BOOL)arg1 ;
-(BOOL)particleDiesOnCollision;
-(void)setParticleMass:(double)arg1 ;
-(double)particleMass;
-(void)setParticleMassVariation:(double)arg1 ;
-(double)particleMassVariation;
-(void)setParticleBounce:(double)arg1 ;
-(double)particleBounce;
-(void)setParticleBounceVariation:(double)arg1 ;
-(double)particleBounceVariation;
-(void)setParticleFriction:(double)arg1 ;
-(double)particleFriction;
-(void)setParticleFrictionVariation:(double)arg1 ;
-(double)particleFrictionVariation;
-(void)setDampingFactor:(double)arg1 ;
-(double)dampingFactor;
-(void)setSpeedFactor:(double)arg1 ;
-(double)speedFactor;
-(void)setStretchFactor:(double)arg1 ;
-(double)stretchFactor;
-(void)setFresnelExponent:(double)arg1 ;
-(double)fresnelExponent;
-(void)setPropertyControllers:(NSDictionary *)arg1 ;
-(NSDictionary *)propertyControllers;
-(void)setSeed:(long long)arg1 ;
@end

