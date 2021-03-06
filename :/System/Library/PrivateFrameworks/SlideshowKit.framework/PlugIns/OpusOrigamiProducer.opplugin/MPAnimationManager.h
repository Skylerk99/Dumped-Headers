/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPAnimationManager : NSObject {

	NSMutableDictionary* mAnimations;
	NSMutableDictionary* mAnimationSets;

}
+(void)loadAnimationManagerWithPaths:(id)arg1 ;
+(void)releaseSharedManager;
+(id)sharedManager;
-(id)initWithPaths:(id)arg1 ;
-(id)animationDescriptionForAnimationID:(id)arg1 ;
-(id)animationDescriptionForAnimationSetID:(id)arg1 ;
-(void)dealloc;
@end

