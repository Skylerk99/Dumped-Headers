/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject {

	WebScriptCallFramePrivate* _private;
	id _userInfo;

}
-(id)_initWithGlobalObject:(id)arg1 functionName:(String*)arg2 exceptionValue:(JSValue*)arg3 ;
-(id)_convertValueToObjcValue:(JSValue*)arg1 ;
-(void)dealloc;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)exception;
-(id)functionName;
@end

