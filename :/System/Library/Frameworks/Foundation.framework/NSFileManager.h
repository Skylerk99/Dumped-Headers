/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSFileManager : NSObject

@property (assign) id<NSFileManagerDelegate> delegate; 
@property (copy,readonly) NSString * currentDirectoryPath; 
@property (copy,readonly) id<NSObject><NSCopying><NSCoding> ubiquityIdentityToken; 
+(id)cacheDirectoryPathWithName:(id)arg1 ;
+(BOOL)_storeMovePath:(id)arg1 toPath:(id)arg2 ;
+(BOOL)ensureDirectoryExists:(id)arg1 ;
+(id)_web_createTemporaryFileForQuickLook:(id)arg1 ;
+(id)defaultManager;
-(id)brc_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(int)brc_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(id)brc_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(BOOL)br_movePromisedItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)safari_settingsDirectory;
-(BOOL)safari_removeFileAtURL:(id)arg1 error:(id*)arg2 ;
-(id)safari_ensureDirectoryExists:(id)arg1 ;
-(id)_safari_containerDirectory;
-(id)_safari_safariLibraryDirectory;
-(id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2 ;
-(id)gs_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(int)gs_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(id)gs_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 andExtension:(id)arg3 error:(id*)arg4 ;
-(id)caseSensitivePathForPath:(id)arg1 ;
-(BOOL)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2 ;
-(BOOL)createDirectoryIfNeededAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)directoryExistsAtPath:(id)arg1 ;
-(id)tmpFileForVideoTranscodeToPhotoDataDirectory:(BOOL)arg1 withExtension:(id)arg2 ;
-(id)makeUniqueDirectoryWithPath:(id)arg1 ;
-(BOOL)cplFileExistsAtURL:(id)arg1 ;
-(BOOL)cplIsFileExistsError:(id)arg1 ;
-(BOOL)cplIsHardLinkNotPossibleError:(id)arg1 ;
-(BOOL)cplCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)cplLinkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)cplMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)cplIsFileDoesNotExistError:(id)arg1 ;
-(id)mf_makeUniqueFileInDirectory:(id)arg1 ;
-(BOOL)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id*)arg3 ;
-(id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2 ;
-(id)mf_valueForExtendedAttribute:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id*)arg4 ;
-(BOOL)mf_makeCompletePath:(id)arg1 mode:(int)arg2 ;
-(BOOL)mf_canWriteToDirectoryAtPath:(id)arg1 ;
-(void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3 ;
-(id)_webkit_createTemporaryDirectoryWithTemplatePrefix:(id)arg1 ;
-(id)_webkit_pathWithUniqueFilenameForPath:(id)arg1 ;
-(id)_randomTemporaryPathWithFileName:(id)arg1 ;
-(id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 ;
-(id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(BOOL)_isPathOnMissingVolume:(id)arg1 ;
-(BOOL)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 asCopy:(BOOL)arg5 ;
-(id)_generateLinkForURL:(id)arg1 ;
-(id)_randomTemporaryPathWithSuffix:(id)arg1 ;
-(BOOL)makeDirectoriesInPath:(id)arg1 mode:(unsigned)arg2 ;
-(BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 ;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 ;
-(BOOL)_cutIsPathOnMissingVolume:(id)arg1 ;
-(id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)cutRandomTemporaryPathWithFileName:(id)arg1 ;
-(id)_web_carbonPathForPath_nowarn:(id)arg1 ;
-(BOOL)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(BOOL*)arg2 traverseLink:(BOOL)arg3 ;
-(id)_web_startupVolumeName_nowarn;
-(BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2 ;
-(void)_web_noteFileChangedAtPath_nowarn:(id)arg1 ;
-(BOOL)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2 ;
-(BOOL)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2 ;
-(void)_performRemoveFileAtPath:(id)arg1 ;
-(BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4 ;
-(BOOL)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(void)_web_backgroundRemoveFileAtPath:(id)arg1 ;
-(void)_web_backgroundRemoveLeftoverFiles:(id)arg1 ;
-(id)_web_visibleItemsInDirectoryAtPath:(id)arg1 ;
-(BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2 ;
-(id)_web_pathWithUniqueFilenameForPath:(id)arg1 ;
-(BOOL)_web_removeFileOnlyAtPath:(id)arg1 ;
-(id)_info;
-(id)componentsToDisplayForPath:(id)arg1 ;
-(id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 withPath:(id)arg3 ;
-(id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2 ;
-(NSString *)currentDirectoryPath;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(BOOL)arg4 error:(id*)arg5 ;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(BOOL)arg4 ;
-(BOOL)changeFileAttributes:(id)arg1 atPath:(id)arg2 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3 ;
-(const char*)fileSystemRepresentationWithPath:(id)arg1 ;
-(BOOL)contentsEqualAtPath:(id)arg1 andPath:(id)arg2 ;
-(id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processUsesCloudServices;
-(BOOL)_processHasUbiquityContainerEntitlement;
-(BOOL)_processCanAccessUbiquityIdentityToken;
-(id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_URLForTrashingItemAtURL:(id)arg1 create:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)getRelationship:(long long*)arg1 ofDirectory:(unsigned long long)arg2 inDomain:(unsigned long long)arg3 toItemAtURL:(id)arg4 error:(id*)arg5 ;
-(id)_displayPathForPath:(id)arg1 ;
-(BOOL)directoryCanBeCreatedAtPath:(id)arg1 ;
-(BOOL)changeCurrentDirectoryPath:(id)arg1 ;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(BOOL)isExecutableFileAtPath:(id)arg1 ;
-(BOOL)isDeletableFileAtPath:(id)arg1 ;
-(BOOL)removeFileAtPath:(id)arg1 handler:(id)arg2 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(id)pathContentOfSymbolicLinkAtPath:(id)arg1 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2 ;
-(id)contentsAtPath:(id)arg1 ;
-(id)fileSystemAttributesAtPath:(id)arg1 ;
-(id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2 ;
-(id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4 ;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(BOOL)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(BOOL)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(BOOL)filesystemItemRemoveOperation:(id)arg1 shouldRemoveItemAtPath:(id)arg2 ;
-(BOOL)filesystemItemRemoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3 ;
-(BOOL)trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3 ;
-(id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3 ;
-(id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6 ;
-(BOOL)setUbiquitous:(BOOL)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id*)arg4 ;
-(BOOL)evictUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id*)arg2 error:(id*)arg3 ;
-(void)_registerForUbiquityAccountChangeNotifications;
-(BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<NSFileManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<NSFileManagerDelegate>)delegate;
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(BOOL)getRelationship:(long long*)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id*)arg4 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)fileExistsAtPath:(id)arg1 isDirectory:(BOOL*)arg2 ;
-(id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)isWritableFileAtPath:(id)arg1 ;
-(BOOL)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id<NSObject><NSCopying><NSCoding>)ubiquityIdentityToken;
-(BOOL)isUbiquitousItemAtURL:(id)arg1 ;
-(id)displayNameAtPath:(id)arg1 ;
-(id)URLForUbiquityContainerIdentifier:(id)arg1 ;
-(id)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 ;
-(id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(BOOL)arg4 error:(id*)arg5 ;
-(id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(id)stringWithFileSystemRepresentation:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isReadableFileAtPath:(id)arg1 ;
-(BOOL)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)subpathsAtPath:(id)arg1 ;
-(id)enumeratorAtPath:(id)arg1 ;
-(BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
@end

