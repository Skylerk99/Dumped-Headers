/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSData, NSURL;

@interface HSRequest : NSObject {

	NSDictionary* _arguments;
	BOOL _concurrent;
	BOOL _excludeSessionIDFromURL;
	BOOL _shouldPromptForAuthentication;
	BOOL _acceptsGzipEncoding;
	NSString* _action;
	long long _method;
	NSData* _bodyData;
	NSURL* _responseDataDestinationFileURL;

}

@property (nonatomic,readonly) NSString * action;                                //@synthesize action=_action - In the implementation block
@property (getter=isConcurrent,nonatomic,readonly) BOOL concurrent;              //@synthesize concurrent=_concurrent - In the implementation block
@property (assign,nonatomic) long long method;                                   //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) double timeoutInterval; 
@property (nonatomic,copy) NSData * bodyData;                                    //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) BOOL excludeSessionIDFromURL;                       //@synthesize excludeSessionIDFromURL=_excludeSessionIDFromURL - In the implementation block
@property (assign,nonatomic) BOOL shouldPromptForAuthentication;                 //@synthesize shouldPromptForAuthentication=_shouldPromptForAuthentication - In the implementation block
@property (nonatomic,copy) NSURL * responseDataDestinationFileURL;               //@synthesize responseDataDestinationFileURL=_responseDataDestinationFileURL - In the implementation block
@property (assign,nonatomic) BOOL acceptsGzipEncoding;                           //@synthesize acceptsGzipEncoding=_acceptsGzipEncoding - In the implementation block
+(id)request;
-(id)initWithAction:(id)arg1 ;
-(BOOL)isConcurrent;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(id)description;
-(NSString *)action;
-(long long)method;
-(id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(BOOL)excludeSessionIDFromURL;
-(void)setExcludeSessionIDFromURL:(BOOL)arg1 ;
-(BOOL)shouldPromptForAuthentication;
-(void)setShouldPromptForAuthentication:(BOOL)arg1 ;
-(NSURL *)responseDataDestinationFileURL;
-(void)setResponseDataDestinationFileURL:(NSURL *)arg1 ;
-(void)setAcceptsGzipEncoding:(BOOL)arg1 ;
-(void)setBodyData:(NSData *)arg1 ;
-(void)setMethod:(long long)arg1 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(BOOL)acceptsGzipEncoding;
-(NSData *)bodyData;
-(double)timeoutInterval;
@end

