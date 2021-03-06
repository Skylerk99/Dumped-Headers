/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface ICNotesCrossProcessChangeCoordinator : NSObject {

	BOOL _asApplication;
	int _notifyToken;
	NSPersistentStoreCoordinator* _sourceCoordinator;
	NSManagedObjectContext* _destinationContext;

}

@property (nonatomic,retain) NSPersistentStoreCoordinator * sourceCoordinator;              //@synthesize sourceCoordinator=_sourceCoordinator - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * destinationContext;                   //@synthesize destinationContext=_destinationContext - In the implementation block
@property (assign,nonatomic) BOOL asApplication;                                            //@synthesize asApplication=_asApplication - In the implementation block
@property (assign,nonatomic) int notifyToken;                                               //@synthesize notifyToken=_notifyToken - In the implementation block
-(NSManagedObjectContext *)destinationContext;
-(void)dealloc;
-(id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2 asApplication:(BOOL)arg3 ;
-(void)setAsApplication:(BOOL)arg1 ;
-(void)contextDidSave:(id)arg1 ;
-(void)registerForNotesRefreshNotifications;
-(void)registerForAccountNotifications;
-(void)registerForContextDidSaveNotifications;
-(BOOL)asApplication;
-(void)registerForCrossProcessNotificationName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)postCrossProcessNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(NSPersistentStoreCoordinator *)sourceCoordinator;
-(id)contextSaveUserInfoKeys;
-(BOOL)shouldMergeContextDidSaveChanges:(id)arg1 ;
-(void)postAccountDidChangeNotification;
-(void)postNotesDidChangeNotification;
-(void)setSourceCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setDestinationContext:(NSManagedObjectContext *)arg1 ;
-(int)notifyToken;
-(void)setNotifyToken:(int)arg1 ;
@end

