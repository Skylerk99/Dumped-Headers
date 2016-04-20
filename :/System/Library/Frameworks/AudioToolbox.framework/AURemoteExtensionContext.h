/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libextension.dylib/NSExtensionContext.h>
#import <libobjc.A.dylib/AUAudioUnitXPCProtocol.h>

@protocol AUAudioUnitHostProtocol, OS_dispatch_queue, OS_voucher;
@class AUAudioUnit, NSObject, NSMutableArray, AUParameterTree, AUAudioUnitViewService;

@interface AURemoteExtensionContext : NSExtensionContext <AUAudioUnitXPCProtocol> {

	AUAudioUnit* _audioUnit;
	BOOL _isUIExtension;
	AudioComponentDescription _componentDescription;
	id<AUAudioUnitHostProtocol> _remoteHost;
	AUExtRenderingServer* _renderServer;
	NSObject*<OS_dispatch_queue> _propertyObserverQueue;
	NSMutableArray* _pendingChangedProperties;
	int _deferPropertyChangeNotifications;
	NSObject*<OS_voucher> _initializationVoucher;
	AUParameterTree* _cachedParameterTree;
	void* _rpcObserverToken;
	AUAudioUnitViewService* _viewService;

}

@property (assign) AUAudioUnitViewService * viewService;              //@synthesize viewService=_viewService - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)open:(/*^block*/id)arg1 ;
-(void)addPropertyObserver:(id)arg1 ;
-(void)removePropertyObserver:(id)arg1 ;
-(void)setBusFormat:(unsigned)arg1 scope:(unsigned)arg2 format:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setBusCount:(unsigned long long)arg1 scope:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)initialize:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)initialize2:(int)arg1 formats:(id)arg2 maxFrames:(unsigned long long)arg3 buffer:(id)arg4 bufferSize:(unsigned)arg5 beginSem:(id)arg6 endSem:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)uninitialize:(/*^block*/id)arg1 ;
-(void)valueForProperty:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getBusses:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(id)_getBus:(unsigned)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(void)getParameterTree:(/*^block*/id)arg1 ;
-(void)setParameter:(unsigned long long)arg1 value:(float)arg2 ;
-(void)getParameter:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)parameterStringFromValue:(float)arg1 currentValue:(BOOL)arg2 address:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)parametersForOverviewWithCount:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)addRemoteParameterObserver:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeRemoteParameterObserver:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(AUAudioUnitViewService *)viewService;
-(id)iOSViewController;
-(id)currentParameterTree;
-(BOOL)_identifyBus:(id)arg1 scope:(unsigned*)arg2 element:(unsigned*)arg3 ;
-(id)_fetchAndClearPendingChangedProperties;
-(void)setBusName:(unsigned)arg1 scope:(unsigned)arg2 name:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setViewService:(AUAudioUnitViewService *)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)dealloc;
-(void)reset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

