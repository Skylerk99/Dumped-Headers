/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNRenderContextImp.h>
#import <libobjc.A.dylib/SCNBufferStream.h>

@protocol MTLDevice, MTLCommandQueue, OS_dispatch_semaphore, MTLRenderCommandEncoder, MTLCommandBuffer, MTLTexture, CAMetalDrawable, MTLBuffer, MTLDepthStencilState, MTLSamplerState;
@class SCNMetalResourceManager, NSObject, MTLRenderPassDescriptor, CAMetalLayer, SCNMetalShaderManager, NSMutableArray, NSString;

@interface SCNRenderContextMetal : SCNRenderContextImp <SCNBufferStream> {

	SCNMetalResourceManager* _resourceManager;
	id<MTLDevice> _device;
	int _profile;
	unsigned _features;
	C3DEngineContextRef _engineContext;
	id<MTLCommandQueue> _commandQueue;
	NSObject*<OS_dispatch_semaphore> _inFlightSemaphore;
	MTLRenderPassDescriptor* _clientRenderPassDescriptor;
	id<MTLRenderCommandEncoder> _clientRenderCommandEncoder;
	id<MTLCommandBuffer> _clientCommandBuffer;
	id<MTLTexture> _textureTarget;
	CAMetalLayer* _layerTarget;
	id<CAMetalDrawable> _drawable;
	MTLRenderPassDescriptor* _currentRenderPassDescriptor;
	 _renderSize;
	SCNMetalShaderManager* _currentShaderManager;
	id<MTLCommandBuffer> _currentCommandBuffer;
	id<MTLRenderCommandEncoder> _currentRenderEncoder;
	_C3DFXPass* _currentPass;
	BOOL _currentPassIsMirrored;
	SCD_Struct_SC16 _currentStreamBufferIndices;
	NSMutableArray* _vertexVolatileBuffers[3];
	unsigned long long _vertexVolatileBufferIndex;
	unsigned long long _vertexVolatileBufferOffset;
	id<MTLBuffer> _vertexVolatileBuffer;
	NSMutableArray* _volatileMeshes;
	NSMutableArray* _bufferPool;
	NSMutableArray* _usedVolatileMeshElements;
	NSMutableArray* _freeVolatileMeshElements;
	NSMutableArray* _frameConstantBuffers[3];
	unsigned long long _maxFrameConstantBufferIndex[3];
	unsigned long long _frameConstantBufferIndex;
	unsigned long long _frameConstantBufferOffset;
	id<MTLBuffer> _frameConstantBuffer;
	id<MTLDepthStencilState> _defaultDepthStencilState;
	id<MTLSamplerState> _defaultSamplerState;
	_C3DFXMetalProgram* _background2DProgram;
	_C3DFXMetalProgram* _backgroundCubeProgram;
	double _initialTime;
	id<MTLBuffer> _shadowKernelBuffer;
	SCD_Struct_SC25* _processingContext;
	unsigned _seed;
	SCNSceneBuffer _frameUniforms;
	SCD_Struct_SC28 _sceneUniforms;
	SCD_Struct_SC30* _nodeUniforms;
	SCD_Struct_SC42* _lighting;
	SCD_Struct_SC45* _cache;
	BOOL _showsAuthoringEnvironment;
	double _startTimeFlush[3];
	int _startTimeFlushIndex;
	SCD_Struct_SC46 _renderTargets;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,retain) MTLRenderPassDescriptor * clientRenderPassDescriptor;                //@synthesize clientRenderPassDescriptor=_clientRenderPassDescriptor - In the implementation block
