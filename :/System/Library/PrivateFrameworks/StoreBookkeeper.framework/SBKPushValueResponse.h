/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKResponse.h>

@class NSString, NSData;

@interface SBKPushValueResponse : SBKResponse {

	NSString* _domainVersion;
	NSData* _conflictItemValuePayload;
	NSString* _conflictItemKey;
	NSString* _conflictItemVersionAnchor;

}

@property (readonly) NSString * domainVersion;                          //@synthesize domainVersion=_domainVersion - In the implementation block
@property (readonly) NSData * conflictItemValuePayload;                 //@synthesize conflictItemValuePayload=_conflictItemValuePayload - In the implementation block
@property (readonly) NSString * conflictItemKey;                        //@synthesize conflictItemKey=_conflictItemKey - In the implementation block
@property (readonly) NSString * conflictItemVersionAnchor;              //@synthesize conflictItemVersionAnchor=_conflictItemVersionAnchor - In the implementation block
+(id)responseWithResponse:(id)arg1 transaction:(id)arg2 ;
-(NSData *)conflictItemValuePayload;
-(NSString *)conflictItemKey;
-(NSString *)conflictItemVersionAnchor;
-(NSString *)domainVersion;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
@end

