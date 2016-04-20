/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, MPMediaQuery, NSString;

@interface SUScriptMediaQuery : SUScriptObject {

	NSArray* _collections;
	NSArray* _filterPredicates;
	NSArray* _items;
	BOOL _watchingLibrary;

}

@property (nonatomic,readonly) MPMediaQuery * nativeQuery; 
@property (readonly) NSArray * collections; 
@property (copy) id filterPredicates; 
@property (copy) NSString * groupingType; 
@property (readonly) NSArray * items; 
@property (readonly) NSString * comparisonTypeContains; 
@property (readonly) NSString * comparisonTypeEquals; 
@property (readonly) NSString * groupingTypeAlbum; 
@property (readonly) NSString * groupingTypeAlbumArtist; 
@property (readonly) NSString * groupingTypeArtist; 
@property (readonly) NSString * groupingTypeComposer; 
@property (readonly) NSString * groupingTypeGenre; 
@property (readonly) NSString * groupingTypePlaylist; 
@property (readonly) NSString * groupingTypePodcastTitle; 
@property (readonly) NSString * groupingTypeTitle; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)canFilterByProperty:(id)arg1 ;
-(void)setFilterPredicates:(id)arg1 ;
-(NSString *)groupingType;
-(id)filterPredicates;
-(void)setGroupingType:(NSString *)arg1 ;
-(NSArray *)collections;
-(void)_resetCaches;
-(void)addFilterPredicate:(id)arg1 ;
-(void)dealloc;
-(NSArray *)items;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)removeFilterPredicate:(id)arg1 ;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)_beginWatchingLibraryIfNecessary;
-(id)makeFilterPredicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3 ;
-(MPMediaQuery *)nativeQuery;
-(NSString *)comparisonTypeContains;
-(NSString *)comparisonTypeEquals;
-(NSString *)groupingTypeAlbum;
-(NSString *)groupingTypeAlbumArtist;
-(NSString *)groupingTypeArtist;
-(NSString *)groupingTypeComposer;
-(NSString *)groupingTypeGenre;
-(NSString *)groupingTypePlaylist;
-(NSString *)groupingTypePodcastTitle;
-(NSString *)groupingTypeTitle;
@end

