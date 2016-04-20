/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, PLXPCTransaction, PLPhotoLibrary, NSDictionary;

@interface PLModelMigrator : NSObject {

	double _startTime;
	NSFileManager* _fileManager;
	PLXPCTransaction* _transaction;
	PLPhotoLibrary* _photoLibrary;
	long long _photoLibraryOnce;
	NSDictionary* _syncedPropertiesByUUID;

}

@property (nonatomic,retain) NSFileManager * fileManager;                  //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
+(BOOL)didImportFileSystemAssetsWithMOC:(id)arg1 ;
+(id)generateAssetUUIDForPathPlist;
+(void)archiveAssetUUIDForPathPlist:(id)arg1 ;
+(BOOL)restartingAfterRestoreFromBackup;
+(BOOL)restartingAfterOTAMigration;
+(void)createDatabase;
+(void)repairSingletonObjectsInDatabaseWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)isPostProcessingLightweightMigration;
+(BOOL)didImportFileSystemAssets;
+(void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(BOOL)waitForDataMigratorToExit;
+(int)currentModelVersion;
+(BOOL)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6 ;
+(BOOL)postProcessThumbnailsOnlyIfObsoleteOrMissing:(BOOL*)arg1 ;
+(int)checkForceMigrationTypeRequestedAndGetOptionalSourceModelVersion:(id*)arg1 ;
+(void)validateCurrentModelVersion;
+(id)descriptionForForceMigrationType:(int)arg1 ;
+(void)_validateCurrentModelVersionFailedWithNoVersionFromServer;
+(void)_validateCurrentModelVersionFailedWithMismatchedVersion:(int)arg1 ;
+(BOOL)_resetThumbnailsAndInitiateRebuildRequestIfNeeded;
+(BOOL)didCreateSqliteErrorFileForLightweightMigration;
+(void)_createDatabase;
+(void)_createPhotoDataDirectoryFailedWithNoPermission:(id)arg1 ;
+(BOOL)_createPhotoDataDirectoryIfNecessary;
+(void)applyDataProtectionToAllPhotosFiles;
+(void)dontImportFileSystemDataIntoDatabase;
+(void)loadFileSystemDataIntoDatabase;
+(id)_sharedModelMigratorForImport;
+(void)cleanupModelForDataMigration;
+(void)repairPotentialModelCorruption;
+(id)assetUUIDForPathPlistURL;
+(void)setDidImportFileSystemAssets:(BOOL)arg1 ;
+(void)forceImportFileSystemDataIntoDatabase;
+(BOOL)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 assetsKind:(int*)arg3 ;
+(void)_forceCreateIndexOnOrderedAssets:(BOOL)arg1 ;
+(id)_dateWithiTunesTimeInterval:(double)arg1 ;
+(id)_newSyncedPropertiesByAssetUUIDs:(BOOL)arg1 ;
+(id)eventNameFromDate:(id)arg1 ;
+(void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2 ;
+(id)nextRequiredStagedMigrationVersionAfterVersion:(id)arg1 ;
+(id)managedObjectModelForLightweightMigrationStageWithURL:(id)arg1 ;
+(BOOL)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4 ;
+(BOOL)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2 ;
+(BOOL)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1 ;
+(BOOL)_deleteCloudSharedAndSyncedAssetReferencesInStore:(id)arg1 ;
+(BOOL)_deletePhotoStreamAssetReferencesInStore:(id)arg1 ;
+(BOOL)_postProcessFromVersion6006Store:(id)arg1 ;
+(BOOL)_updateKindSubtypeForPanoramaPhotosNeedsReset:(BOOL)arg1 inStore:(id)arg2 ;
+(BOOL)_deleteAllMomentsViaSQLFromStore:(id)arg1 ;
+(BOOL)_rebuildAllMomentsInStore:(id)arg1 ;
+(BOOL)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(BOOL)arg2 ;
+(BOOL)_addLocationHashesToAssets:(id)arg1 ;
+(BOOL)_migrateAssetLocationData:(id)arg1 ;
+(BOOL)_migrateRevGeoLocationDataFromKeyedArchiverFormat:(id)arg1 ;
+(BOOL)_setupRootFolderInStore:(id)arg1 ;
+(BOOL)_resetAndReimportUnmanagedAdjustmentInStore:(id)arg1 ;
+(BOOL)_forceAlbumMetadataToDiskInStore:(id)arg1 ;
+(BOOL)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(BOOL)arg2 ;
+(BOOL)_persistPlaceAnnotationData:(id)arg1 ;
+(BOOL)_fixupAssetPersistence:(id)arg1 ;
+(BOOL)_generateAddedDateForAssetsInStore:(id)arg1 ;
+(BOOL)_populateHasAdjustmentsForAssetsInStore:(id)arg1 ;
+(BOOL)_fixVideoDimensionsInStore:(id)arg1 ;
+(BOOL)_convertManagedAdjustmentsInStore:(id)arg1 ;
+(BOOL)_fixCorruptedOrientationsInStore:(id)arg1 ;
+(BOOL)_fixupAlbumOrderInAlbumListInStore:(id)arg1 ;
+(BOOL)_fixupSharedStreamOrientationsInStore:(id)arg1 ;
+(BOOL)_removeAllWallpaperAssetsInStore:(id)arg1 ;
+(BOOL)_fixupBrokenBurstPicksInStore:(id)arg1 ;
+(BOOL)_fixupCloudResourcesInStore:(id)arg1 ;
+(BOOL)_verifyCloudAssetsLocalAvailability:(id)arg1 ;
+(BOOL)_disableICloudPhoto;
+(BOOL)_removeEvents:(id)arg1 ;
+(BOOL)_fixAdjustedAssets:(id)arg1 ;
+(BOOL)_fixDuplicatedAssets:(id)arg1 ;
+(BOOL)_fixNonDuplicatedAssets:(id)arg1 adjusted:(BOOL)arg2 ;
+(BOOL)_repersistDuplicatedAssets:(id)arg1 ;
+(BOOL)_populateFaceRegionsInStore:(id)arg1 ;
+(BOOL)_clearChangeStore;
+(BOOL)_forceSoftResetSync;
+(BOOL)_resetAlbumToFolderOrderKeyForAlbums:(id)arg1 ;
+(BOOL)_fixVisibleBurstAsset:(id)arg1 ;
+(BOOL)_fixVideoJPGPath:(id)arg1 ;
+(BOOL)_fixUploadAttempts:(id)arg1 ;
+(BOOL)_fixAlbumAndFolderSortAscending:(id)arg1 ;
+(BOOL)_markThumbnailsAsAltAvailable:(id)arg1 ;
+(BOOL)_cacheDateCreatedOnResources:(id)arg1 ;
+(BOOL)_cacheItemIdentifierOnResources:(id)arg1 ;
+(BOOL)_recoverSingleBurstPhotos:(id)arg1 ;
+(BOOL)_populateAdjustmentTimestampsOnAssets:(id)arg1 ;
+(void)_resetCloudCacheState:(id)arg1 ;
+(BOOL)_fixIncorrectAddedDateForAssetsInStore:(id)arg1 ;
+(BOOL)_addCameraCaptureDeviceForAssetsInStore:(id)arg1 ;
+(BOOL)_tagScreenshotsForAssetsInStore:(id)arg1 ;
+(BOOL)_fixupAssetSubtypeForPhotosInStore:(id)arg1 ;
+(BOOL)_fixupSharedVideosWithoutThumbnailsInStore:(id)arg1 ;
+(BOOL)_markOldPhotoIrisEditsEvaluatedInStore:(id)arg1 ;
+(BOOL)_persistPhotoIrisVisibilityStateToDiskInStore:(id)arg1 ;
+(BOOL)_markPhotoIrisVideoOrphansInStore:(id)arg1 ;
+(BOOL)_addCloudKindSubtypeAndBurstFlagsInStore:(id)arg1 ;
+(BOOL)_fixItemIdentifierForVideoCmplInStore:(id)arg1 ;
+(BOOL)_fixLocalPathForVideoCmplDerivativesInStore:(id)arg1 ;
+(BOOL)_fixEmptyVideoDerivativePathsInStore:(id)arg1 ;
+(BOOL)_persistVideoComplPropertiesInStore:(id)arg1 ;
+(BOOL)_trimInvalidAlbumAssetsMappingRecords;
+(BOOL)_fixPossiblyIncorrectAddedDateForAsset:(id)arg1 ;
+(BOOL)_fixVideoDimensionsForAsset:(id)arg1 ;
+(int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1 ;
+(void)_populateFaceRegionsForAsset:(id)arg1 ;
+(BOOL)_shouldConvertManagedAdjustmentsForAsset:(id)arg1 ;
+(BOOL)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStore:(id)arg1 ;
+(BOOL)_migrateTransformableUUIDsToStringsInStore:(id)arg1 ;
+(BOOL)_populateAlbumAndFolderOrderKeysInStagedStore:(id)arg1 ;
+(BOOL)skipDataProtectionForFilePath:(id)arg1 ;
+(void)applyDataProtectionToPhotosPaths:(id)arg1 ;
+(BOOL)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1 ;
+(BOOL)_fixupImportedEventsInStore:(id)arg1 ;
+(BOOL)_fixupImportedAssetsInStore:(id)arg1 ;
+(BOOL)_fixupKeyAssetsForAlbumsInStore:(id)arg1 ;
+(BOOL)_resetDupesAnalysisInStore:(id)arg1 ;
+(BOOL)_fixupSyncedAssetAttributesInStore:(id)arg1 ;
+(BOOL)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1 ;
+(BOOL)_forceDupeAnalysis;
+(BOOL)_fixupEditorBundleIDsInStore:(id)arg1 ;
+(BOOL)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(BOOL)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(BOOL)_batchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned long long)arg3 objectHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
+(void)fixupUnmanagedAdjustmentsFromFileSystemForAsset:(id)arg1 ;
+(BOOL)_populateUnmanagedAdjustmentsFromFileSystemInManagedObjectContext:(id)arg1 ;
+(void)_persistMetadataToFileSystemForAlbum:(id)arg1 ;
+(void)_removeFileAt:(id)arg1 forResource:(id)arg2 ;
+(BOOL)_validateOrDeleteFileAtPath:(id)arg1 forCloudResource:(id)arg2 ;
+(void)_fixPathForResource:(id)arg1 withPath:(id)arg2 ;
+(void)_repairCloudPlaceholderKindForVideoAsset:(id)arg1 ;
+(BOOL)_isReasonableCreationDate:(id)arg1 ;
+(BOOL)_migrateForEachAsset:(/*^block*/id)arg1 usingStore:(id)arg2 ;
+(BOOL)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id*)arg2 ;
+(void)_repairRootFolderFixedOrderKeysInContext:(id)arg1 ;
+(BOOL)debug_resetThumbnailsAndInitiateRebuildRequest;
+(id)archivedAssetUUIDForURL:(id)arg1 ;
+(id)_modelMigrator;
+(void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)dealloc;
-(id)init;
-(NSFileManager *)fileManager;
-(void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dontImportFileSystemDataIntoDatabase;
-(void)loadFileSystemDataIntoDatabase;
-(id)initWithImplicitTransaction:(BOOL)arg1 ;
-(void)cleanupModelForDataMigration;
-(void)repairPotentialModelCorruption;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)_importAllDCIMAssets;
-(BOOL)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(BOOL*)arg3 isCPLAssets:(BOOL*)arg4 cameraRollOnly:(BOOL)arg5 ;
-(void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 ;
-(id)_orderedAssetsToImportCameraRollOnly:(BOOL)arg1 ;
-(id)_importFileSystemImportAssets:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 testCreationDates:(BOOL)arg5 ;
-(id)_syncedPropertiesForAssetUUID:(id)arg1 ;
-(void)pausePhotoStreams;
-(void)resumePhotoStreams;
@end

