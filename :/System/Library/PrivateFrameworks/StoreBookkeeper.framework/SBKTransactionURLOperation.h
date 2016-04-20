/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISStoreURLOperation.h>

@class SBKRequest;

@interface SBKTransactionURLOperation : ISStoreURLOperation {

	BOOL _shouldAuthenticate;
	SBKRequest* _SBKRequest;

}

@property (setter=BKRequest,nonatomic,retain) SBKRequest * SBKRequest;              //@synthesize SBKRequest=_SBKRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldAuthenticate;                               //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
+(id)operationWithRequest:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(id)description;
-(id)_init;
-(BOOL)shouldAuthenticate;
-(void)setShouldAuthenticate:(BOOL)arg1 ;
-(void)setSBKRequest:(SBKRequest *)arg1 ;
-(SBKRequest *)SBKRequest;
@end

