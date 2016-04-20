/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSRecursiveLock;

@interface MPSongManager : NSObject {

	NSMutableDictionary* mSongDescriptions;
	NSMutableDictionary* mSongBeats;
	NSMutableDictionary* mSongMetaData;
	NSString* mSongCacheFilePath;
	NSRecursiveLock* mSongLock;
	void* mDaFunc;

}
+(void)releaseSharedManager;
+(id)sharedManager;
-(id)cachedBeatsForSongAtPath:(id)arg1 ;
-(void)storeBeats:(id)arg1 forPath:(id)arg2 ;
-(id)initWithPaths:(id)arg1 ;
-(BOOL)hasBeatsForSongAtPath:(id)arg1 ;
-(id)songMetadataForPath:(id)arg1 ;
-(id)beatsForSongAtPath:(id)arg1 progressCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(void)dealloc;
-(id)init;
@end

