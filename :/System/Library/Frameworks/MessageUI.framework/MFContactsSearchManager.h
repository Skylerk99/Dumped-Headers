/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <libobjc.A.dylib/DASearchQueryConsumer.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, CNAutocompleteStore, NSOperationQueue, NSOrderedSet, NSObject, NSArray, NSMutableArray, NSString;

@interface MFContactsSearchManager : NSObject <DASearchQueryConsumer> {

	CFDictionaryRef _taskIDsBySearchQuery;
	NSMutableDictionary* _taskContextsByTaskID;
	void* _addressBook;
	CNAutocompleteStore* _autocompleteStore;
	NSOperationQueue* _queue;
	unsigned _genNumber;
	NSOrderedSet* _properties;
	unsigned long long _searchTypes;
	NSObject*<OS_dispatch_queue> _serverSearchQueue;
	NSArray* _explicitSearchAccountIDs;
	NSArray* _searchAccounts;
	int _contactSearchAccountChangedToken;
	BOOL _registeredForAddressBookChanges;
	BOOL _useContactsAutocomplete;
	NSMutableArray* _corecipientSearchTaskIDs;
	NSString* _sendingAddress;
	BOOL _includeUpcomingEventMembers;
	BOOL _simulatedResultsEnabled;
	NSString* _recentsBundleIdentifier;
	unsigned long long _implicitGroupCreationThreshold;
	unsigned long long _autocompleteSearchType;
	NSString* _sendingAccountIdentifier;

}

@property (retain) NSArray * searchAccountIDs;                                                           //@synthesize explicitSearchAccountIDs=_explicitSearchAccountIDs - In the implementation block
@property (nonatomic,copy) NSString * recentsBundleIdentifier;                                           //@synthesize recentsBundleIdentifier=_recentsBundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long implicitGroupCreationThreshold;                          //@synthesize implicitGroupCreationThreshold=_implicitGroupCreationThreshold - In the implementation block
@property (assign,nonatomic) BOOL includeUpcomingEventMembers;                                           //@synthesize includeUpcomingEventMembers=_includeUpcomingEventMembers - In the implementation block
@property (assign,nonatomic) unsigned long long autocompleteSearchType;                                  //@synthesize autocompleteSearchType=_autocompleteSearchType - In the implementation block
@property (nonatomic,copy) NSString * sendingAccountIdentifier;                                          //@synthesize sendingAccountIdentifier=_sendingAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sendingAddress;                                                    //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (assign,getter=isSimulatedResultsEnabled,nonatomic) BOOL simulatedResultsEnabled;              //@synthesize simulatedResultsEnabled=_simulatedResultsEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * searchAccounts; 
-(void)setSendingAddress:(NSString *)arg1 ;
-(void)setSearchAccountIDs:(NSArray *)arg1 ;
-(id)searchForCorecipientsWithAutocompleteFetchContext:(id)arg1 consumer:(id)arg2 ;
-(NSString *)sendingAddress;
-(void)_handleRecentsSearchFrequentResults:(id)arg1 infrequentResults:(id)arg2 operation:(id)arg3 taskID:(id)arg4 ;
-(void)_handleCoreRecentsCorecipientSearchResults:(id)arg1 operation:(id)arg2 taskID:(id)arg3 ;
-(void)_handleLocalSearchResults:(id)arg1 type:(unsigned long long)arg2 operation:(id)arg3 taskID:(id)arg4 ;
-(NSArray *)searchAccounts;
-(void)_handleSearchQueriesByAccountID:(id)arg1 operation:(id)arg2 taskID:(id)arg3 ;
-(NSArray *)searchAccountIDs;
-(void)_handleContactsAutocompleteSearch:(id)arg1 returnedResults:(id)arg2 taskID:(id)arg3 ;
-(void)_handleContactsAutocompleteSearchFinished:(id)arg1 taskID:(id)arg2 ;
-(unsigned long long)autocompleteSearchType;
-(NSString *)sendingAccountIdentifier;
-(void)_registerForAddressBookChanges;
-(id)_nextTaskID;
-(BOOL)isSimulatedResultsEnabled;
-(void)_initializeLegacyAddressBookIfNecessary;
-(void)_invalidateSearchAccounts;
-(void)_handleTaskFinished:(id)arg1 context:(id)arg2 ;
-(id)_serverSearchQueue;
-(void)_handleSearchQueryFinished:(id)arg1 context:(id)arg2 ;
-(void)_handleSearchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)_handleSearchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(id)searchForCorecipientsWithRecipients:(id)arg1 consumer:(id)arg2 ;
-(void)_handleAddressBookChangeNotification;
-(NSString *)recentsBundleIdentifier;
-(void)setRecentsBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)implicitGroupCreationThreshold;
-(BOOL)includeUpcomingEventMembers;
-(void)setIncludeUpcomingEventMembers:(BOOL)arg1 ;
-(void)setAutocompleteSearchType:(unsigned long long)arg1 ;
-(void)setSendingAccountIdentifier:(NSString *)arg1 ;
-(void)setSimulatedResultsEnabled:(BOOL)arg1 ;
-(void)cancelTaskWithID:(id)arg1 ;
-(id)searchForText:(id)arg1 consumer:(id)arg2 ;
-(id)initWithAddressBook:(void*)arg1 properties:(int*)arg2 propertyCount:(unsigned)arg3 recentsBundleIdentifier:(id)arg4 ;
-(void)setSearchTypes:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithAutocompleteSearchType:(unsigned long long)arg1 ;
-(void)setImplicitGroupCreationThreshold:(unsigned long long)arg1 ;
-(id)searchForText:(id)arg1 withAutocompleteFetchContext:(id)arg2 consumer:(id)arg3 ;
-(void)removeRecipientResult:(id)arg1 ;
-(id)initWithAddressBook:(void*)arg1 properties:(int*)arg2 propertyCount:(unsigned)arg3 ;
@end

