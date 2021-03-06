/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSIndexExtensionRequestHandler.h>

@protocol OS_dispatch_queue;
@class CNContactStore, NSObject, CSSearchableIndex;

@interface CNIndexRequestHandler : CSIndexExtensionRequestHandler {

	void* _ab;
	CNContactStore* _store;
	NSObject*<OS_dispatch_queue> _asyncQueue;
	CSSearchableIndex* _index;

}

@property (nonatomic,readonly) CSSearchableIndex * index;              //@synthesize index=_index - In the implementation block
+(id)defaultSearchableItemsDomain;
+(void)setSearchableItemsDomain:(id)arg1 ;
+(id)descriptorForRequiredKeysForSearchableItem;
+(id)searchableItemsDomain;
+(void)initialize;
-(id)searchableItemForPerson:(void*)arg1 ;
-(id)searchableItemForContactIdentifier:(id)arg1 ;
-(id)contactIdentifierFromPerson:(void*)arg1 ;
-(void)finishIndexingAllSearchableItemsIfNecessary;
-(void)dealloc;
-(id)init;
-(CSSearchableIndex *)index;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(id)initWithAddressBook:(void*)arg1 ;
@end

