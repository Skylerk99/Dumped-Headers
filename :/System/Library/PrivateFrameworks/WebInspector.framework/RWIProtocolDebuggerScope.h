/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * object; 
-(id)initWithType:(long long)arg1 object:(id)arg2 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(RWIProtocolRuntimeRemoteObject *)object;
-(void)setObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
@end

