/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCNRenderContext;
#import <SceneKit/SceneKit-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface SCNRenderTargetRegistry : NSObject {

	id<SCNRenderContext> _renderContext;
	NSMutableDictionary* _renderTargets;
	NSMutableDictionary* _nameToRenderTarget;
	NSMutableArray* _purgeArray;
	long long _frameStamp;

}

@property (nonatomic,readonly) long long numberOfRenderTargets; 
-(id)renderTargetWithName:(id)arg1 passIdentifier:(long long)arg2 ;
-(void)releaseRenderTarget:(id)arg1 ;
-(void)_purgeWithReason:(int)arg1 ;
-(long long)numberOfRenderTargets;
-(id)initWithRenderContext:(id)arg1 ;
-(id)renderTargetWithDescription:(SCD_Struct_SC3)arg1 size:(id)arg2 name:(long long)arg3 passIdentifier:(long long)arg4 ;
-(void)releaseRenderTargetNamed:(id)arg1 passIdentifier:(long long)arg2 ;
-(void)retainTextureWithName:(id)arg1 passIdentifier:(long long)arg2 retainCount:(long long)arg3 ;
-(void)releaseTextureWithName:(id)arg1 passIdentifier:(long long)arg2 retainCount:(long long)arg3 ;
-(void)bumpTimeStamp;
-(void)finalizeFrame;
-(void)viewportDidResize;
-(void)dealloc;
-(void)purge;
-(void)cleanup;
@end

