/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KNAnimationPlugin <NSObject>
@optional
+(id)customEffectTimingCurveDisplayParametersForAttributes:(id)arg1 layoutStyleOnly:(BOOL)arg2;
+(int)rendererTypeForCapabilities:(id)arg1;
+(id)customAttributes;
-(void)animationWillBeginWithContext:(id)arg1;
-(void)animationDidEndWithContext:(id)arg1;
-(id)animationInfoForAnimatedBuild:(id)arg1;

@required
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+(id)thumbnailImageNameForType:(int)arg1;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1;

@end

