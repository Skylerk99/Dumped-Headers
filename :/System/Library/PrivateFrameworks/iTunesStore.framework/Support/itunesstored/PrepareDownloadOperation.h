/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISURLOperationDelegate.h>

@class SSMemoryEntity, NSArray, SSDownloadPolicy, NSString;

@interface PrepareDownloadOperation : ISOperation <ISURLOperationDelegate> {

	SSMemoryEntity* _download;
	BOOL _ignoresDownloadHandler;
	NSArray* _mediaAssets;
	/*^block*/id _outputBlock;
	SSDownloadPolicy* _policy;

}

@property (nonatomic,readonly) long long downloadIdentifier; 
@property (assign) BOOL ignoresDownloadHandler; 
@property (copy) id outputBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)enumerateOperationsWithDownloadQuery:(id)arg1 session:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(id)_mediaAssetsForDownloadIdentifier:(long long)arg1 session:(id)arg2 ;
+(id)_duetTicketWithBundleIdentifier:(id)arg1 ;
+(BOOL)_isDTServiceHubIssuedRequest:(id)arg1 ;
-(BOOL)ignoresDownloadHandler;
-(void)setIgnoresDownloadHandler:(BOOL)arg1 ;
-(id)_initWithDownload:(id)arg1 mediaAssets:(id)arg2 policy:(id)arg3 ;
-(id)_bestMediaAsset;
-(BOOL)_shouldCancelAsDuplicate;
-(BOOL)_shouldCancelAutomaticDownload;
-(BOOL)_shouldFailForDiskSpaceWithAsset:(id)arg1 ;
-(long long)_loadSizeIfNecessaryForAsset:(id)arg1 ;
-(BOOL)_requiresPoweredPluggedIn;
-(double)_transferProgressFractionWithAsset:(id)arg1 ;
-(id)_newURLRequestWithAsset:(id)arg1 ;
-(id)_downloadKeyCookieWithAsset:(id)arg1 ;
-(id)_newAVAssetDownloadSessionOptionsWithAsset:(id)arg1 URLRequest:(id)arg2 ;
-(id)_newDataConsumerWithAsset:(id)arg1 destinationPath:(id)arg2 ;
-(BOOL)_sendsStoreHeadersForAsset:(id)arg1 ;
-(id)_newAVContentInfoDictionary;
-(BOOL)_usesStreamingZipDataConsumerForAsset:(id)arg1 ;
-(BOOL)_allowsCellularAccessForAsset:(id)arg1 ;
-(BOOL)_itemIsInMediaLibrary;
-(BOOL)_itemIsInSoftwareLibrary;
-(BOOL)_assetNeedsDecryption:(id)arg1 ;
-(long long)downloadIdentifier;
-(void)run;
-(id)_clientIdentifier;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(BOOL)operation:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
@end

