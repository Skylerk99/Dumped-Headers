/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYStoreDelegate.h>

@protocol OS_dispatch_queue;
@class SYStore, NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface MSPSyncManager : NSObject <SYStoreDelegate> {

	SYStore* _store;
	BOOL _inUpdate;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSMutableArray* _bookmarks;
	NSMutableDictionary* _bookmarksMap;
	NSMutableArray* _pins;
	NSMutableDictionary* _pinsMap;
	NSMutableArray* _history;
	NSMutableDictionary* _historyMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)syncStoreWillUpdate:(id)arg1 ;
-(void)syncStoreWillUpdate:(id)arg1 objectCount:(unsigned long long)arg2 ;
-(void)syncStoreDidUpdate:(id)arg1 ;
-(void)syncStoreDidCompleteFullSync:(id)arg1 ;
-(void)syncStoreAllObjectsDeleted:(id)arg1 ;
-(id)syncStoreAllObjects:(id)arg1 ;
-(void)syncStoreEnqueuedAllFullSyncMessages:(id)arg1 context:(id)arg2 ;
-(void)completedSync;
-(void)setNeedsFullSync;
-(void)syncStore:(id)arg1 objectAdded:(id)arg2 ;
-(void)syncStore:(id)arg1 objectUpdated:(id)arg2 ;
-(void)syncStore:(id)arg1 objectDeleted:(id)arg2 ;
-(void)_addPin:(id)arg1 ;
-(void)updateHistoryItem:(id)arg1 transaction:(id)arg2 ;
-(void)_updatePin:(id)arg1 ;
-(void)removeHistoryItem:(id)arg1 transaction:(id)arg2 ;
-(void)_addBookmark:(id)arg1 ;
-(id)readBookmarks;
-(void)writePins:(id)arg1 ;
-(void)addHistoryItem:(id)arg1 transaction:(id)arg2 ;
-(void)removePin:(id)arg1 transaction:(id)arg2 ;
-(void)updatePin:(id)arg1 transaction:(id)arg2 ;
-(void)_removePin:(id)arg1 ;
-(void)updatedPin:(id)arg1 ;
-(void)updatedBookmark:(id)arg1 ;
-(void)_addHistoryItem:(id)arg1 ;
-(void)writeHistory:(id)arg1 ;
-(void)_updateHistoryItem:(id)arg1 ;
-(id)readHistory;
-(void)addPin:(id)arg1 transaction:(id)arg2 ;
-(id)pins;
-(id)readPins;
-(void)updatedHistoryItem:(id)arg1 ;
-(void)_notifyObservers;
-(void)updateBookmark:(id)arg1 transaction:(id)arg2 ;
-(id)_wrapHistoryItem:(id)arg1 ;
-(void)_removeHistoryItem:(id)arg1 ;
-(void)removeBookmark:(id)arg1 transaction:(id)arg2 ;
-(void)writeBookmarks:(id)arg1 ;
-(id)_wrapBookmark:(id)arg1 ;
-(void)_updateBookmark:(id)arg1 ;
-(void)addBookmark:(id)arg1 transaction:(id)arg2 ;
-(void)_updateFromDisk;
-(void)completedPreparingSync;
-(void)_removeBookmark:(id)arg1 ;
-(id)_wrapPin:(id)arg1 ;
-(id)bookmarks;
-(void)transaction:(/*^block*/id)arg1 ;
-(id)history;
-(void)notifyObservers;
@end

