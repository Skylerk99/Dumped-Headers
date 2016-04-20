/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ALAssetsLibrary, NSMutableArray, NSError, AVAssetExportSession, NSObject;

@interface SLAssetDataProvider : NSObject {

	ALAssetsLibrary* _assetsLibrary;
	int _numRequestedImages;
	unsigned long long _maxByteSize;
	NSMutableArray* _deliveryQueue;
	NSError* _lastError;
	AVAssetExportSession* _assetExportSession;
	NSObject*<OS_dispatch_queue> _downsamplingQueue;
	/*^block*/id _fetchCompletion;

}

@property (copy) id fetchCompletion;              //@synthesize fetchCompletion=_fetchCompletion - In the implementation block
-(void)fetchImageDataForAssetsURLs:(id)arg1 maxByteSize:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchCompletion;
-(void)setFetchCompletion:(id)arg1 ;
-(void)_checkDeliveryComplete;
-(void)_downsamplingFailedForAsset:(id)arg1 withError:(id)arg2 ;
-(void)_downsamplingCompletedForAsset:(id)arg1 withDownsampledData:(id)arg2 ;
-(void)fetchedAsset:(id)arg1 ;
-(void)_assetFetchFailedWithError:(id)arg1 ;
-(id)_generateTemporaryFilename;
-(void)exportDataFromVideoAssetURL:(id)arg1 toFileURL:(id)arg2 exportPreset:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)mappedDataFromVideoAtFileURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