@property (nonatomic,retain) id<MTLRenderCommandEncoder> clientRenderCommandEncoder;              //@synthesize clientRenderCommandEncoder=_clientRenderCommandEncoder - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> clientCommandBuffer;                            //@synthesize clientCommandBuffer=_clientCommandBuffer - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> commandQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerBindings;
-(int)profile;
-(BOOL)mapVolatileMesh:(_C3DMesh*)arg1 verticesCount:(long long)arg2 ;
-(void)unmapVolatileMesh:(_C3DMesh*)arg1 ;
-(void)drawRenderElement:(_C3DRendererElement*)arg1 withPass:(_C3DFXPass*)arg2 ;
-(id)newRenderTargetWithDescription:(SCD_Struct_SC21*)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)renderMesh:(_C3DMesh*)arg1 meshElement:(_C3DMeshElement*)arg2 withProgram:(_C3DFXProgram*)arg3 engineContext:(C3DEngineContextRef)arg4 transform:(C3DMatrix4x4)arg5 color:(const C3DColor4*)arg6 rasterizerStates:(C3DRasterizerStatesRef)arg7 blendState:(C3DBlendStatesRef)arg8 texture:(C3DImageRef)arg9 depthBias:(BOOL)arg10 ;
-(void)popDebugGroup;
-(void)renderBackground:(_C3DEffectSlot*)arg1 engineContext:(C3DEngineContextRef)arg2 ;
-(id)textureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(void)_setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndices:(SCD_Struct_SC16)arg3 ;
-(void)_setTexture:(id)arg1 atIndices:(SCD_Struct_SC16)arg2 ;
-(void)beginFrame:(id)arg1 ;
-(void)_purgeUnusedContantBuffers;
-(void)resetVolatileMeshes;
-(void)resetVolatileMeshElements;
-(void)endFrameWaitingUntilCompleted:(BOOL)arg1 ;
-(id)_renderTargetWithDescription:(SCD_Struct_SC21)arg1 size:(id)arg2 name:(long long)arg3 ;
-(id)_finalRenderTexture;
-(BOOL)_setupDescriptor:(id)arg1 forPass:(_C3DFXPass*)arg2 isFinalTechnique:(BOOL)arg3 ;
-(void)_clearRenderCommanderEncoderCache;
-(void)__C3DFXContextDidApplyPass:(_C3DFXPass*)arg1 ;
-(char*)_allocateConstantBufferSize:(long long)arg1 buffer:(id*)arg2 offset:(unsigned long long*)arg3 ;
-(void)_setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setRasterizerStates:(C3DRasterizerStatesRef)arg1 ;
-(void)_setConstantBufferBytes:(void*)arg1 size:(long long)arg2 atIndices:(SCD_Struct_SC16)arg3 ;
-(void)_setMeshBuffers:(id)arg1 ;
-(void)_drawMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2 ;
-(void)drawFullScreenQuadForPass:(_C3DFXPass*)arg1 ;
-(void)_setSamplerState:(id)arg1 atIndices:(SCD_Struct_SC16)arg2 ;
-(void)_uploadLightingSetBuffer:(SCD_Struct_SC49)arg1 ;
-(void)_execute:(SCD_Struct_SC50*)arg1 ;
-(void)_setZeroConstantBufferOfSize:(unsigned long long)arg1 atIndices:(SCD_Struct_SC16)arg2 ;
-(id)__reserveVolatileBufferForSize:(unsigned long long)arg1 offset:(unsigned long long*)arg2 ;
-(id)_newMTLBufferFromPoolWithLength:(unsigned long long)arg1 ;
-(void)_recycleMTLBufferToPool:(id)arg1 ;
-(id)initWithDevice:(id)arg1 engineContext:(C3DEngineContextRef)arg2 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)_clearUnusedBindingPoints;
-(BOOL)beginRenderPass:(_C3DFXPass*)arg1 isFinalTechnique:(BOOL)arg2 ;
-(void)endRenderPass;
-(void)_logLightingInformation;
-(void)_setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)startProcessingRendererElementsWithEngineIterationContext:(SCD_Struct_SC51*)arg1 ;
-(void)stopProcessingRendererElements;
-(void)processRendererElement:(_C3DRendererElement*)arg1 ;
-(BOOL)showsAuthoringEnvironment;
-(void)setShowsAuthoringEnvironment:(BOOL)arg1 ;
-(_C3DMeshElement*)createVolatileMeshElementOfType:(char)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3 ;
-(id)currentRenderCommandEncoder;
-(id)currentRenderPassDescriptor;
-(id)currentCommandBuffer;
-(MTLRenderPassDescriptor *)clientRenderPassDescriptor;
-(void)setClientRenderPassDescriptor:(MTLRenderPassDescriptor *)arg1 ;
-(id<MTLRenderCommandEncoder>)clientRenderCommandEncoder;
-(void)setClientRenderCommandEncoder:(id<MTLRenderCommandEncoder>)arg1 ;
-(id<MTLCommandBuffer>)clientCommandBuffer;
-(void)setClientCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)writeBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)resourceManager;
-(unsigned)features;
@end

