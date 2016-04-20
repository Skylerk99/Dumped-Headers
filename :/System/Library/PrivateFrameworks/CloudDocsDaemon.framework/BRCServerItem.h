/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCItem.h>

@class BRCAccountSession, BRCServerZone, BRCLocalContainer, NSNumber, BRCItemID, NSString, BRCStatInfo, BRCVersion;

@interface BRCServerItem : NSObject <BRCItem> {

	BRCAccountSession* _session;
	BRCServerZone* _zone;
	BRCLocalContainer* _container;
	unsigned long long _sharingOptions;
	BOOL _needsInsert;
	NSNumber* _ownerKey;
	BRCItemID* _itemID;
	NSString* _originalName;
	long long _rank;
	BRCStatInfo* _st;
	BRCVersion* _latestVersion;
	BRCServerZone* _serverZone;

}

@property (nonatomic,readonly) long long rank;                               //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSString * originalName;                      //@synthesize originalName=_originalName - In the implementation block
@property (nonatomic,readonly) BRCStatInfo * st;                             //@synthesize st=_st - In the implementation block
@property (nonatomic,readonly) BRCVersion * latestVersion;                   //@synthesize latestVersion=_latestVersion - In the implementation block
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isAlias; 
@property (nonatomic,readonly) BOOL isPackage; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) BRCItemID * itemID;                           //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSNumber * ownerKey;                          //@synthesize ownerKey=_ownerKey - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BRCServerZone * serverZone;                   //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,readonly) BRCLocalContainer * container;                //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned long long sharingOptions;              //@synthesize sharingOptions=_sharingOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isLive;
-(BOOL)isDirectory;
-(BOOL)isPackage;
-(BRCItemID *)itemID;
-(BRCAccountSession *)session;
-(BRCVersion *)latestVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BRCLocalContainer *)container;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)isDocument;
-(BOOL)isAlias;
-(BRCStatInfo *)st;
-(BOOL)isDead;
-(unsigned long long)sharingOptions;
-(NSNumber *)ownerKey;
-(BRCServerZone *)serverZone;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1 ;
-(void)setSharingOptions:(unsigned long long)arg1 ;
-(id)initFromPQLResultSet:(id)arg1 serverZone:(id)arg2 error:(id*)arg3 ;
-(id)initWithServerItem:(id)arg1 ;
-(id)newLocalItemWithServerZone:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(NSString *)originalName;
-(long long)rank;
@end

