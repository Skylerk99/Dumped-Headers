/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HSCloudServerProtocol
@required
-(void)evaluateKeepLocalRulesWithCompletionHandler:(/*^block*/id)arg1;
-(void)setConnectionConfiguration:(id)arg1 daemonConfiguration:(unsigned long long)arg2 preferredVideoQuality:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)updateJaliscoLibraryWithReason:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)updateSagaLibraryWithReason:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)authenticateAndStartInitialImport:(BOOL)arg1 mergeWithCloudLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)deauthenticateWithCompletion:(/*^block*/id)arg1;
-(void)removeJaliscoLibraryWithCompletion:(/*^block*/id)arg1;
-(void)isExpiredWithCompletion:(/*^block*/id)arg1;
-(void)loadIsUpdateInProgressWithCompletion:(/*^block*/id)arg1;
-(void)loadUpdateProgressWithCompletion:(/*^block*/id)arg1;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)importItemArtworkForSagaID:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)importContainerArtworkForSagaID:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)importSubscriptionItemArtworkForPersistentID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)importSubscriptionContainerArtworkForPersistentID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)loadArtworkInfoForSagaIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)loadGeniusItemsForSagaID:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)downloadGeniusDataWithCompletion:(/*^block*/id)arg1;
-(void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completion:(/*^block*/id)arg5;
-(void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completion:(/*^block*/id)arg4;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)publishPlaylistWithSagaID:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)removePlaylistsWithSagaIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)uploadArtworkForPlaylistWithPersistentID:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)addStoreItemWithAdamID:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)addStorePlaylistWithGlobalID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeItemsWithSagaIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)setItemProperties:(id)arg1 forSagaID:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)uploadCloudItemPropertiesWithCompletion:(/*^block*/id)arg1;
-(void)uploadCloudPlaylistPropertiesWithCompletion:(/*^block*/id)arg1;
-(void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(unsigned long long)arg2 groupingType:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)searchJaliscoAppsLibrary:(id)arg1 location:(id)arg2 searchColumns:(id)arg3 includeHidden:(BOOL)arg4 includeUnsupported:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)jaliscoAppsImageDataForStoreID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)redownloadPurchaseAppWithStoreID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setHidden:(BOOL)arg1 purchasedAppWithStoreID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)unhideAllPurchasedAppsWithCompletion:(/*^block*/id)arg1;
-(void)updateJaliscoAppsLibraryForFamilyStoreID:(id)arg1 withReason:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)updateArtistHeroImages;
-(void)loadIsJaliscoGeniusSupportedWithCompletion:(/*^block*/id)arg1;
-(void)loadJaliscoGeniusLearnMoreURLWithCompletion:(/*^block*/id)arg1;
-(void)loadJaliscoGeniusCUIDWithCompletion:(/*^block*/id)arg1;
-(void)setJaliscoGeniusCUID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)enableJaliscoGeniusWithCompletion:(/*^block*/id)arg1;
-(void)updateJaliscoGeniusDataWithCompletion:(/*^block*/id)arg1;
-(void)cancelUpdateJaliscoGeniusDataWithCompletion:(/*^block*/id)arg1;
-(void)loadJaliscoGeniusOperationStatusWithCompletion:(/*^block*/id)arg1;
-(void)disableJaliscoGeniusWithCompletion:(/*^block*/id)arg1;
-(void)hasProperNetworkConditionsToPlayMediaWithCompletion:(/*^block*/id)arg1;
-(void)isCellularDataRestrictedWithCompletion:(/*^block*/id)arg1;
-(void)shouldProhibitActionsForCurrentNetworkConditionsWithCompletion:(/*^block*/id)arg1;
-(void)canShowCloudDownloadButtonsWithCompletion:(/*^block*/id)arg1;
-(void)canShowCloudMusicWithCompletion:(/*^block*/id)arg1;
-(void)canShowCloudVideoWithCompletion:(/*^block*/id)arg1;
-(void)loadBooksForStoreIDs:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

