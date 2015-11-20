//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "BookmarksToolbarItemProvider.h"
#import "SharedLinksSubscriptionsTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIBarButtonItem;

@interface SharedLinksSubscriptionsViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, SharedLinksSubscriptionsTableViewCellDelegate, BookmarksToolbarItemProvider>
{
    NSArray *_headerTitles;
    NSArray *_socialAccounts;
    NSArray *_appExtensions;
    NSMutableArray *_subscribedFeeds;
    UIBarButtonItem *_addCurrentFeedButton;
    id <SharedLinksSubscriptionsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SharedLinksSubscriptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)bookmarksRightBarButtonItem;
- (void)sharedLinksSubscriptionsTableViewCell:(id)arg1 toggledSwitchControl:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_socialSourceForSocialAccount:(id)arg1;
- (id)_socialAccountAtIndexPath:(id)arg1;
- (id)_displayNameForAccount:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_didPressAddCurrentFeedButton;
- (void)_addFeedFromCurrentSite;
- (_Bool)_canAddFeedFromCurrentSite;
- (void)_feedSubscriptionsChangedNotification:(id)arg1;
- (void)_updateAddCurrentFeedButton;
- (void)_webFeedURLDidChangeForActiveTabNotification:(id)arg1;
- (void)_updateFeedsData;
- (void)_accountsChangedNotification:(id)arg1;
- (void)_appExtensionsChangedNotification:(id)arg1;
- (void)_updateAppExtensions;
- (void)_updateAccountsData;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

