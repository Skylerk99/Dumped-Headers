/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class AVAssetResourceLoaderInternal, NSString;

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender> {

	AVAssetResourceLoaderInternal* _resourceLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL preloadsEligibleContentKeys; 
@property (nonatomic,__weak,readonly) id<AVAssetResourceLoaderDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(void)cacheContentInformation:(id)arg1 forURL:(id)arg2 ;
-(id)cachedContentInformationForURL:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)_rejectChallenge:(id)arg1 withError:(id)arg2 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(BOOL)preloadsEligibleContentKeys;
-(void)setPreloadsEligibleContentKeys:(BOOL)arg1 ;
-(void)cancelLoading;
-(id)URLRequestHelper;
-(id)initWithURLRequestHelper:(id)arg1 ;
-(void)_cancelRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(/*^block*/id)arg3 ;
-(void)_poseAuthenticationChallengeWithKey:(id)arg1 data:(id)arg2 requestDictionary:(id)arg3 fallbackHandler:(/*^block*/id)arg4 ;
-(void)_issueLoadingRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)stateQueue;
-(void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(/*^block*/id)arg2 ;
-(void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(BOOL)arg3 key:(id)arg4 fallbackHandler:(/*^block*/id)arg5 ;
-(void)_noteFinishingOfRequest:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegate:(id<AVAssetResourceLoaderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AVAssetResourceLoaderDelegate>)delegate;
-(void)finalize;
@end

