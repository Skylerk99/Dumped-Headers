/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob {

	NSDictionary* _metadata;

}

@property (nonatomic,retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(void)updateAlbumMetadata:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)run;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(id)_argumentsDictionaryAsData:(id)arg1 ;
-(id)_argumentsDictionaryFromXPCEvent:(id)arg1 ;
@end

