/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/JaliscoImporter.h>
#import <itunescloudd/HSMediaLibraryImportObserverDelegate.h>

@class HSMediaLibraryImportObserver, NSString;

@interface JaliscoMediaImporter : JaliscoImporter <HSMediaLibraryImportObserverDelegate> {

	HSMediaLibraryImportObserver* _mediaLibraryImportObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cancelAllOperations;
-(id)metadataKeys;
-(id)queryFilter;
-(id)purchaseTokens;
-(unsigned)onDiskRevision;
-(id)_queryFilterEncodedStringForDAAPNameString:(id)arg1 ;
-(id)_importTracksFromItemsResponse:(id)arg1 ;
-(id)_chapterDataFromURL:(id)arg1 ;
-(id)_chapterArtworkURLsForData:(id)arg1 baseURL:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)handleResponse:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)mediaLibraryImportObserver:(id)arg1 didReportProgress:(float)arg2 ;
-(void)mediaLibraryImportObserver:(id)arg1 didReportError:(id)arg2 ;
@end

