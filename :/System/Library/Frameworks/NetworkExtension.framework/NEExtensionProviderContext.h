/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>
#import <libobjc.A.dylib/NEExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionProviderHostProtocol.h>

@protocol NEExtensionProviderHostProtocol;
@class NSString, NEConfiguration;

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {

	id<NEExtensionProviderHostProtocol> _hostContext;
	NSString* _description;
	NEConfiguration* _configuration;
	/*^block*/id _stopCompletionHandler;

}

@property (retain) NEConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (readonly) id<NEExtensionProviderHostProtocol> hostContext; 
@property (copy) id stopCompletionHandler;                                         //@synthesize stopCompletionHandler=_stopCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)wake;
-(void)dispose;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)startedWithError:(id)arg1 ;
-(long long)neStopReasonToProviderStopReason:(int)arg1 ;
-(id)stopCompletionHandler;
-(void)setStopCompletionHandler:(id)arg1 ;
-(void)completeSession;
-(id<NEExtensionProviderHostProtocol>)hostContext;
-(void)cancelWithError:(id)arg1 ;
-(NSString *)description;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NEConfiguration *)configuration;
-(void)setDescription:(NSString *)arg1 ;
@end

