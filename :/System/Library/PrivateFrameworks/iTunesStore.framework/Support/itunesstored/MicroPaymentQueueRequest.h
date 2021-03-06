/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class StoreKitClientIdentity, NSLock, NSNumber;

@interface MicroPaymentQueueRequest : NSObject <NSCopying> {

	StoreKitClientIdentity* _clientIdentity;
	NSLock* _lock;
	NSNumber* _rangeEndIdentifier;
	NSNumber* _rangeStartIdentifier;
	NSNumber* _userIdentifier;

}

@property (copy) StoreKitClientIdentity * clientIdentity; 
@property (readonly) long long URLBagType; 
@property (readonly) BOOL usesSoftwareMap; 
@property (retain) NSNumber * rangeEndIdentifier; 
@property (retain) NSNumber * rangeStartIdentifier; 
@property (retain) NSNumber * userIdentifier; 
-(StoreKitClientIdentity *)clientIdentity;
-(void)setClientIdentity:(StoreKitClientIdentity *)arg1 ;
-(BOOL)usesSoftwareMap;
-(id)newStoreURLOperation:(id*)arg1 ;
-(id)_ntsQueryParameters:(id*)arg1 ;
-(id)_copyApplicationIdentity:(id*)arg1 ;
-(NSNumber *)rangeEndIdentifier;
-(NSNumber *)rangeStartIdentifier;
-(void)setRangeEndIdentifier:(NSNumber *)arg1 ;
-(void)setRangeStartIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)userIdentifier;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)URLBagType;
-(void)setUserIdentifier:(NSNumber *)arg1 ;
@end

