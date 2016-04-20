/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject {

	GEONavdCachePersistenceManager* _persistenceManager;

}
-(void)dealloc;
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(void)removeKey:(id)arg1 ;
-(void)_removeAllEntries;
-(id)loadEntryForRowId:(long long)arg1 ;
-(long long)numberOfEntriesOnDisk;
-(double)nextRefreshTimeStamp;
-(id)descriptionOfAllEntries;
-(id)rowIdsOfEntriesBeforeTimeStamp:(double)arg1 ;
-(void)saveValue:(id)arg1 forKey:(id)arg2 ;
-(id)loadValueForKey:(id)arg1 ;
@end

