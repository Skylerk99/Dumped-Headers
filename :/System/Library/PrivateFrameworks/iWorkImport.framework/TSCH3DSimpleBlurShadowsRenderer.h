/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShadowsRenderer.h>

@class TSCH3DFBOResource, NSArray;

@interface TSCH3DSimpleBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {

	TSCH3DFBOResource* mShadowsFBOResource;
	TSCH3DFBOResource* mBlurFBOResource;
	tvec2<int> mShadowsSize;
	NSArray* mBlurParametersArray;

}
-(id)shadowsFBOForContext:(id)arg1 ;
-(void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(/*^block*/id)arg3 ;
-(void)unprotectShadowInSession:(id)arg1 ;
-(float)blurSlackForQuality:(float)arg1 ;
-(id)initWithBlurParametersArray:(id)arg1 ;
-(void)blurParametersFromQuality:(float)arg1 shadowSize:(long long*)arg2 numPasses:(long long*)arg3 kernelScale:(float*)arg4 ;
-(void)dealloc;
-(void)invalidate;
@end

