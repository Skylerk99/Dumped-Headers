/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSString;

@interface MusicBundleImageArtworkDataSource : NSObject <MPArtworkDataSource> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSCache* _defaultCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedArtworkDataSource;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)init;
-(void)_getImageForArtworkCatalog:(id)arg1 isExistenceCheck:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_cacheForArtworkCatalog:(id)arg1 ;
@end

