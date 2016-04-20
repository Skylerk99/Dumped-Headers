/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GLKShadingHash : NSObject {

	NSObject*<OS_dispatch_queue> _vshQueue;
	NSObject*<OS_dispatch_queue> _fshQueue;
	NSMutableDictionary* _compiledVshs;
	NSMutableDictionary* _compiledFshs;

}
-(void)purgeAllShaders;
-(id)compiledVshForKey:(id)arg1 ;
-(void)setCompiledVsh:(id)arg1 forKey:(id)arg2 ;
-(id)compiledFshForKey:(id)arg1 ;
-(void)setCompiledFsh:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

