/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MFLANContinuationContext : NSObject {

	unsigned short _port;
	NSString* _host;

}

@property (nonatomic,copy) NSString * host;                    //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short port;              //@synthesize port=_port - In the implementation block
-(void)setPort:(unsigned short)arg1 ;
-(NSString *)host;
-(unsigned short)port;
-(void)setHost:(NSString *)arg1 ;
@end

