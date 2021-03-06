/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShadowsRenderer.h>

@class NSArray, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {

	NSArray* mPyramidResources;
	TSCH3DPyramidBlurFBOResource* mFinalShadowResource;
	tvec2<int> mInitialSize;
	int mRequestedSize;
	float mTargetRadiusFactor;

}
-(id)initWithSize:(int)arg1 targetRadiusFactor:(float)arg2 ;
-(id)p_allResources;
-(void)p_setupResourcesForSize:(tvec2<int>)arg1 ;
-(id)shadowsFBOForContext:(id)arg1 ;
-(void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(/*^block*/id)arg3 ;
-(void)unprotectShadowInSession:(id)arg1 ;
-(float)blurSlackForQuality:(float)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

