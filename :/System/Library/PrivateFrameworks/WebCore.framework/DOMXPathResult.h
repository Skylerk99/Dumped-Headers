/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType; 
@property (readonly) double numberValue; 
@property (copy,readonly) NSString * stringValue; 
@property (readonly) BOOL booleanValue; 
@property (readonly) DOMNode * singleNodeValue; 
@property (readonly) BOOL invalidIteratorState; 
@property (readonly) unsigned snapshotLength; 
-(void)dealloc;
-(NSString *)stringValue;
-(BOOL)booleanValue;
-(void)finalize;
-(double)numberValue;
-(unsigned short)resultType;
-(DOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(unsigned)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(unsigned)arg1 ;
@end

