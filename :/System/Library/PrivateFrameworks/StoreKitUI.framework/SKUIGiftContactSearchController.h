/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFContactsSearchConsumer.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SKUIGiftContactSearchDelegate;
@class NSArray, MFContactsSearchResultsModel, MFContactsSearchManager, UIView, NSNumber, UITableView, NSString;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {

	void* _addressBook;
	id<SKUIGiftContactSearchDelegate> _delegate;
	NSArray* _results;
	MFContactsSearchResultsModel* _resultsModel;
	MFContactsSearchManager* _searchManager;
	UIView* _searchResultsView;
	NSNumber* _searchTaskIdentifier;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<SKUIGiftContactSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfResults; 
@property (nonatomic,readonly) UIView * searchResultsView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(unsigned long long)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)setDelegate:(id<SKUIGiftContactSearchDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SKUIGiftContactSearchDelegate>)delegate;
-(id)_tableView;
-(long long)numberOfResults;
-(UIView *)searchResultsView;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)searchForText:(id)arg1 ;
-(void)resetSearch;
-(BOOL)cancelSearch;
-(void)_setResults:(id)arg1 ;
-(void)_finishSearchWithResults:(id)arg1 ;
@end

