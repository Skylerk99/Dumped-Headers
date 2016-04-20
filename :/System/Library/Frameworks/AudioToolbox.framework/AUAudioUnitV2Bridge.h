/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AUAudioUnit.h>

@protocol OS_dispatch_queue;
@class NSObject, AUV2BridgeBusArray, AUParameterTree;

@interface AUAudioUnitV2Bridge : AUAudioUnit {

	NSObject*<OS_dispatch_queue> _eventListenerQueue;
	AUListenerBaseRef _eventListener;
	OpaqueAudioComponentInstanceRef _audioUnit;
	BOOL _audioUnitIsOwned;
	AUV2BridgeBusArray* _inputBusses;
	AUV2BridgeBusArray* _outputBusses;
	AUParameterTree* _cachedParameterTree;
	unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer> >* _renderer;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(id)outputBusses;
-(void)deallocateRenderResources;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(/*^block*/id)internalRenderBlock;
-(id)parameterTree;
-(id)initWithAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 description:(AudioComponentDescription)arg2 ;
-(id)channelCapabilities;
-(BOOL)_elementCountWritable:(unsigned)arg1 ;
-(BOOL)_setElementCount:(unsigned)arg1 count:(unsigned)arg2 error:(id*)arg3 ;
-(int)enableBus:(unsigned)arg1 scope:(unsigned)arg2 enable:(BOOL)arg3 ;
-(unsigned)_elementCount:(unsigned)arg1 ;
-(void)_rebuildBusses:(unsigned)arg1 ;
-(void)init2;
-(void)_invalidateParameterTree;
-(void)dealloc;
-(void)reset;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
@end

