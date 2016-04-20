/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSURL, NSDictionary, NSString, NSNumber;

@interface BookmarkDAVSyncData : NSObject {

	void* _db;
	NSMutableDictionary* _backingDict;
	BOOL _hasChanges;

}

@property (nonatomic,readonly) BOOL hasChanges;                                  //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,retain) NSURL * homeURL; 
@property (assign,nonatomic) BOOL initialSyncDone; 
@property (nonatomic,retain) NSDictionary * pushTransports; 
@property (nonatomic,retain) NSString * pushKey; 
@property (nonatomic,retain) NSString * ctag; 
@property (nonatomic,retain) NSString * ptag; 
@property (nonatomic,retain) NSString * etag; 
@property (nonatomic,retain) NSString * syncToken; 
@property (nonatomic,retain) NSDictionary * bulkRequests; 
@property (assign,nonatomic) BOOL supportsSyncCollection; 
@property (nonatomic,retain) NSString * bookmarksBarId; 
@property (nonatomic,retain) NSString * bookmarksMenuId; 
@property (assign,nonatomic) unsigned long long bookmarksBarOrder; 
@property (assign,nonatomic) unsigned long long bookmarksMenuOrder; 
@property (nonatomic,retain) NSDictionary * heldAsideOrderings; 
@property (assign,nonatomic) BOOL hasHitQuotaLimit; 
@property (nonatomic,retain) NSNumber * knownQuotaRemaining; 
@property (assign,nonatomic) unsigned long long clientVersion; 
@property (nonatomic,retain) NSString * accountPrsId; 
@property (nonatomic,retain) NSURL * principalURL; 
-(NSDictionary *)bulkRequests;
-(void)setBulkRequests:(NSDictionary *)arg1 ;
-(NSString *)pushKey;
-(void)setPushKey:(NSString *)arg1 ;
-(BOOL)hasChanges;
-(void)dealloc;
-(id)initWithBookmarkDatabase:(void*)arg1 ;
-(void)writeToBookmarkDB;
-(void)setInitialSyncDone:(BOOL)arg1 ;
-(void)setPtag:(NSString *)arg1 ;
-(void)setSupportsSyncCollection:(BOOL)arg1 ;
-(BOOL)hasHitQuotaLimit;
-(NSNumber *)knownQuotaRemaining;
-(void)setHasHitQuotaLimit:(BOOL)arg1 ;
-(void)setKnownQuotaRemaining:(NSNumber *)arg1 ;
-(NSString *)bookmarksBarId;
-(unsigned long long)bookmarksBarOrder;
-(NSString *)bookmarksMenuId;
-(unsigned long long)bookmarksMenuOrder;
-(void)setBookmarksBarOrder:(unsigned long long)arg1 ;
-(void)setBookmarksMenuOrder:(unsigned long long)arg1 ;
-(BOOL)initialSyncDone;
-(void)setBookmarksBarId:(NSString *)arg1 ;
-(void)setBookmarksMenuId:(NSString *)arg1 ;
-(NSString *)ptag;
-(NSDictionary *)heldAsideOrderings;
-(void)setHeldAsideOrderings:(NSDictionary *)arg1 ;
-(NSString *)accountPrsId;
-(BOOL)supportsSyncCollection;
-(void)setAccountPrsId:(NSString *)arg1 ;
-(NSString *)syncToken;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(void)setSyncToken:(NSString *)arg1 ;
-(NSDictionary *)pushTransports;
-(void)setPushTransports:(NSDictionary *)arg1 ;
-(NSURL *)homeURL;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(void)setHomeURL:(NSURL *)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(NSURL *)principalURL;
-(void)setClientVersion:(unsigned long long)arg1 ;
-(unsigned long long)clientVersion;
@end

