/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface EBookManifest : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _manifest;
	NSString* _manifestPath;

}

@property (readonly) NSString * manifestPath; 
+(id)purchasedBookManifest;
+(id)syncedBookManifest;
-(void)synchronizeData;
-(void)addManifestEntries:(id)arg1 ;
-(id)_entries;
-(void)addManifestEntry:(id)arg1 ;
-(id)manifestEntriesWithProperty:(id)arg1 equalToValue:(id)arg2 limitCount:(long long)arg3 ;
-(void)_invalidateAfterExternalChange;
-(void)dealloc;
-(id)init;
-(id)initWithManifestPath:(id)arg1 ;
-(NSString *)manifestPath;
-(id)_manifest;
@end

