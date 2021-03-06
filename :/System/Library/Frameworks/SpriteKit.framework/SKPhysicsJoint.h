/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSCoding> {

	BOOL __implicit;
	SKPhysicsBody* bodyA;
	SKPhysicsBody* bodyB;
	double reactionTorque;
	CGVector reactionForce;

}

@property (nonatomic,retain) SKPhysicsBody * bodyA; 
@property (nonatomic,retain) SKPhysicsBody * bodyB; 
@property (nonatomic,readonly) CGVector reactionForce; 
@property (nonatomic,readonly) double reactionTorque; 
@property (assign,nonatomic) BOOL _implicit;                        //@synthesize _implicit=__implicit - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)_implicit;
-(void)set_implicit:(BOOL)arg1 ;
-(void)setBodyA:(SKPhysicsBody *)arg1 ;
-(void)setBodyB:(SKPhysicsBody *)arg1 ;
-(CGVector)reactionForce;
-(double)reactionTorque;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SKPhysicsBody *)bodyA;
-(SKPhysicsBody *)bodyB;
@end

