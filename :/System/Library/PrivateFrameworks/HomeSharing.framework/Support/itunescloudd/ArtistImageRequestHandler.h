/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CloudArtistHeroImageImporter;

@interface ArtistImageRequestHandler : NSObject {

	CloudArtistHeroImageImporter* _importer;

}
+(id)handler;
-(void)updateArtistHeroImagesForArtistsAddedSinceLastUpdate;
-(id)init;
-(id)_init;
-(void)cancelAllOperations;
-(void)updateArtistHeroImages;
@end

