/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

@class PLInFlightAssetsAlbum, PLAssetContainerChangeNotification, NSOrderedSet, NSMutableSet;

@interface PLInFlightAssetsAlbumChangeNotification : PLAssetContainerChangeNotification {

	PLInFlightAssetsAlbum* _album;
	PLAssetContainerChangeNotification* _backingNotification;
	NSOrderedSet* _oldOIDs;
	NSMutableSet* _uniquedOIDs;
	BOOL _keyAssetDidChange;

}

@property (nonatomic,retain,readonly) PLInFlightAssetsAlbum * album;                                         //@synthesize album=_album - In the implementation block
@property (nonatomic,retain,readonly) PLAssetContainerChangeNotification * backingNotification;              //@synthesize backingNotification=_backingNotification - In the implementation block
@property (nonatomic,retain,readonly) NSOrderedSet * oldOIDs;                                                //@synthesize oldOIDs=_oldOIDs - In the implementation block
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(PLInFlightAssetsAlbum *)album;
-(void)dealloc;
-(id)description;
-(id)object;
-(id)_diffDescription;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(id)initWithInFlightAssetsAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3 ;
-(PLAssetContainerChangeNotification *)backingNotification;
-(NSOrderedSet *)oldOIDs;
@end

