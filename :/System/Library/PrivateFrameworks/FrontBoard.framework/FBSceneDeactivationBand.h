/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, NSString;

@interface FBSceneDeactivationBand : NSObject <BSDescriptionProviding> {

	double _level;
	NSHashTable* _assertions;

}

@property (nonatomic,readonly) double level;                                   //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) unsigned long long assertionCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bandWithSceneLevel:(double)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(double)level;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithSceneLevel:(double)arg1 ;
-(unsigned long long)deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2 ;
-(unsigned long long)assertionCount;
-(void)addAssertion:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
@end

