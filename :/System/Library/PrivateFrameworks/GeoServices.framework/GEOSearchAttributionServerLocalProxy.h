/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchAttributionServerProxy.h>

@class NSMapTable, NSMutableArray, GEOSearchAttributionManifest, NSLock, NSString;

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy> {

	NSMapTable* _listeners;
	BOOL _updatingManifest;
	NSMutableArray* _updateManifestCompletionHandlers;
	NSMutableArray* _updateManifestErrorHandlers;
	GEOSearchAttributionManifest* _attributionManifest;
	NSLock* _attributionManifestLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)_sendInfo:(id)arg1 updatedManifest:(BOOL)arg2 toListener:(id)arg3 ;
-(void)_loadAttributionInfoForListener:(id)arg1 hasUpdatedManifest:(BOOL)arg2 ;
-(id)_attributionManifest;
-(void)_pruneOldAttributionLogos;
-(void)_updateManifestWithCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_sendError:(id)arg1 toListener:(id)arg2 ;
@end

