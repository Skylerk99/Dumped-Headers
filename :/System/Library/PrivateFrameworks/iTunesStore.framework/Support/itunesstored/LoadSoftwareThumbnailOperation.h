/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSURL;

@interface LoadSoftwareThumbnailOperation : ISOperation {

	NSString* _bundleID;
	long long _downloadID;
	BOOL _storeDownload;
	NSURL* _thumbnailURL;

}

@property (getter=isStoreDownload) BOOL storeDownload; 
-(BOOL)isStoreDownload;
-(id)initWithBundleIdentifier:(id)arg1 downloadIdentifier:(long long)arg2 thumbnailURL:(id)arg3 ;
-(id)_artworkDataWithError:(id*)arg1 ;
-(void)setStoreDownload:(BOOL)arg1 ;
-(void)run;
@end

