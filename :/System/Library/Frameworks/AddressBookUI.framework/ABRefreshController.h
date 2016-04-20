/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSMutableDictionary, NSTimer;

@interface ABRefreshController : NSObject {

	ACAccountStore* _accountStore;
	double _refreshDelay;
	NSMutableDictionary* _accountGroupListsToRefreshByObserver;
	NSMutableDictionary* _contactsFiltersToRefreshByObserver;
	NSTimer* _refreshTimer;

}
+(id)sharedInstance;
-(void)scheduleRefreshForAccountGroupList:(id)arg1 withObserver:(void*)arg2 ;
-(void)cancelAllScheduledRefreshesWithObserver:(void*)arg1 ;
-(void)refreshEverythingNow;
-(BOOL)canRefreshSources:(id)arg1 ;
-(void)scheduleRefreshForContactsFilter:(id)arg1 withObserver:(void*)arg2 ;
-(void)startRefreshingOrphanedAccountsWithAddressBook:(void*)arg1 ;
-(void)_setRefreshDelay:(double)arg1 ;
-(void)_invalidateTimer;
-(void)_proceedWithRefresh:(id)arg1 ;
-(void)_scheduleRefreshTimerIfNeeded;
-(void)refreshContactsFilter:(id)arg1 ;
-(void)refreshAccountGroupList:(id)arg1 ;
-(id)refreshableAccountIdentifiersForContactsFilter:(id)arg1 ;
-(BOOL)canRefreshContactsFilter:(id)arg1 ;
-(void)_addObjectToRefresh:(id)arg1 withObserver:(void*)arg2 toDictionary:(id*)arg3 ;
-(BOOL)canRefreshAccountIdentifier:(id)arg1 ;
-(void)_refreshGroupListForACAccountWithIdentifier:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void*)arg1 ;
-(void)startRefreshingOrphanedAccountsWithAddressBook:(void*)arg1 afterDelay:(BOOL)arg2 ;
-(BOOL)_acAccountExistsForIdentifier:(id)arg1 ;
-(void)_refreshACAccountWithIdentifier:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_postponeAllRefreshes;
-(void)_resumeAllRefreshes;
-(id)accountStore;
-(void)dealloc;
-(id)init;
@end

