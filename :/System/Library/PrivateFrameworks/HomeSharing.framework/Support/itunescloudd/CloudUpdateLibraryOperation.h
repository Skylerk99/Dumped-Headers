/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class ML3MusicLibrary, SagaImporter, NSString, SSURLConnectionRequest;

@interface CloudUpdateLibraryOperation : CloudLibraryOperation {

	BOOL _uploadingLibraryIsSupported;
	ML3MusicLibrary* _musicLibrary;
	long long _reason;
	SagaImporter* _importer;
	NSString* _cuid;
	NSString* _troveID;
	SSURLConnectionRequest* _updateRequest;
	SSURLConnectionRequest* _uploadLibraryRequest;
	SSURLConnectionRequest* _getResultsRequest;

}

@property (assign,nonatomic) BOOL uploadingLibraryIsSupported;                           //@synthesize uploadingLibraryIsSupported=_uploadingLibraryIsSupported - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (getter=isInitialUpdate,nonatomic,readonly) BOOL initialUpdate; 
@property (nonatomic,retain) ML3MusicLibrary * musicLibrary;                             //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (assign,nonatomic) long long reason;                                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) SagaImporter * importer;                                    //@synthesize importer=_importer - In the implementation block
@property (nonatomic,retain) NSString * cuid;                                            //@synthesize cuid=_cuid - In the implementation block
@property (nonatomic,retain) NSString * troveID;                                         //@synthesize troveID=_troveID - In the implementation block
@property (nonatomic,retain) SSURLConnectionRequest * updateRequest;                     //@synthesize updateRequest=_updateRequest - In the implementation block
@property (nonatomic,retain) SSURLConnectionRequest * uploadLibraryRequest;              //@synthesize uploadLibraryRequest=_uploadLibraryRequest - In the implementation block
@property (nonatomic,retain) SSURLConnectionRequest * getResultsRequest;                 //@synthesize getResultsRequest=_getResultsRequest - In the implementation block
-(void)setMusicLibrary:(ML3MusicLibrary *)arg1 ;
-(BOOL)isInitialUpdate;
-(id)initWithReason:(long long)arg1 musicLibrary:(id)arg2 ;
-(void)setUploadingLibraryIsSupported:(BOOL)arg1 ;
-(NSString *)cuid;
-(void)setCuid:(NSString *)arg1 ;
-(NSString *)troveID;
-(void)setTroveID:(NSString *)arg1 ;
-(SSURLConnectionRequest *)updateRequest;
-(SSURLConnectionRequest *)uploadLibraryRequest;
-(SSURLConnectionRequest *)getResultsRequest;
-(BOOL)uploadingLibraryIsSupported;
-(BOOL)_ensureDeviceIsRegistered;
-(BOOL)_uploadLibrary;
-(void)_prepareLibraryForInitialUpdate;
-(void)_updateLibrary;
-(void)setUpdateRequest:(SSURLConnectionRequest *)arg1 ;
-(void)setUploadLibraryRequest:(SSURLConnectionRequest *)arg1 ;
-(id)_determineResultsURLWhenReadyWithUpdateID:(id)arg1 ;
-(void)setGetResultsRequest:(SSURLConnectionRequest *)arg1 ;
-(void)_assignCloudIDsForMatchedTracks:(id)arg1 ;
-(void)_assignCloudIDsForMatchedPlaylists:(id)arg1 ;
-(void)setImporter:(SagaImporter *)arg1 ;
-(SagaImporter *)importer;
-(void)setReason:(long long)arg1 ;
-(void)cancel;
-(void)dealloc;
-(float)progress;
-(void)main;
-(long long)reason;
-(ML3MusicLibrary *)musicLibrary;
@end

