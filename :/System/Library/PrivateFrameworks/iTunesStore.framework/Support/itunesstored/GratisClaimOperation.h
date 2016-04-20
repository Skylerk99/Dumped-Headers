/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSNumber, NSString, SSURLRequestProperties, NSDictionary, SSVGratisRequestBody, SSURLConnectionResponse;

@interface GratisClaimOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSNumber* _accountID;
	NSString* _authenticationReasonDescription;
	SSURLRequestProperties* _defaultRequestProperties;
	NSDictionary* _rawOutput;
	SSVGratisRequestBody* _requestBody;
	BOOL _suppressesErrorDialogs;
	SSURLConnectionResponse* _urlResponse;

}

@property (copy) NSString * authenticationReasonDescription; 
@property (assign) BOOL suppressesErrorDialogs; 
@property (readonly) NSDictionary * rawOutput; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)rawOutput;
-(id)_accountID;
-(id)initWithRequestBody:(id)arg1 ;
-(id)_newDefaultRequestProperties;
-(id)_newRetryRequestPropertiesWithURL:(id)arg1 ;
-(BOOL)suppressesErrorDialogs;
-(NSString *)authenticationReasonDescription;
-(void)setAuthenticationReasonDescription:(NSString *)arg1 ;
-(void)setSuppressesErrorDialogs:(BOOL)arg1 ;
-(void)dealloc;
-(void)run;
-(SSURLConnectionResponse *)URLResponse;
-(id)_authenticationContext;
-(id)_bodyData;
-(void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2 ;
-(id)initWithPurchase:(id)arg1 ;
@end

