/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMUIEvent.h>

@class DOMNode;

@interface DOMMouseEvent : DOMUIEvent

@property (readonly) int screenX; 
@property (readonly) int screenY; 
@property (readonly) int clientX; 
@property (readonly) int clientY; 
@property (readonly) BOOL ctrlKey; 
@property (readonly) BOOL shiftKey; 
@property (readonly) BOOL altKey; 
@property (readonly) BOOL metaKey; 
@property (readonly) unsigned short button; 
@property (readonly) id<DOMEventTarget> relatedTarget; 
@property (readonly) int offsetX; 
@property (readonly) int offsetY; 
@property (readonly) int x; 
@property (readonly) int y; 
@property (readonly) DOMNode * fromElement; 
@property (readonly) DOMNode * toElement; 
-(unsigned short)button;
-(int)x;
-(int)y;
-(int)offsetX;
-(int)offsetY;
-(BOOL)ctrlKey;
-(BOOL)shiftKey;
-(BOOL)altKey;
-(BOOL)metaKey;
-(int)screenX;
-(int)screenY;
-(int)clientX;
-(int)clientY;
-(id<DOMEventTarget>)relatedTarget;
-(DOMNode *)fromElement;
-(DOMNode *)toElement;
-(void)initMouseEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 button:(unsigned short)arg14 relatedTarget:(id)arg15 ;
-(void)initMouseEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(BOOL)arg10 :(BOOL)arg11 :(BOOL)arg12 :(BOOL)arg13 :(unsigned short)arg14 :(id)arg15 ;
@end

