/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/SagaCloudAddOperation.h>

@class NSString, NSDictionary;

@interface SagaCloudAddPlaylistOperation : SagaCloudAddOperation {

	NSString* _playlistGlobalID;
	NSDictionary* _globalIDToSagaIDMap;

}

@property (nonatomic,retain) NSDictionary * globalIDToSagaIDMap;              //@synthesize globalIDToSagaIDMap=_globalIDToSagaIDMap - In the implementation block
-(id)initWithPlaylistGlobalID:(id)arg1 ;
-(NSDictionary *)globalIDToSagaIDMap;
-(id)cloudAddRequestWithDatabaseID:(unsigned)arg1 ;
-(id)cloudAddRequestDescription;
-(void)processAddedItems:(id)arg1 ;
-(void)removePendingAddedItemsForPermanentlyFailedOperation;
-(void)setGlobalIDToSagaIDMap:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

