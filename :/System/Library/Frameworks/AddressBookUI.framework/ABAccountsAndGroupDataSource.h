/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSDictionary, ACAccountStore, ABModel, NSString;

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource> {

	NSArray* _accountIdentifiers;
	NSArray* _accountDisplayNames;
	NSDictionary* _groupsByAccountIdentifier;
	ACAccountStore* _accountStore;
	BOOL _hidesSearchableSources;
	BOOL _hidesGlobalGroupWrapper;
	BOOL _dirty;
	ABModel* _model;

}

@property (nonatomic,retain) ABModel * model;                            //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources;                //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (assign,nonatomic) BOOL hidesGlobalGroupWrapper;               //@synthesize hidesGlobalGroupWrapper=_hidesGlobalGroupWrapper - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;                  //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)groupWrapperForIndexPath:(id)arg1 ;
-(id)newContactsFilterFromSelectedGroupWrappers;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(BOOL)hidesSearchableSources;
-(BOOL)hidesGlobalGroupWrapper;
-(void)reloadDataIncludingAccountStore:(BOOL)arg1 usingArchivedState:(BOOL)arg2 ;
-(long long)numberOfGroupsInAccountAtIndex:(long long)arg1 ;
-(id)accountDisplayNameAtIndex:(long long)arg1 ;
-(id)defaultGroupWrapper;
-(id)indexPathForGroupWrapper:(id)arg1 ;
-(long long)numberOfGroupsForAccountIdentifier:(id)arg1 ;
-(void)scheduleRefresh;
-(void)cancelScheduledRefresh;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)setHidesGlobalGroupWrapper:(BOOL)arg1 ;
-(ACAccountStore *)accountStore;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(ABModel *)model;
-(void)setModel:(ABModel *)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)isDirty;
@end

