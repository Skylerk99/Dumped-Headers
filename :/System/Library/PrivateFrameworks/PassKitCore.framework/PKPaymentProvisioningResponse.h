/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse {

	NSURL* _passURL;

}

@property (nonatomic,retain) NSURL * passURL;              //@synthesize passURL=_passURL - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSURL *)passURL;
@end

