/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, NSArray, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior {

	SCNPhysicsBody* _chassisBody;
	NSArray* _wheels;
	SCNPhysicsWorld* _world;
	btRaycastVehicle* _vehicle;
	double _speedKmHour;

}

@property (nonatomic,readonly) double speedInKilometersPerHour; 
@property (nonatomic,readonly) NSArray * wheels; 
@property (nonatomic,readonly) SCNPhysicsBody * chassisBody; 
+(id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)physicsWorld;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(void)_handleCreateIfNeeded:(BOOL)arg1 ;
-(BOOL)hasReferenceToPhysicsBody:(id)arg1 ;
-(btRaycastVehicle*)btVehicle;
-(void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2 ;
-(void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2 ;
-(void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2 ;
-(double)speedInKilometersPerHour;
-(NSArray *)wheels;
-(SCNPhysicsBody *)chassisBody;
-(void)_initializeWheelsArray;
-(id)initWithChassisBody:(id)arg1 wheels:(id)arg2 ;
-(void)_createWheel:(id)arg1 ;
-(id)wheelAtIndex:(unsigned long long)arg1 ;
-(void)_customDecodingOfSCNPhysicsVehicle:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_update;
@end

