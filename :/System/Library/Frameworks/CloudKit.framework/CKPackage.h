/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CKRecordValue.h>

@class NSArray, CKRecord, NSString, NSURL, CKSQLite, NSData;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue> {

	OpaquePCSShareProtectionRef _recordPCS;
	BOOL _wasCached;
	BOOL _uploaded;
	BOOL _downloaded;
	BOOL _hasSize;
	BOOL _shouldReadRawEncryptedData;
	BOOL _open;
	BOOL _transaction;
	BOOL _ownsTheAnchor;
	NSArray* _assets;
	CKRecord* _record;
	NSString* _recordKey;
	NSURL* _fileURL;
	NSString* _applicationBundleID;
	NSString* _UUID;
	unsigned long long _size;
	long long _storageGroupingPolicy;
	long long _uploadRank;
	NSString* _anchorPath;
	CKSQLite* _sqlite;
	long long _packageID;
	unsigned long long _nextItemIndex;

}

@property (nonatomic,copy) NSData * signature; 
@property (nonatomic,copy) NSArray * assets;                                     //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic,__weak) CKRecord * record;                           //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * recordKey;                                 //@synthesize recordKey=_recordKey - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef recordPCS;              //@synthesize recordPCS=_recordPCS - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                     //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * UUID;                                    //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) unsigned long long size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL wasCached;                                     //@synthesize wasCached=_wasCached - In the implementation block
@property (assign,nonatomic) BOOL uploaded;                                      //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) BOOL downloaded;                                    //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                       //@synthesize hasSize=_hasSize - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                    //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
@property (assign,nonatomic) long long storageGroupingPolicy;                    //@synthesize storageGroupingPolicy=_storageGroupingPolicy - In the implementation block
@property (assign,nonatomic) long long uploadRank;                               //@synthesize uploadRank=_uploadRank - In the implementation block
@property (nonatomic,retain) NSString * anchorPath;                              //@synthesize anchorPath=_anchorPath - In the implementation block
@property (nonatomic,retain) CKSQLite * sqlite;                                  //@synthesize sqlite=_sqlite - In the implementation block
@property (assign,nonatomic) long long packageID;                                //@synthesize packageID=_packageID - In the implementation block
@property (assign,nonatomic) unsigned long long nextItemIndex;                   //@synthesize nextItemIndex=_nextItemIndex - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,getter=inTransaction,nonatomic) BOOL transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL ownsTheAnchor;                                 //@synthesize ownsTheAnchor=_ownsTheAnchor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_packagesPathForBundleID:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)destroyPackageAnchoredAtURL:(id)arg1 ;
+(id)packageUploadDirectoryName;
-(void)setStorageGroupingPolicy:(long long)arg1 ;
-(NSString *)anchorPath;
-(id)initWithArchivedAnchoredPackage:(id)arg1 ;
-(void)setAnchorPath:(NSString *)arg1 ;
-(id)_initWithPath:(id)arg1 UUID:(id)arg2 ;
-(id)_packageDatabasePathWithUUID:(id)arg1 ;
-(CKSQLite *)sqlite;
-(long long)packageID;
-(BOOL)ownsTheAnchor;
-(void)setOwnsTheAnchor:(BOOL)arg1 ;
-(void)destroy;
-(void)_setReferenceCount:(long long)arg1 ;
-(BOOL)isAnchorStillValid;
-(void)setSqlite:(CKSQLite *)arg1 ;
-(void)incReferenceCount;
-(BOOL)inTransaction;
-(BOOL)decReferenceCount;
-(id)_itemWithColumnsByName:(id)arg1 ;
-(id)_itemOrNilAtIndex:(unsigned long long)arg1 ;
-(void)updateItemAtIndex:(long long)arg1 withFileURL:(id)arg2 ;
-(void)setPackageID:(long long)arg1 ;
-(unsigned long long)nextItemIndex;
-(void)setNextItemIndex:(unsigned long long)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(void)endTransaction;
-(unsigned long long)itemCount;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(CKRecord *)record;
-(unsigned long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)UUID;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)close;
-(NSURL *)fileURL;
-(BOOL)wasCached;
-(id)initWithAnchorURL:(id)arg1 ;
-(void)setWasCached:(BOOL)arg1 ;
-(NSString *)applicationBundleID;
-(id)CKPropertiesDescription;
-(void)setRecord:(CKRecord *)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(NSString *)recordKey;
-(void)setDownloaded:(BOOL)arg1 ;
-(void)updateItemsAtIndexes:(id)arg1 fileURLs:(id)arg2 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)downloaded;
-(long long)storageGroupingPolicy;
-(long long)uploadRank;
-(BOOL)uploaded;
-(id)itemEnumerator;
-(void)addSection:(id)arg1 ;
-(void)updateItemAtIndex:(long long)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned long long)arg5 ;
-(void)setUploaded:(BOOL)arg1 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(id)itemEnumeratorForSectionAtIndex:(unsigned long long)arg1 ;
-(void)setRecordKey:(NSString *)arg1 ;
-(OpaquePCSShareProtectionRef)recordPCS;
-(BOOL)shouldReadRawEncryptedData;
-(void)setRecordPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(void)setUploadRank:(long long)arg1 ;
-(BOOL)open;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(void)setTransaction:(BOOL)arg1 ;
-(unsigned long long)sectionCount;
-(BOOL)hasSize;
-(BOOL)isOpen;
-(void)setUUID:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
-(void)beginTransaction;
@end

