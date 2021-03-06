/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVAssetResourceLoaderRequest.h>

@class AVAssetResourceLoadingRequestInternal, NSURLRequest, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, NSURLResponse, NSString;

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest> {

	AVAssetResourceLoadingRequestInternal* _loadingRequest;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) AVAssetResourceLoadingContentInformationRequest * contentInformationRequest; 
@property (nonatomic,readonly) AVAssetResourceLoadingDataRequest * dataRequest; 
@property (nonatomic,copy) NSURLResponse * response; 
@property (nonatomic,copy) NSURLRequest * redirect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SEL)_selectorForInformingDelegateOfCancellationByFig;
-(id)_weakReference;
-(void)_addFigAssetListeners;
-(void)_removeFigAssetListeners;
-(void)_removeFigPlaybackItemListeners;
-(void)_addFigPlaybackItemListeners;
-(id)_requestDictionary;
-(void)_performCancellationByClient;
-(BOOL)_shouldInformDelegateOfFigCancellation;
-(id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2 ;
-(void)_sendDataIncrementally:(id)arg1 data:(id)arg2 ;
-(void)_appendToCachedData:(id)arg1 ;
-(NSURLRequest *)redirect;
-(AVAssetResourceLoadingContentInformationRequest *)contentInformationRequest;
-(void)_setContentInformationRequest:(id)arg1 ;
-(void)_addFigAssetImageGeneratorListeners;
-(void)_setDataRequest:(id)arg1 ;
-(void)_removeFigAssetImageGeneratorListeners;
-(BOOL)_tryToMarkAsCancelled;
-(void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2 ;
-(id)_getAndClearCachedData;
-(void)setRedirect:(NSURLRequest *)arg1 ;
-(id)serializableRepresentation;
-(void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3 ;
-(void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)persistentContentKeyFromKeyVendorResponse:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)finished;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSURLRequest *)request;
-(BOOL)isCancelled;
-(NSURLResponse *)response;
-(BOOL)isFinished;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)finalize;
-(id)_resourceLoader;
-(id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(AVAssetResourceLoadingDataRequest *)dataRequest;
-(void)finishLoading;
-(void)finishLoadingWithError:(id)arg1 ;
@end

