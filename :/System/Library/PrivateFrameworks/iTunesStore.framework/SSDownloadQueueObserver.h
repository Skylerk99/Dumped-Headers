/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSDownloadQueueObserver <NSObject>
@optional
-(void)downloadQueue:(id)arg1 downloadStatusChangedAtIndex:(long long)arg2;
-(void)downloadQueueNetworkUsageChanged:(id)arg1;

@required
-(void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;

@end

