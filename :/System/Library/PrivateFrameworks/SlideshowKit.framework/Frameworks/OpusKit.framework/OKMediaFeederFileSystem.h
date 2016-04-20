/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaFeeder.h>

@class NSURL, NSArray;

@interface OKMediaFeederFileSystem : OKMediaFeeder {

	NSURL* _directoryURL;
	NSArray* _mediaURLs;

}

@property (retain) NSArray * mediaURLs;              //@synthesize mediaURLs=_mediaURLs - In the implementation block
+(id)supportedSettings;
+(BOOL)isRemote;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithDirectoryURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithSettings:(id)arg1 ;
-(NSArray *)mediaURLs;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(void)setMediaURLs:(NSArray *)arg1 ;
@end

