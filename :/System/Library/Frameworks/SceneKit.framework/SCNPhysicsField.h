/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNPhysicsWorld, SCNNode;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {

	SCNVector3 _halfExtent;
	double _strength;
	double _falloffExponent;
	double _minimumDistance;
	BOOL _active;
	long long _scope;
	BOOL _usesEllipsoidalExtent;
	BOOL _exclusive;
	SCNVector3 _offset;
	SCNVector3 _direction;
	unsigned long long _categoryBitMask;
	SCNPhysicsWorld* _world;
	SCNNode* _node;
	c3dPhysicsField* _field;

}

@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double falloffExponent; 
@property (assign,nonatomic) double minimumDistance; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive; 
@property (assign,nonatomic) SCNVector3 halfExtent; 
@property (assign,nonatomic) BOOL usesEllipsoidalExtent; 
@property (assign,nonatomic) long long scope; 
@property (assign,nonatomic) SCNVector3 offset; 
@property (assign,nonatomic) SCNVector3 direction; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
+(void)_setDisplayScaleFactor:(double)arg1 ;
+(double)_displayScaleFactor;
+(BOOL)supportsSecureCoding;
+(id)field;
+(id)dragField;
+(id)vortexField;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)springField;
+(id)electricField;
+(id)magneticField;
+(id)linearGravityField;
+(id)radialGravityField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
-(c3dPhysicsField*)_handle;
-(void)_removeOwner;
-(c3dPhysicsField*)_createField;
-(void)_setupCommonProperties;
-(SCNVector3)halfExtent;
-(BOOL)supportsDirection;
-(BOOL)supportsOffset;
-(void)_setWorld:(id)arg1 ;
-(SCNVector3)evalAtLocation:(SCNVector3)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copy;
-(BOOL)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_commonInit;
-(void)setDirection:(SCNVector3)arg1 ;
-(SCNVector3)direction;
-(void)setActive:(BOOL)arg1 ;
-(void)setOffset:(SCNVector3)arg1 ;
-(SCNVector3)offset;
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(void)setMinimumDistance:(double)arg1 ;
-(double)minimumDistance;
-(id)_owner;
-(void)_setOwner:(id)arg1 ;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(unsigned long long)categoryBitMask;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(void)setFalloffExponent:(double)arg1 ;
-(double)falloffExponent;
-(void)setExclusive:(BOOL)arg1 ;
-(BOOL)isExclusive;
-(void)setHalfExtent:(SCNVector3)arg1 ;
-(void)setUsesEllipsoidalExtent:(BOOL)arg1 ;
-(BOOL)usesEllipsoidalExtent;
@end

