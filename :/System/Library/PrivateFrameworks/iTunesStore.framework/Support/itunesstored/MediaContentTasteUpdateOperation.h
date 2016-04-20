/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray, SSVMediaContentTasteUpdateResponse;

@interface MediaContentTasteUpdateOperation : ISOperation {

	NSArray* _contentTasteItemUpdates;
	SSVMediaContentTasteUpdateResponse* _response;
	BOOL _shouldInvalidateLocalCache;

}

@property (copy) NSArray * contentTasteItemUpdates;                              //@synthesize contentTasteItemUpdates=_contentTasteItemUpdates - In the implementation block
@property (readonly) SSVMediaContentTasteUpdateResponse * response;              //@synthesize response=_response - In the implementation block
@property (assign) BOOL shouldInvalidateLocalCache;                              //@synthesize shouldInvalidateLocalCache=_shouldInvalidateLocalCache - In the implementation block
+(id)_URLCache;
+(void)removeAllCachedResponses;
-(void)_getData:(id*)arg1 forContentTasteItemUpdates:(id)arg2 includedContentTasteItemUpdates:(id*)arg3 ;
-(unsigned long long)_revisionIDForURLResponse:(id)arg1 ;
-(id)_ETagValueWithResponse:(id)arg1 ;
-(id)_responseWithResponseData:(id)arg1 expirationDate:(id)arg2 revisionID:(unsigned long long)arg3 isCachedResponse:(BOOL)arg4 ;
-(SSVMediaContentTasteUpdateResponse *)response;
-(void)main;
-(void)setContentTasteItemUpdates:(NSArray *)arg1 ;
-(NSArray *)contentTasteItemUpdates;
-(BOOL)shouldInvalidateLocalCache;
-(void)setShouldInvalidateLocalCache:(BOOL)arg1 ;
@end

