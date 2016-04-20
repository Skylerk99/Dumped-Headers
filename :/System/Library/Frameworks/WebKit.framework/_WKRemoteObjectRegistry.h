/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKRemoteObjectRegistry : NSObject {

	unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry> >* _remoteObjectRegistry;
	RetainPtr<NSMapTable>* _remoteObjectProxies;
	HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >* _exportedObjects;

}

@property (nonatomic,readonly) RemoteObjectRegistry* remoteObjectRegistry; 
-(void)_invalidate;
-(void)_invokeMessageWithInterfaceIdentifier:(const String*)arg1 encodedInvocation:(const Dictionary*)arg2 ;
-(id)_initWithMessageSender:(MessageSender*)arg1 ;
-(void)_sendInvocation:(id)arg1 interface:(id)arg2 ;
-(RemoteObjectRegistry*)remoteObjectRegistry;
-(BOOL)_invokeMethod:(const UserData*)arg1 ;
-(void)registerExportedObject:(id)arg1 interface:(id)arg2 ;
-(void)unregisterExportedObject:(id)arg1 interface:(id)arg2 ;
-(id)remoteObjectProxyWithInterface:(id)arg1 ;
@end

