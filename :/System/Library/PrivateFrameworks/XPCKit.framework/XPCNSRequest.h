/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCoding;
@class NSData, XPCRequest;

@interface XPCNSRequest : NSObject {

	id<NSCoding> _message;
	NSData* _data;
	XPCRequest* _request;

}

@property (nonatomic,retain,readonly) XPCRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain,readonly) id<NSCoding> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
-(XPCRequest *)request;
-(NSData *)data;
-(id<NSCoding>)message;
-(void)sendReply:(id)arg1 ;
-(id)initWithXPCRequest:(id)arg1 ;
@end

