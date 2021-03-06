/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaLibraryArtworkRequest, MPMediaLibraryArtworkDataSource;

@interface MPMediaChapter : NSObject {

	long long _chapterType;
	unsigned long long _indexInChaptersWithAnyType;
	unsigned long long _indexInChaptersWithSameType;
	double _playbackDuration;
	double _playbackTime;
	id _value;
	/*^block*/id _valueLoader;
	MPMediaLibraryArtworkRequest* _artworkRequest;
	MPMediaLibraryArtworkDataSource* _artworkDataSource;

}

@property (assign,nonatomic) long long chapterType;                                                   //@synthesize chapterType=_chapterType - In the implementation block
@property (nonatomic,retain) id value;                                                                //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double playbackTime;                                                     //@synthesize playbackTime=_playbackTime - In the implementation block
@property (assign,nonatomic) double playbackDuration;                                                 //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,copy) id valueLoader;                                                            //@synthesize valueLoader=_valueLoader - In the implementation block
@property (assign,nonatomic) unsigned long long indexInChaptersWithSameType;                          //@synthesize indexInChaptersWithSameType=_indexInChaptersWithSameType - In the implementation block
@property (assign,nonatomic) unsigned long long indexInChaptersWithAnyType;                           //@synthesize indexInChaptersWithAnyType=_indexInChaptersWithAnyType - In the implementation block
@property (nonatomic,retain) MPMediaLibraryArtworkRequest * artworkRequest;                           //@synthesize artworkRequest=_artworkRequest - In the implementation block
@property (assign,nonatomic,__weak) MPMediaLibraryArtworkDataSource * artworkDataSource;              //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
-(id)artworkCatalog;
-(long long)_sortByChapterIndex:(id)arg1 ;
-(MPMediaLibraryArtworkDataSource *)artworkDataSource;
-(long long)chapterType;
-(double)playbackTime;
-(unsigned long long)indexInChaptersWithAnyType;
-(unsigned long long)indexInChaptersWithSameType;
-(void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg1 ;
-(void)setArtworkDataSource:(MPMediaLibraryArtworkDataSource *)arg1 ;
-(void)setChapterType:(long long)arg1 ;
-(void)setIndexInChaptersWithSameType:(unsigned long long)arg1 ;
-(void)setIndexInChaptersWithAnyType:(unsigned long long)arg1 ;
-(void)setPlaybackTime:(double)arg1 ;
-(void)setValueLoader:(id)arg1 ;
-(id)valueLoader;
-(MPMediaLibraryArtworkRequest *)artworkRequest;
-(double)playbackDuration;
-(void)setPlaybackDuration:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(id)title;
-(id)value;
-(void)setValue:(id)arg1 ;
@end

