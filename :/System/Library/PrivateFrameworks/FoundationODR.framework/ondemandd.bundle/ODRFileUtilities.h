/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ODRFileUtilities : NSObject
+(id)sharedInstance;
-(BOOL)_itemExistsAtURL:(id)arg1 ;
-(id)_realPathForURL:(id)arg1 ifChildOfURL:(id)arg2 ;
-(BOOL)validateDownloadAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_traverseDirectory:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(BOOL)arg2 ;
-(id)_realPathWhatExistsInPath:(id)arg1 ;
@end

