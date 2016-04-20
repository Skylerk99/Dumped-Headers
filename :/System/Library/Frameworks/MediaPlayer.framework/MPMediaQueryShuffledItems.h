/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, MPMediaQuery, NSArray;

@interface MPMediaQueryShuffledItems : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _activeShuffleType;
	BOOL _dirty;
	NSMutableArray* _orderedArray;
	MPMediaQuery* _sourceMediaQuery;
	NSArray* _sourceMediaQueryItems;
	NSRange _focusedRange;

}

@property (nonatomic,readonly) MPMediaQuery * sourceMediaQuery;                 //@synthesize sourceMediaQuery=_sourceMediaQuery - In the implementation block
@property (assign,nonatomic) NSRange focusedRange;                              //@synthesize focusedRange=_focusedRange - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long realShuffleType; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)realShuffleType;
-(id)initWithSourceMediaQuery:(id)arg1 orderedItems:(id)arg2 shuffleType:(unsigned long long)arg3 ;
-(void)_rebuildCaches;
-(unsigned long long)indexOfItemWithPersistentID:(unsigned long long)arg1 greaterThanOrEqualToIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 greaterThanOrEqualToIndex:(unsigned long long)arg2 ;
-(void)_resetCaches;
-(void)_rebuildCachesWithInitialSourceIndex:(unsigned long long)arg1 ;
-(void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned long long)arg1 ;
-(void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned long long)arg1 ;
-(void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned long long)arg1 ;
-(id)_includeInShuffleItemsForQuery:(id)arg1 ;
-(id)initWithSourceMediaQuery:(id)arg1 ;
-(unsigned long long)indexOfItemWithPersistentID:(unsigned long long)arg1 ;
-(void)invalidateSourceMediaQueryAndLoadItems;
-(void)shuffleAlbumsWithInitialIndex:(unsigned long long)arg1 ;
-(void)shuffleItemsWithInitialIndex:(unsigned long long)arg1 ;
-(void)unshuffle;
-(MPMediaQuery *)sourceMediaQuery;
-(NSRange)focusedRange;
-(void)setFocusedRange:(NSRange)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
@end

