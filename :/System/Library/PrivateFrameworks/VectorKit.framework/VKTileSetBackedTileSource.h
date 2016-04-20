/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSource.h>

@class GEOActiveTileSet, VKTimer, VKTilePool, _VKTileSetBackedTileSourceTimerTarget;

@interface VKTileSetBackedTileSource : VKTileSource {

	GEOActiveTileSet* _tileSet;
	GEOTileKey _downloadTemplate;
	unsigned _minimumDownloadZoomLevel;
	unsigned _maximumDownloadZoomLevel;
	VKTimer* _expirationTimer;
	VKTilePool* _expiredTilePool;
	ZoomRange _zoomLevelRange;
	_VKTileSetBackedTileSourceTimerTarget* _timerTarget;

}

@property (nonatomic,retain) GEOActiveTileSet * tileSet;              //@synthesize tileSet=_tileSet - In the implementation block
-(void)clearCaches;
-(void)dealloc;
-(long long)tileSize;
-(BOOL)expires;
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(long long)maximumZoomLevel;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 ;
-(long long)minimumZoomLevel;
-(void)setTileSet:(GEOActiveTileSet *)arg1 ;
-(id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(unsigned)minimumDownloadZoomLevel;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)arg1 ;
-(void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2 ;
-(id)tileLoader;
-(void)fetchedTile:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(unsigned)maximumDownloadZoomLevel;
-(GEOTileKey)downloadKeyAtX:(unsigned)arg1 y:(unsigned)arg2 z:(unsigned)arg3 ;
-(GEOActiveTileSet *)tileSet;
-(long long)defaultMaximumZoomLevel;
-(double)_expirationInterval;
-(BOOL)shouldObeyHybridUnavailableRegions;
-(unsigned long long)mapLayerForZoomLevelRange;
-(double)_nextTileExpirationDate;
-(void)_expireTiles;
-(long long)defaultMinimumZoomLevel;
-(void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(BOOL)arg2 ;
-(void)setClient:(id)arg1 ;
@end

