/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSource.h>

@class GEOTileKeyMap;

@interface VKResourcesTileSource : VKTileSource {

	GEOTileKeyMap* _keyToKeysMap;

}
-(void)dealloc;
-(long long)tileSize;
-(void)cancelDownload:(const GEOTileKey*)arg1 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(id)initWithResourceManifestConfiguration:(id)arg1 locale:(id)arg2 ;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(unsigned)minimumDownloadZoomLevel;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)arg1 ;
-(id)tileLoader;
-(void)performDownload:(const GEOTileKey*)arg1 ;
-(unsigned)maximumDownloadZoomLevel;
-(long long)zEquivalenceClass;
-(GEOTileKey)downloadKeyAtX:(unsigned)arg1 y:(unsigned)arg2 z:(unsigned)arg3 ;
@end

