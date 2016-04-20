/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NPSDomainAccessorInternal, NSString, NSUUID;

@interface NPSDomainAccessor : NSObject {

	NSObject*<OS_dispatch_queue> _externalQueue;
	NSObject*<OS_dispatch_queue> _invalidationQueue;
	NPSDomainAccessorInternal* _internalAccessor;

}

@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSUUID * pairingID; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;                  //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> invalidationQueue;              //@synthesize invalidationQueue=_invalidationQueue - In the implementation block
@property (nonatomic,retain) NPSDomainAccessorInternal * internalAccessor;                //@synthesize internalAccessor=_internalAccessor - In the implementation block
+(void)resolveActivePairedDevicePairingID:(id*)arg1 pairingDataStore:(id*)arg2 ;
+(id)copyDomainListForPairingID:(id)arg1 pairingDataStore:(id)arg2 ;
+(id)copyDomainList;
-(id)stringArrayForKey:(id)arg1 ;
-(long long)longForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(id)queue;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)invalidate;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(float)floatForKey:(id)arg1 ;
-(id)synchronize;
-(NSString *)domain;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDomain:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)copyKeyList;
-(BOOL)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(long long)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(NSUUID *)pairingID;
-(id)initWithDomain:(id)arg1 pairingID:(id)arg2 pairingDataStore:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NPSDomainAccessorInternal *)internalAccessor;
-(id)initWithDomain:(id)arg1 queue:(id)arg2 ;
-(id)initWithDomain:(id)arg1 queue:(id)arg2 pairingID:(id)arg3 pairingDataStore:(id)arg4 ;
-(id)initWithInternalDomainAccessor:(id)arg1 queue:(id)arg2 ;
-(void)objectForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(id)initWithDomain:(id)arg1 pairedDevice:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)invalidationQueue;
-(void)setInvalidationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInternalAccessor:(NPSDomainAccessorInternal *)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
@end

