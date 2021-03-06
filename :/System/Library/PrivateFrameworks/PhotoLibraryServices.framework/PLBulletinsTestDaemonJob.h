/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, NSArray, PLPhotoLibrary;

@interface PLBulletinsTestDaemonJob : PLDaemonJob {

	long long _bulletinType;
	NSString* _albumUUID;
	NSArray* _addedAssetUUIDs;
	PLPhotoLibrary* _photoLibrary;

}

@property (assign) long long bulletinType;                               //@synthesize bulletinType=_bulletinType - In the implementation block
@property (nonatomic,retain) NSString * albumUUID;                       //@synthesize albumUUID=_albumUUID - In the implementation block
@property (nonatomic,retain) NSArray * addedAssetUUIDs;                  //@synthesize addedAssetUUIDs=_addedAssetUUIDs - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(void)notifyInvitationWasReceivedForAlbum:(id)arg1 ;
+(void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2 ;
+(void)notifyLikeWasReceivedForAssets:(id)arg1 ;
+(void)notifyCommentWasReceivedForAssets:(id)arg1 ;
-(NSString *)albumUUID;
-(PLPhotoLibrary *)photoLibrary;
-(void)dealloc;
-(void)run;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setAlbumUUID:(NSString *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(long long)bulletinType;
-(NSArray *)addedAssetUUIDs;
-(void)setBulletinType:(long long)arg1 ;
-(void)setAddedAssetUUIDs:(NSArray *)arg1 ;
@end

