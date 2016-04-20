/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <YouTube/YouTube-Structs.h>
@class NSString, NSCalendarDate, NSArray, NSURL, NSMutableArray;

@interface YTVideo : NSObject {

	NSString* _id;
	NSString* _title;
	NSString* _author;
	NSCalendarDate* _dateUpdated;
	NSCalendarDate* _dateAdded;
	NSArray* _videoReferences;
	NSString* _notificationName;
	NSString* _videoDescription;
	NSString* _category;
	NSArray* _tags;
	unsigned _numberOfViews;
	unsigned _numLikes;
	unsigned _numDislikes;
	int _batchStatus;
	NSURL* _infoURL;
	NSURL* _thumbnailURL;
	NSURL* _commentsURL;
	NSURL* _editURL;
	NSURL* _ratingsURL;
	NSURL* _captionsURL;
	NSString* _shortID;
	NSString* _unplayable;
	BOOL _isProcessing;
	NSMutableArray* _captions;
	int _privacy;
	NSString* _restrictedCountries;
	/*^block*/id _thumbnailProxyBlock;

}
+(void)enableNotifications;
+(void)disableNotifications;
+(id)unsupportedVideoError;
+(id)videoNotFoundError;
+(id)videoIsProcessingError;
+(void)reset3GPlaybackStallCount;
+(void)playbackDidStall;
-(BOOL)isPlayable;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)category;
-(id)title;
-(id)tags;
-(id)archiveDictionary;
-(id)ID;
-(id)author;
-(id)thumbnailURL;
-(id)dateUpdated;
-(id)dateAdded;
-(BOOL)allowsHighQuality3GPlayback;
-(id)shortID;
-(id)initFromArchiveDictionary:(id)arg1 ;
-(id)initWithID:(id)arg1 title:(id)arg2 dateUpdated:(id)arg3 dateAdded:(id)arg4 videoReferences:(id)arg5 infoURL:(id)arg6 videoDescription:(id)arg7 category:(id)arg8 tags:(id)arg9 author:(id)arg10 thumbnailURL:(id)arg11 numLikes:(unsigned)arg12 numDislikes:(unsigned)arg13 numberOfViews:(unsigned)arg14 batchStatus:(int)arg15 commentsURL:(id)arg16 editURL:(id)arg17 ratingsURL:(id)arg18 captionsURL:(id)arg19 shortID:(id)arg20 unplayable:(id)arg21 isProcessing:(BOOL)arg22 privacy:(int)arg23 restrictedCountries:(id)arg24 ;
-(CGImageRef)thumbnailLoadIfAbsent:(BOOL)arg1 ;
-(void)_postVideoDidChange;
-(void)carrierBundleDidChangeNotification:(id)arg1 ;
-(void)_thumbnailDidLoad;
-(id)videoReferenceForProfile:(int)arg1 ;
-(id)bestVideoReference;
-(id)dateAddedString;
-(id)commentsURL;
-(id)editURL;
-(id)ratingsURL;
-(id)captionsURL;
-(id)videoDescription;
-(id)tagsString;
-(id)unplayable;
-(unsigned)numLikes;
-(unsigned)numDislikes;
-(BOOL)positiveRating;
-(id)ratingPercentageString;
-(unsigned)numberOfViews;
-(id)restrictedCountries;
-(int)batchStatus;
-(CGImageRef)roundedThumbnailLoadIfAbsent:(BOOL)arg1 ;
-(CGImageRef)largeThumbnailLoadIfAbsent:(BOOL)arg1 ;
-(CGImageRef)pluginThumbnailLoadIfAbsent:(BOOL)arg1 ;
-(void)loadThumbnailWithCallback:(/*^block*/id)arg1 ;
-(id)anyVideoReference;
-(BOOL)isBookmarked;
-(BOOL)isProcessing;
-(id)captions;
-(id)privacyString;
-(BOOL)ownVideo;
-(id)infoURL;
-(double)age;
@end

