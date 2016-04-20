/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/MPDataProvider.bundle/MPDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSString;

@interface MPBBSortMapping : NSObject {

	NSMutableArray* _recordIDsToSuppress;
	NSMutableDictionary* _bulletinRecordIDToSortIdentifier;
	NSString* _domain;

}

@property (nonatomic,retain) NSMutableArray * recordIDsToSuppress;                                //@synthesize recordIDsToSuppress=_recordIDsToSuppress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletinRecordIDToSortIdentifier;              //@synthesize bulletinRecordIDToSortIdentifier=_bulletinRecordIDToSortIdentifier - In the implementation block
@property (readonly) NSString * domain;                                                           //@synthesize domain=_domain - In the implementation block
-(id)initForDomain:(id)arg1 ;
-(void)suppressBulletinsWithSortIdentifierLessThanOrEqualTo:(id)arg1 ;
-(void)flushCacheKeepingRecordIDs:(id)arg1 ;
-(BOOL)isBulletinSuppressedForRecordID:(id)arg1 ;
-(void)suppressBulletinForRecordID:(id)arg1 ;
-(NSMutableArray *)recordIDsToSuppress;
-(NSMutableDictionary *)bulletinRecordIDToSortIdentifier;
-(void)setBulletinRecordIDToSortIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setRecordIDsToSuppress:(NSMutableArray *)arg1 ;
-(void)_loadSortMappingFromPreferences;
-(void)_saveSortMappingToPreferences;
-(void)_suppressBulletinForRecordID:(id)arg1 saving:(BOOL)arg2 ;
-(NSString *)domain;
@end

