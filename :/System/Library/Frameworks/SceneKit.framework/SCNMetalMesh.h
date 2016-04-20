/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@class NSArray, MTLVertexDescriptor;

@interface SCNMetalMesh : NSObject {

	long long _mutabilityTimestamp;
	unsigned long long vertexLayoutHash;
	NSArray* _buffers;
	NSArray* _elements;
	MTLVertexDescriptor* _vertexDescriptor;
	id<MTLBuffer> _volatileBuffer;
	long long volatileOffset;
	long long volatileStride;

}

@property (nonatomic,copy) NSArray * buffers;                                     //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,copy) NSArray * elements;                                    //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) MTLVertexDescriptor * vertexDescriptor;              //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (assign,nonatomic) unsigned long long vertexLayoutHash; 
@property (nonatomic,retain) id<MTLBuffer> volatileBuffer;                        //@synthesize volatileBuffer=_volatileBuffer - In the implementation block
@property (assign,nonatomic) long long volatileOffset; 
@property (assign,nonatomic) long long volatileStride; 
-(MTLVertexDescriptor *)vertexDescriptor;
-(unsigned long long)vertexLayoutHash;
-(void)setVertexLayoutHash:(unsigned long long)arg1 ;
-(NSArray *)buffers;
-(void)setBuffers:(NSArray *)arg1 ;
-(void)setVertexDescriptor:(MTLVertexDescriptor *)arg1 ;
-(id<MTLBuffer>)volatileBuffer;
-(void)setVolatileBuffer:(id<MTLBuffer>)arg1 ;
-(long long)volatileOffset;
-(void)setVolatileOffset:(long long)arg1 ;
-(long long)volatileStride;
-(void)setVolatileStride:(long long)arg1 ;
-(void)dealloc;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
@end

