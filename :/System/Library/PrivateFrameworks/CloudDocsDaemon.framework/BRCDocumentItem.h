/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCLocalVersion, BRCDesiredVersion, NSMutableSet, NSString, BRCAliasItem, BRCDirectoryItem, BRCItemID, NSSet, NSDictionary;

@interface BRCDocumentItem : BRCLocalItem {

	BRCLocalVersion* _currentVersion;
	BRCDesiredVersion* _desiredVersion;
	NSMutableSet* _liveConflictLoserEtags;
	NSMutableSet* _resolvedConflictLoserEtags;

}

@property (nonatomic,readonly) NSString * unsaltedBookmarkData; 
@property (nonatomic,readonly) NSString * bookmarkData; 
@property (nonatomic,readonly) BRCAliasItem * asAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) BOOL hasLocalContent; 
@property (nonatomic,readonly) BOOL isEvictable; 
@property (nonatomic,readonly) BOOL isAutomaticallyEvictable; 
@property (nonatomic,readonly) BOOL isVisibleIniCloudDrive; 
@property (nonatomic,readonly) BOOL isDownloadRequested; 
@property (nonatomic,readonly) BOOL shouldBeGreedy; 
@property (nonatomic,readonly) BOOL shouldHaveThumbnail; 
@property (nonatomic,readonly) BOOL shouldTransferThumbnail; 
@property (nonatomic,readonly) unsigned queryItemStatus; 
@property (nonatomic,readonly) unsigned downloadStatus; 
@property (nonatomic,readonly) unsigned uploadStatus; 
@property (nonatomic,readonly) BOOL isInTransfer; 
@property (nonatomic,readonly) BRCLocalVersion * currentVersion;                //@synthesize currentVersion=_currentVersion - In the implementation block
@property (nonatomic,readonly) BRCDesiredVersion * desiredVersion;              //@synthesize desiredVersion=_desiredVersion - In the implementation block
@property (nonatomic,readonly) BRCItemID * aliasItemID; 
@property (nonatomic,readonly) NSString * UTI; 
@property (nonatomic,retain) NSSet * liveConflictLoserEtags;                    //@synthesize liveConflictLoserEtags=_liveConflictLoserEtags - In the implementation block
@property (nonatomic,readonly) NSSet * resolvedConflictLoserEtags;              //@synthesize resolvedConflictLoserEtags=_resolvedConflictLoserEtags - In the implementation block
@property (nonatomic,readonly) NSDictionary * conflictLoserState; 
+(BOOL)parseBookmarkData:(id)arg1 inAccountSession:(id)arg2 docID:(id*)arg3 itemID:(id*)arg4 mangledID:(id*)arg5 unsaltedBookmarkData:(id*)arg6 error:(id*)arg7 ;
+(id)bookmarkDataWithRelativePath:(id)arg1 ;
+(id)unsaltedBookmarkDataWithRelativePath:(id)arg1 ;
+(id)unsaltedBookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2 ;
+(id)itemResolutionStringWithRelativePath:(id)arg1 ;
+(id)bookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(PQLResultSet*)reverseAliasEnumeratorWithUnsaltedBookmarkData:(id)arg1 session:(id)arg2 ;
+(PQLResultSet*)reverseAliasEnumeratorWithRelativePath:(id)arg1 ;
-(NSString *)unsaltedBookmarkData;
-(NSString *)bookmarkData;
-(id)itemResolutionString;
-(float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
-(float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
-(id)contentsRecordID;
-(BOOL)isPackage;
-(BOOL)isFault;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)UTI;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)isDocument;
-(BRCDocumentItem *)asDocument;
-(BRCDesiredVersion *)desiredVersion;
-(NSSet *)liveConflictLoserEtags;
-(unsigned)downloadStatus;
-(unsigned)uploadStatus;
-(BOOL)isDownloadRequested;
-(BOOL)evictWithGroup:(id)arg1 error:(id*)arg2 ;
-(PQLResultSet*)reverseAliasEnumerator;
-(BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2 ;
-(BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(BRCItemID *)aliasItemID;
-(void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(BOOL)arg4 ;
-(void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1 ;
-(void)markDead;
-(BOOL)updateXattrInfoFromPathPath:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(void)handleUnknownItemError;
-(BOOL)hasLocalContent;
-(BOOL)shouldHaveThumbnail;
-(BOOL)shouldTransferThumbnail;
-(void)setLiveConflictLoserEtags:(NSSet *)arg1 ;
-(NSSet *)resolvedConflictLoserEtags;
-(void)learnThumbnailSignatureFromVersion:(id)arg1 ;
-(id)_initWithRelativePath:(id)arg1 parentID:(id)arg2 ;
-(id)_initWithLocalItem:(id)arg1 ;
-(id)_initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isInterestingUpdateForNotifs;
-(id)setOfContainersIDsWithReverseAliases;
-(BOOL)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(BOOL)arg3 ;
-(unsigned long long)diffAgainstLocalItem:(id)arg1 ;
-(BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(void)updateVersionMetadataFromServerItem:(id)arg1 preventVersionDiffs:(BOOL)arg2 ;
-(void)markNeedsReading;
-(void)clearFromStage;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1 ;
-(BOOL)isSharedByMe;
-(BOOL)isSharedByMeWithAShareID;
-(id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(void)markForceNeedsSyncUp;
-(void)markLatestSyncRequestRejected;
-(void)markLatestRequestAcknowledged;
-(void)markLiveFromStage;
-(void)startDownloadWithOptions:(unsigned long long)arg1 group:(id)arg2 ;
-(BOOL)isEvictable;
-(BOOL)_isSmallAndMostRecentClientsGenerateThumbnails;
-(unsigned)queryItemStatus;
-(void)refreshLosersListIfNeededAtPath:(id)arg1 ;
-(void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg1 ;
-(void)stageFaultForCreation:(BOOL)arg1 serverItem:(id)arg2 ;
-(void)_updateLiveConflictLoserFromFSAtPath:(id)arg1 ;
-(void)removeLiveConflictLoserEtag:(id)arg1 ;
-(void)addResolvedConflictLoserEtag:(id)arg1 ;
-(void)clearVersionSignatures:(unsigned long long)arg1 isPackage:(BOOL)arg2 ;
-(void)markForceUpload;
-(NSDictionary *)conflictLoserState;
-(void)_updateReadThrottleIfNeededForRowID:(unsigned long long)arg1 forCreation:(BOOL)arg2 ;
-(BOOL)_nukeVersionsFromDB:(id)arg1 ;
-(void)_updateUploadThrottleIfNeededWithDiffs:(unsigned long long)arg1 ;
-(BOOL)isAutomaticallyEvictable;
-(int)setVersionToStage:(id)arg1 diffsWithServerItem:(unsigned long long)arg2 options:(unsigned)arg3 needsSave:(BOOL*)arg4 ;
-(BOOL)isVisibleIniCloudDrive;
-(BOOL)shouldBeGreedy;
-(BOOL)isInTransfer;
-(void)clearDesiredVersion;
-(void)forceiWorkConflictEtag:(id)arg1 ;
-(void)forceVersionConflictByClearkingCKInfo;
-(void)appDidResolveConflictLoserWithEtag:(id)arg1 ;
-(void)markUploadedWithRecord:(id)arg1 ;
-(void)markOverQuotaWithError:(id)arg1 ;
-(BRCLocalVersion *)currentVersion;
@end

