/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class NSURLDownloadInternal, NSString, NSURLRequest, NSData;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {

	NSURLDownloadInternal* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSData * resumeData; 
@property (assign) BOOL deletesFileUponFailure; 
+(BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1 ;
+(id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
+(BOOL)_isEncodingMIMETypeResumable:(id)arg1 ;
+(id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
+(id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cleanupChallenges;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)_setDelegateQueue:(id)arg1 ;
-(void)withDelegate:(/*^block*/id)arg1 ;
-(id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(id)_resumeInformation;
-(NSData *)resumeData;
-(void)setDestination:(id)arg1 allowOverwrite:(BOOL)arg2 ;
-(void)_setDeletesFileAfterFailure:(BOOL)arg1 ;
-(BOOL)_deletesFileAfterFailure;
-(void)setDeletesFileUponFailure:(BOOL)arg1 ;
-(BOOL)deletesFileUponFailure;
-(void)_setDirectoryPath:(id)arg1 ;
-(void)_setOriginatingURL:(id)arg1 ;
-(id)_originatingURL;
-(void)releaseDelegate;
-(BOOL)_downloadActive;
-(void)sendDidStart:(CFURLDownloadRef)arg1 ;
-(CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)arg1 redirectResponse:(CFURLResponseRef)arg2 ;
-(unsigned char)sendDownloadShouldUseCredentialStorage;
-(void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)arg1 ;
-(void)sendDidReceiveResponse:(CFURLResponseRef)arg1 ;
-(void)sendWillResumeWithResponse:(CFURLResponseRef)arg1 startingByte:(unsigned long long)arg2 ;
-(void)sendDidReceiveData:(long long)arg1 ;
-(BOOL)sendShouldDecodeDataOfMIMEType:(CFStringRef)arg1 ;
-(void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)arg1 ;
-(void)sendDidCreateDestination:(CFURLRef)arg1 ;
-(void)sendDidFinish;
-(void)sendDidFail:(CFErrorRef)arg1 ;
-(BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)_delegate;
-(id)url;
-(NSURLRequest *)request;
-(void)_setDelegate:(id)arg1 ;
-(id)_directoryPath;
-(id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
@end

