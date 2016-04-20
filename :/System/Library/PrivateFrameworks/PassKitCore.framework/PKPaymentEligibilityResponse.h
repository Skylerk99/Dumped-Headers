/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {

	NSString* _identifier;
	long long _eligibilityStatus;
	long long _cardType;
	NSURL* _termsURL;
	NSString* _termsID;
	NSString* _applicationIdentifier;
	NSString* _region;
	NSURL* _learnMoreURL;

}

@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long eligibilityStatus;                   //@synthesize eligibilityStatus=_eligibilityStatus - In the implementation block
@property (nonatomic,readonly) long long cardType;                            //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) NSURL * termsURL;                              //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,readonly) NSString * termsID;                            //@synthesize termsID=_termsID - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * region;                             //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) NSURL * learnMoreURL;                          //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
-(long long)eligibilityStatus;
-(NSURL *)learnMoreURL;
-(NSURL *)termsURL;
-(NSString *)termsID;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)applicationIdentifier;
-(id)initWithData:(id)arg1 ;
-(NSString *)region;
-(long long)cardType;
@end

