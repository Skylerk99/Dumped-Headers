/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLRenderCommandEncoderSPI <MTLRenderCommandEncoder>
@optional
-(void)setFragmentTexture:(id)arg1 baseLevel:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
-(void)setVertexTexture:(id)arg1 baseLevel:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;

@required
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;
-(void)setLineWidth:(float)arg1;
-(void)addSplitHandler:(/*^block*/id)arg1;

@end

