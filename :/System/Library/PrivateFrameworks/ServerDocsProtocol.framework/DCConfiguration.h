/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface DCConfiguration : NSObject {

	NSDate* _fetchDate;
	NSDate* _expiry;
	BOOL _hasValidSignature;

}

@property (nonatomic,copy) NSDate * expiry;                       //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,copy) NSDate * fetchDate;                    //@synthesize fetchDate=_fetchDate - In the implementation block
@property (assign,nonatomic) BOOL hasValidSignature;              //@synthesize hasValidSignature=_hasValidSignature - In the implementation block
-(void)setExpiry:(NSDate *)arg1 ;
-(NSDate *)expiry;
-(NSDate *)fetchDate;
-(void)setFetchDate:(NSDate *)arg1 ;
-(BOOL)hasValidSignature;
-(void)setHasValidSignature:(BOOL)arg1 ;
@end

