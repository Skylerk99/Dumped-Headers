/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject {

	SBKStoreURLBagContext* _bagContext;

}

@property (nonatomic,readonly) SBKStoreURLBagContext * bagContext;              //@synthesize bagContext=_bagContext - In the implementation block
-(void)timeout;
-(void)cancel;
-(id)initWithBagContext:(id)arg1 ;
-(SBKStoreURLBagContext *)bagContext;
@end

