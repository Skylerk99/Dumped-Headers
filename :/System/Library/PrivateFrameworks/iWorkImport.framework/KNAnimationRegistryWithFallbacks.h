/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class KNAnimationRegistry, NSMutableDictionary;

@interface KNAnimationRegistryWithFallbacks : NSObject {

	KNAnimationRegistry* mRegistry;
	NSMutableDictionary* mFallbacks;

}
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 ;
-(void)registerFallbackEffectIdentifer:(id)arg1 forEffectIdentifer:(id)arg2 ;
-(id)init;
@end

