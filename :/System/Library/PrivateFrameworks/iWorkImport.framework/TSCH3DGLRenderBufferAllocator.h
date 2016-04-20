/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRenderBufferAllocator.h>

@class TSCH3DRenderBufferStorage, NSString;

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator> {

	TSCH3DRenderBufferStorage* mStorage;

}

@property (nonatomic,readonly) BOOL isTexturable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocatorWithStorage:(id)arg1 ;
+(id)allocator;
-(id)colorbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
-(id)depthbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
-(BOOL)isTexturable;
-(id)bufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 internalFormat:(unsigned)arg2 attachment:(unsigned)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
@end

