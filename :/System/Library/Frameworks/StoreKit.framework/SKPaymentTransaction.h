/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, SKPayment, NSArray, NSDate, NSString, NSData;

@interface SKPaymentTransaction : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) SKPaymentTransaction * originalTransaction; 
@property (nonatomic,readonly) SKPayment * payment; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (nonatomic,readonly) NSDate * transactionDate; 
@property (nonatomic,readonly) NSString * transactionIdentifier; 
@property (nonatomic,readonly) NSData * transactionReceipt; 
@property (nonatomic,readonly) long long transactionState; 
@property (nonatomic,readonly) NSString * matchingIdentifier; 
@property (nonatomic,readonly) NSString * _transactionIdentifier; 
-(NSDate *)transactionDate;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)transactionIdentifier;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(SKPayment *)payment;
-(id)initWithPayment:(id)arg1 ;
-(long long)transactionState;
-(NSString *)matchingIdentifier;
-(BOOL)canMergeWithTransaction:(id)arg1 ;
-(SKPaymentTransaction *)originalTransaction;
-(NSData *)transactionReceipt;
-(void)_setOriginalTransaction:(id)arg1 ;
-(void)_setTemporaryIdentifier:(id)arg1 ;
-(void)_setTransactionDate:(id)arg1 ;
-(void)_setTransactionIdentifier:(id)arg1 ;
-(void)_setTransactionReceipt:(id)arg1 ;
-(void)_setTransactionState:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)_transactionIdentifier;
-(BOOL)mergeWithTransaction:(id)arg1 ;
-(void)_setDownloads:(id)arg1 ;
-(NSArray *)downloads;
@end

