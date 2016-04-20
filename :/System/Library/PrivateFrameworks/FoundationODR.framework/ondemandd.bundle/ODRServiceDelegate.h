/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ODRServiceDelegate : NSObject <NSXPCListenerDelegate> {

	BOOL wasDBRebuilt;
	NSString* _libraryPath;
	NSString* _manifestsPath;
	NSString* _databasePath;
	NSString* _assetPacksPath;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,retain) NSString * libraryPath;                                                 //@synthesize libraryPath=_libraryPath - In the implementation block
@property (nonatomic,retain) NSString * manifestsPath;                                               //@synthesize manifestsPath=_manifestsPath - In the implementation block
@property (nonatomic,retain) NSString * databasePath;                                                //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,retain) NSString * assetPacksPath;                                              //@synthesize assetPacksPath=_assetPacksPath - In the implementation block
@property (assign,nonatomic) BOOL wasDBRebuilt; 
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDelegate;
-(NSString *)assetPacksPath;
-(void)handleApplicationDemotionWithBundleID:(id)arg1 ;
-(void)syncApplicationTask:(/*^block*/id)arg1 ;
-(void)handleApplicationInstallWithBundleID:(id)arg1 ;
-(void)handleApplicationUninstallWithBundleID:(id)arg1 ;
-(BOOL)isAssetPacksDirectoryEmpty;
-(void)setWasDBRebuilt:(BOOL)arg1 ;
-(BOOL)ensureAllLibraryPathsExist:(BOOL*)arg1 ;
-(id)_applicationTaskLock;
-(void)deleteAssetsForBundleID:(id)arg1 ;
-(void)handleApplicationUpdateWithBundleID:(id)arg1 manifestData:(id)arg2 ;
-(BOOL)wasDBRebuilt;
-(NSString *)manifestsPath;
-(void)setManifestsPath:(NSString *)arg1 ;
-(void)setAssetPacksPath:(NSString *)arg1 ;
-(id)init;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)libraryPath;
-(void)setLibraryPath:(NSString *)arg1 ;
-(void)setDatabasePath:(NSString *)arg1 ;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSString *)databasePath;
@end

