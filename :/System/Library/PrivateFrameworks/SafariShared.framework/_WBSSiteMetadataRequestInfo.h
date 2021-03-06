/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSSiteMetadataProvider, NSMutableSet, NSOperation;

@interface _WBSSiteMetadataRequestInfo : NSObject {

	WBSSiteMetadataProvider* _provider;
	NSMutableSet* _tokens;
	NSOperation* _operation;

}

@property (nonatomic,readonly) WBSSiteMetadataProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSMutableSet * tokens;                           //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,retain) NSOperation * operation;                           //@synthesize operation=_operation - In the implementation block
-(id)initWithProvider:(id)arg1 ;
-(void)dealloc;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(NSMutableSet *)tokens;
-(WBSSiteMetadataProvider *)provider;
@end

