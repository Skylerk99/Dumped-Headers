/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString, NSArray;

@interface SagaAddPlaylistOperation : CloudLibraryOperation {

	unsigned long long _playlistPersistentID;
	NSString* _playlistName;
	NSArray* _seedItemIDs;
	NSArray* _itemIDs;
	unsigned long long _playlistSagaID;

}

@property (nonatomic,readonly) unsigned long long playlistSagaID;              //@synthesize playlistSagaID=_playlistSagaID - In the implementation block
-(unsigned long long)playlistSagaID;
-(id)initWithPlaylistPersistentID:(unsigned long long)arg1 playlistName:(id)arg2 ;
-(id)initWithGeniusPlaylistPersistentID:(unsigned long long)arg1 playlistName:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPersistent;
-(void)main;
@end

