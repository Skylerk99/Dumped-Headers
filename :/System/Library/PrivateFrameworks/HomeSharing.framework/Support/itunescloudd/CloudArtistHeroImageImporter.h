/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3MusicLibrary, NSObject, NSOperationQueue, NSString, MSVWatchdog, DetermineArtistStoreIDLookupTypeOperation;

@interface CloudArtistHeroImageImporter : NSObject {

	ML3MusicLibrary* _musicLibrary;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSOperationQueue* _operationQueue;
	NSString* _powerAssertionIdentifier;
	MSVWatchdog* _watchdog;
	DetermineArtistStoreIDLookupTypeOperation* _currentUpdateOpertion;
	DetermineArtistStoreIDLookupTypeOperation* _followupUpdateOpertion;

}

@property (nonatomic,readonly) ML3MusicLibrary * musicLibrary;                                                //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                                        //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSString * powerAssertionIdentifier;                                             //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (nonatomic,retain) MSVWatchdog * watchdog;                                                          //@synthesize watchdog=_watchdog - In the implementation block
@property (nonatomic,retain) DetermineArtistStoreIDLookupTypeOperation * currentUpdateOpertion;               //@synthesize currentUpdateOpertion=_currentUpdateOpertion - In the implementation block
@property (nonatomic,retain) DetermineArtistStoreIDLookupTypeOperation * followupUpdateOpertion;              //@synthesize followupUpdateOpertion=_followupUpdateOpertion - In the implementation block
+(id)allArtistImagesMapCacheFilePathURL;
-(long long)_synchronouslyLoadArtistUpdatePollingFrequencyFromBag;
-(DetermineArtistStoreIDLookupTypeOperation *)currentUpdateOpertion;
-(DetermineArtistStoreIDLookupTypeOperation *)followupUpdateOpertion;
-(void)setFollowupUpdateOpertion:(DetermineArtistStoreIDLookupTypeOperation *)arg1 ;
-(void)setCurrentUpdateOpertion:(DetermineArtistStoreIDLookupTypeOperation *)arg1 ;
-(void)_artistHeroImageUpdateFinished;
-(id)initWithMusicLibrary:(id)arg1 ;
-(void)updateArtistHeroImagesForArtistsAddedSinceLastUpdate;
-(void)cancelArtistHeroImageUpdate;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)operationQueue;
-(MSVWatchdog *)watchdog;
-(void)setWatchdog:(MSVWatchdog *)arg1 ;
-(void)updateArtistHeroImages;
-(ML3MusicLibrary *)musicLibrary;
-(NSString *)powerAssertionIdentifier;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
@end

