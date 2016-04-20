/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSMutableArray, NSMutableSet, GEOTileKeyMap, NSString;

@interface GEOSimpleTileRequester : GEOTileRequester <NSURLConnectionDelegate> {

	NSMutableArray* _waiting;
	NSMutableSet* _running;
	GEOTileKeyMap* _keysToBaseOps;
	BOOL _cancelled;
	BOOL _subclassImplementsTileEdition;
	NSMutableArray* _errors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)eTagType;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)_cleanup;
-(BOOL)isRunning;
-(void)_operationFinished:(id)arg1 ;
-(id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 ;
-(void)_doWorkOrFinish;
-(id)localizationURLForTileKey:(GEOTileKey*)arg1 ;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)_startNextPendingOperation:(id)arg1 ;
-(unsigned)tileEditionForKey:(GEOTileKey*)arg1 ;
-(id)editionHeader;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(id)_nextPendingOperation;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2 ;
-(id)urlForTileKey:(GEOTileKey*)arg1 ;
-(BOOL)allowsCookies;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2 ;
@end

