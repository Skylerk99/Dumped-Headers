/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCROHandlerProtocol.h>

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol> {

	id _callbackDelegate;
	NSLock* _lock;
	BOOL isInvalid;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4 ;
-(void)setCallbackDelegate:(id)arg1 ;
-(id)callbackDelegate;
@end

