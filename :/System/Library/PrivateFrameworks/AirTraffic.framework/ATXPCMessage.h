/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class ATXPCConnection, NSString, NSDictionary, NSObject;

@interface ATXPCMessage : NSObject {

	ATXPCConnection* _receivingConnection;
	NSString* _name;
	NSDictionary* _info;
	NSObject*<OS_xpc_object> _x_reply_connection;
	NSObject*<OS_xpc_object> _x_reply;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * info;              //@synthesize info=_info - In the implementation block
-(BOOL)needsReply;
-(void)dealloc;
-(NSString *)name;
-(NSDictionary *)info;
-(id)initWithName:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)sendReply:(id)arg1 ;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2 ;
@end

