/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface IDSProfileGetHandlesMessage : FTIDSMessage <NSCopying> {

	NSArray* _responseHandles;
	NSDictionary* _selfHandle;

}

@property (copy) NSArray * responseHandles;              //@synthesize responseHandles=_responseHandles - In the implementation block
@property (copy) NSDictionary * selfHandle;              //@synthesize selfHandle=_selfHandle - In the implementation block
-(NSArray *)responseHandles;
-(NSDictionary *)selfHandle;
-(void)setResponseHandles:(NSArray *)arg1 ;
-(void)setSelfHandle:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bagKey;
-(int)maxTimeoutRetries;
-(BOOL)wantsExtraTimeoutRetry;
-(double)anisetteHeadersTimeout;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
-(id)messageBody;
@end

