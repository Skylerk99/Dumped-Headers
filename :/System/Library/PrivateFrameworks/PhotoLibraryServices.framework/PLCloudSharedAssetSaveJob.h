/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class AssetCollectionInfo, NSString, MSASAssetCollection, NSArray, NSDictionary;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob {

	BOOL _replacingOriginalWithDerivative;
	AssetCollectionInfo* _currentAssetCollectionInfo;
	BOOL _isVideo;
	NSString* _currentFilePath;
	NSString* _currentCloudAssetGUID;
	unsigned long long _currentCloudAssetMediaAssetType;
	NSString* _cloudAlbumGUID;
	NSString* _cloudPersonID;
	MSASAssetCollection* _currentCloudAssetCollection;
	NSArray* _assetCollectionInfos;
	NSArray* _cloudAssetGUIDsToDelete;
	long long _jobType;
	NSDictionary* _mstreamdInfoDictionary;

}

@property (nonatomic,retain) NSString * currentFilePath;                                      //@synthesize currentFilePath=_currentFilePath - In the implementation block
@property (nonatomic,retain) NSString * currentCloudAssetGUID;                                //@synthesize currentCloudAssetGUID=_currentCloudAssetGUID - In the implementation block
@property (assign,nonatomic) unsigned long long currentCloudAssetMediaAssetType;              //@synthesize currentCloudAssetMediaAssetType=_currentCloudAssetMediaAssetType - In the implementation block
@property (nonatomic,retain) NSString * cloudAlbumGUID;                                       //@synthesize cloudAlbumGUID=_cloudAlbumGUID - In the implementation block
@property (nonatomic,retain) NSString * cloudPersonID;                                        //@synthesize cloudPersonID=_cloudPersonID - In the implementation block
@property (nonatomic,retain) MSASAssetCollection * currentCloudAssetCollection;               //@synthesize currentCloudAssetCollection=_currentCloudAssetCollection - In the implementation block
@property (nonatomic,retain) NSArray * assetCollectionInfos;                                  //@synthesize assetCollectionInfos=_assetCollectionInfos - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                                    //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) NSArray * cloudAssetGUIDsToDelete;                               //@synthesize cloudAssetGUIDsToDelete=_cloudAssetGUIDsToDelete - In the implementation block
@property (assign,nonatomic) long long jobType;                                               //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSDictionary * mstreamdInfoDictionary;                           //@synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary - In the implementation block
+(id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3 ;
+(void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
+(id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2 ;
+(BOOL)_lightweightReimportCacheDirectoryExists;
+(id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(unsigned long long)arg2 ;
+(id)_dcimDirectoryForFileURL:(id)arg1 ;
+(void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2 ;
+(void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollection:(id)arg2 mediaAssetType:(unsigned long long)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(BOOL)arg7 ;
+(void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2 ;
+(void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 ;
+(id)placeholderImageProperties;
-(NSString *)cloudPersonID;
-(void)setCloudPersonID:(NSString *)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)run;
-(BOOL)isVideo;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(NSString *)currentFilePath;
-(NSString *)cloudAlbumGUID;
-(NSString *)currentCloudAssetGUID;
-(unsigned long long)currentCloudAssetMediaAssetType;
-(NSArray *)cloudAssetGUIDsToDelete;
-(NSArray *)assetCollectionInfos;
-(NSDictionary *)mstreamdInfoDictionary;
-(long long)jobType;
-(void)setCurrentFilePath:(NSString *)arg1 ;
-(void)setCurrentCloudAssetMediaAssetType:(unsigned long long)arg1 ;
-(void)setCurrentCloudAssetGUID:(NSString *)arg1 ;
-(void)setCloudAlbumGUID:(NSString *)arg1 ;
-(void)setCloudAssetGUIDsToDelete:(NSArray *)arg1 ;
-(void)setAssetCollectionInfos:(NSArray *)arg1 ;
-(void)setMstreamdInfoDictionary:(NSDictionary *)arg1 ;
-(void)setJobType:(long long)arg1 ;
-(BOOL)isProcessingThumbnail;
-(void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
-(void)executeDaemonOperationSaveAssetJobType;
-(void)executeDaemonOperationDeleteAssetJobType;
-(void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
-(void)executeDaemonOperationDownloadPendingAssetsJobType;
-(short)placeHolderKindFromAssetMetadataType:(unsigned long long)arg1 ;
-(void)saveJobAssetWithPlaceholderKind:(short)arg1 ;
-(BOOL)_parseISO6709String:(id)arg1 outLatitude:(double*)arg2 outLongitude:(double*)arg3 ;
-(unsigned long long)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2 ;
-(void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3 ;
-(void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(BOOL)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2 ;
-(BOOL)_createPlaceHolderInSharedAlbum:(id)arg1 ;
-(short)attemptLightweightReimportAssetData;
-(MSASAssetCollection *)currentCloudAssetCollection;
-(void)setCurrentCloudAssetCollection:(MSASAssetCollection *)arg1 ;
@end

