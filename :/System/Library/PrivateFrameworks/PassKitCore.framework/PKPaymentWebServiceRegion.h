/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding> {

	NSString* _lastUpdatedTag;
	NSArray* _certificates;
	NSURL* _brokerURL;
	NSURL* _paymentServicesURL;
	NSURL* _trustedServiceManagerURL;
	NSString* _trustedServiceManagerPushTopic;
	long long _consistencyCheckBackoffLevel;

}

@property (nonatomic,retain) NSString * lastUpdatedTag;                              //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
@property (nonatomic,retain) NSArray * certificates;                                 //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSURL * brokerURL;                                      //@synthesize brokerURL=_brokerURL - In the implementation block
@property (nonatomic,retain) NSURL * paymentServicesURL;                             //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (nonatomic,retain) NSURL * trustedServiceManagerURL;                       //@synthesize trustedServiceManagerURL=_trustedServiceManagerURL - In the implementation block
@property (nonatomic,retain) NSString * trustedServiceManagerPushTopic;              //@synthesize trustedServiceManagerPushTopic=_trustedServiceManagerPushTopic - In the implementation block
@property (assign,nonatomic) long long consistencyCheckBackoffLevel;                 //@synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)certificates;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setCertificates:(NSArray *)arg1 ;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(void)setConsistencyCheckBackoffLevel:(long long)arg1 ;
-(long long)consistencyCheckBackoffLevel;
-(NSString *)lastUpdatedTag;
-(NSString *)trustedServiceManagerPushTopic;
-(NSURL *)trustedServiceManagerURL;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(void)setTrustedServiceManagerURL:(NSURL *)arg1 ;
-(void)setTrustedServiceManagerPushTopic:(NSString *)arg1 ;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(NSURL *)brokerURL;
-(NSURL *)paymentServicesURL;
@end

