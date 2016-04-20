/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface FBSXPCMessage : NSObject {

	NSObject*<OS_xpc_object> _payload;

}

@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> payload;              //@synthesize payload=_payload - In the implementation block
+(id)message;
+(id)messageWithPacker:(/*^block*/id)arg1 ;
+(id)messageWithPayload:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_xpc_object>)payload;
-(void)sendReplyMessageWithPacker:(/*^block*/id)arg1 ;
-(id)initWithMessagePayload:(id)arg1 ;
-(id)initWithMessagePacker:(/*^block*/id)arg1 ;
@end

