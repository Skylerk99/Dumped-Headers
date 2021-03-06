/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISURLOperationDelegate.h>

@class SSAuthenticationContext, NSURL, SSURLRequestProperties, SSURLConnectionResponse, NSString;

@interface URLConnectionRequestOperation : ISOperation <ISURLOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	NSURL* _destinationFileURL;
	SSURLRequestProperties* _properties;
	SSURLConnectionResponse* _response;
	BOOL _sendsResponseForHTTPFailures;
	BOOL _shouldMescalSign;

}

@property (readonly) SSURLRequestProperties * requestProperties; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (copy) NSURL * destinationFileURL; 
@property (assign) BOOL sendsResponseForHTTPFailures; 
@property (assign) BOOL shouldMescalSign; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newStoreURLOperationWithProperties:(id)arg1 ;
-(void)_importKeybagFromDictionary:(id)arg1 ;
-(id)_metricsPageEventWithResponse:(id)arg1 performance:(id)arg2 ;
-(void)_addKBSyncDataToRequestProperties:(id)arg1 forAccountID:(id)arg2 ;
-(BOOL)_shouldSendMachineDataHeadersForProperties:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)initWithRequestProperties:(id)arg1 ;
-(SSURLConnectionResponse *)URLResponse;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setShouldMescalSign:(BOOL)arg1 ;
-(NSURL *)destinationFileURL;
-(BOOL)sendsResponseForHTTPFailures;
-(BOOL)shouldMescalSign;
-(void)setSendsResponseForHTTPFailures:(BOOL)arg1 ;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(id)_accountIdentifier;
-(SSAuthenticationContext *)authenticationContext;
-(SSURLRequestProperties *)requestProperties;
-(void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2 ;
@end

