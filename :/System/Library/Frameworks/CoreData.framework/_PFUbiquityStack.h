/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, PFUbiquityMetadataFactoryEntry, NSString, PFUbiquityLocation;

@interface _PFUbiquityStack : NSObject {

	NSManagedObjectContext* _metadataMOC;
	PFUbiquityMetadataFactoryEntry* _metadataEntry;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootURL;
	NSString* _storeName;
	PFUbiquityLocation* _metadataStoreFileLocation;

}

@property (nonatomic,readonly) NSManagedObjectContext * metadataMOC;                        //@synthesize metadataMOC=_metadataMOC - In the implementation block
@property (nonatomic,readonly) PFUbiquityMetadataFactoryEntry * metadataEntry;              //@synthesize metadataEntry=_metadataEntry - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                      //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootURL;                        //@synthesize ubiquityRootURL=_ubiquityRootURL - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                        //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * metadataStoreFileLocation;              //@synthesize metadataStoreFileLocation=_metadataStoreFileLocation - In the implementation block
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootURL;
-(NSManagedObjectContext *)metadataMOC;
-(id)createMetadataStoreKnowledgeVector:(id*)arg1 ;
-(id)createMinMetadataStoreKnowledgeVector:(id*)arg1 ;
-(PFUbiquityLocation *)metadataStoreFileLocation;
-(id)initWithMetadataEntry:(id)arg1 ;
-(BOOL)purgeAndInitializeMetadataStoreFileWithError:(id*)arg1 ;
-(BOOL)purgeMetadataForStoreMetadata:(id)arg1 withError:(id*)arg2 ;
-(id)allPeers;
-(id)peerForPeerID:(id)arg1 createIfMissing:(BOOL)arg2 ;
-(PFUbiquityMetadataFactoryEntry *)metadataEntry;
-(void)dealloc;
-(id)init;
-(id)description;
@end

