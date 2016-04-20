/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPObjectDelegate;
@class NSUUID, TSPUnknownContent, TSPComponent, TSUUUIDPath, TSPObjectContext, NSString;

@interface TSPObject : NSObject {

	long long _identifier;
	long long _modifyObjectToken;
	NSUUID* _UUID;
	long long _unarchiverIdentifier;
	TSPUnknownContent* _unknownContent;
	TSPComponent* _component;
	id<TSPObjectDelegate> _delegate;

}

@property (nonatomic,readonly) TSUUUIDPath * objectUUIDPath; 
@property (nonatomic,readonly) BOOL tsp_isInDocument; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) NSString * tsp_description; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) BOOL isComponentRoot; 
@property (nonatomic,readonly) BOOL storeOutsideObjectArchive; 
@property (nonatomic,readonly) TSPObject * componentRootObject; 
@property (nonatomic,readonly) BOOL allowsImplicitComponentOwnership; 
@property (nonatomic,readonly) BOOL shouldDelayArchiving; 
@property (nonatomic,readonly) unsigned delayedArchivingPriority; 
@property (nonatomic,copy) NSUUID * objectUUID; 
@property (nonatomic,readonly) BOOL isCommandObject; 
@property (assign,nonatomic) long long tsp_identifier; 
@property (nonatomic,readonly) long long tsp_unarchiverIdentifier;                   //@synthesize unarchiverIdentifier=_unarchiverIdentifier - In the implementation block
@property (nonatomic,readonly) TSPUnknownContent * tsp_unknownContent;               //@synthesize unknownContent=_unknownContent - In the implementation block
@property (assign,nonatomic) long long tsp_modifyObjectToken; 
@property (assign,nonatomic,__weak) TSPComponent * tsp_component;                    //@synthesize component=_component - In the implementation block
@property (assign,nonatomic,__weak) id<TSPObjectDelegate> tsp_delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL needsArchiving; 
+(BOOL)needsObjectUUID;
+(id)newObjectForUnarchiver:(id)arg1 ;
+(BOOL)tsp_isTransientObjectIdentifier:(long long)arg1 ;
-(id)owningDocument;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(id)objectLocale;
-(BOOL)documentIsRTL;
-(id)documentRoot;
-(void)deallocSOS;
-(void)wasAddedToDocumentDuringUnarchive;
-(void)wasAddedToDocumentWithOptions:(unsigned long long)arg1 ;
-(BOOL)tsp_isInDocument;
-(TSUUUIDPath *)objectUUIDPath;
-(void)wasAddedToDocument;
-(void)wasAddedToDocumentDuringImport;
-(void)willBeRemovedFromDocument;
-(void)didInitFromSOS;
-(id)tsp_objectInfoWithDepth:(unsigned long long)arg1 ;
-(id)tsp_referencedData;
-(id)tsp_referencedObjects;
-(void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 objectMap:(id*)arg3 error:(id*)arg4 ;
-(id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)tsp_deepCopyWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)tsp_deepCopyWithOptions:(id)arg1 ;
-(id)initBaseObjectWithContext:(id)arg1 ;
-(NSString *)packageLocator;
-(void)willModifyForUpgrade;
-(id)initFromUnarchiver:(id)arg1 ;
-(id)initBaseObjectFromUnarchiver:(id)arg1 ;
-(NSUUID *)objectUUID;
-(void)willModify;
-(id)tsp_descriptionWithDepth:(unsigned long long)arg1 ;
-(id)initDocumentObjectWithContext:(id)arg1 ;
-(void)performBlockIgnoringModifications:(/*^block*/id)arg1 ;
-(BOOL)isComponentRoot;
-(BOOL)storeOutsideObjectArchive;
-(void)willModifyToComponentRootObject:(id)arg1 ;
-(TSPObject *)componentRootObject;
-(BOOL)allowsImplicitComponentOwnership;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(BOOL)isCommandObject;
-(void)saveToArchiver:(id)arg1 ;
-(void)didFinishUnarchiving;
-(void)setObjectUUID:(NSUUID *)arg1 ;
-(NSString *)tsp_description;
-(long long)tsp_identifier;
-(void)setTsp_identifier:(long long)arg1 ;
-(long long)tsp_modifyObjectToken;
-(void)setTsp_modifyObjectToken:(long long)arg1 ;
-(long long)tsp_unarchiverIdentifier;
-(TSPUnknownContent *)tsp_unknownContent;
-(TSPComponent *)tsp_component;
-(void)setTsp_component:(TSPComponent *)arg1 ;
-(id<TSPObjectDelegate>)tsp_delegate;
-(void)setTsp_delegate:(id<TSPObjectDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(TSPObjectContext *)context;
-(id)initWithContext:(id)arg1 ;
-(id)initCommon;
-(BOOL)needsArchiving;
@end

