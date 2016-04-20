/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSString;

@interface PHCollection : PHObject {

	BOOL _customSortAscending;
	int _customSortKey;
	unsigned long long _estimatedPhotosCount;
	unsigned long long _estimatedVideosCount;

}

@property (nonatomic,readonly) BOOL canContainAssets; 
@property (nonatomic,readonly) BOOL canContainCollections; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long estimatedPhotosCount;              //@synthesize estimatedPhotosCount=_estimatedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedVideosCount;              //@synthesize estimatedVideosCount=_estimatedVideosCount - In the implementation block
@property (nonatomic,readonly) BOOL customSortAscending;                             //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (nonatomic,readonly) int customSortKey;                                    //@synthesize customSortKey=_customSortKey - In the implementation block
+(id)managedEntityName;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)fetchTopLevelUserCollectionsWithOptions:(id)arg1 ;
+(id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(unsigned long long)estimatedPhotosCount;
-(unsigned long long)estimatedVideosCount;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(BOOL)collectionHasFixedOrder;
-(BOOL)collectionCanBePinned;
-(BOOL)canContainCollections;
-(BOOL)canContainAssets;
-(id)description;
-(NSString *)localizedTitle;
-(BOOL)customSortAscending;
-(int)customSortKey;
@end

