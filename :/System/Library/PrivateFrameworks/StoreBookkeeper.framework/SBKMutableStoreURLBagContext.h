/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKStoreURLBagContext.h>

@class NSString, NSURL;

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy) NSString * domain; 
@property (retain) NSURL * syncRequestURL; 
@property (retain) NSURL * pushKeyValueRequestURL; 
@property (retain) NSURL * pullKeyValueRequestURL; 
@property (retain) NSURL * pushAllKeyValueRequestURL; 
@property (retain) NSURL * pullAllKeyValueRequestURL; 
@property (assign) BOOL domainDisabled; 
@property (assign) double pollingIntervalInSeconds; 
@end

