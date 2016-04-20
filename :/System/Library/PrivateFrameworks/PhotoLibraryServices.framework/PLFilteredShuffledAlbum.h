/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLShuffledAlbum.h>

@class NSPredicate;

@interface PLFilteredShuffledAlbum : PLShuffledAlbum {

	int _filter;
	NSPredicate* _filterPredicate;

}

@property (nonatomic,readonly) int filter;                                        //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain,readonly) NSPredicate * filterPredicate;              //@synthesize filterPredicate=_filterPredicate - In the implementation block
+(NSObject*)_shuffledAlbumWithAlbum:(NSObject*)arg1 filter:(int)arg2 startingAsset:(id)arg3 ;
-(void)createShuffledIndexesMaps;
-(NSPredicate *)filterPredicate;
-(int)filter;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithBackingAlbum:(NSObject*)arg1 filter:(int)arg2 startingAsset:(id)arg3 ;
-(NSObject*)unshuffledAlbum;
@end

