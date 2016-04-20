/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <libobjc.A.dylib/_NCSnippetDataSourceManager.h>

@protocol OS_dispatch_queue, _NCParentDataSourceManager;
@class BBObserver, NSObject, NSMutableDictionary, NCSnippetDataSource, NSString, NSArray;

@interface NCSnippetDataSourceManager : NSObject <BBObserverDelegate, _NCSnippetDataSourceManager> {

	BBObserver* _observer;
	NSObject*<OS_dispatch_queue> _bulletinRequestQueue;
	/*^block*/id _startCompletion;
	NSMutableDictionary* _sectionIDsToSectionInfos;
	NSMutableDictionary* _bulletinIDsToTodayData;
	NSMutableDictionary* _bulletinIDsToTomorrowData;
	NSMutableDictionary* _sectionIDsToDatumIDs;
	BOOL _isBulletinServerConnected;
	NCSnippetDataSource* _todayDataSource;
	NCSnippetDataSource* _tomorrowDataSource;
	NCSnippetDataSource* _coreRoutineDataSource;
	id<_NCParentDataSourceManager> _parentDataSourceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_NCParentDataSourceManager> parentDataSourceManager;              //@synthesize parentDataSourceManager=_parentDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSArray * dataSources; 
-(void)_start:(/*^block*/id)arg1 ;
-(void)_replaceDatumWithBulletin:(id)arg1 forFeed:(unsigned long long)arg2 ;
-(void)_removeDatumWithIdentifier:(id)arg1 ;
-(void)_addSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeSectionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 ;
-(id)_sectionInfoWithIdentifier:(id)arg1 ;
-(id<_NCParentDataSourceManager>)parentDataSourceManager;
-(void)setParentDataSourceManager:(id<_NCParentDataSourceManager>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)_stop:(/*^block*/id)arg1 ;
-(NSArray *)dataSources;
@end

