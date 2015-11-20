//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SFPopoverSizingTableViewController.h"

#import "BrowserPanel.h"

@class NSMutableArray, NSString;

@interface RecentlyClosedTabViewController : _SFPopoverSizingTableViewController <BrowserPanel>
{
    NSMutableArray *_recentlyClosedTabs;
    id <RecentlyClosedTabViewControllerDelegate> _recentTabsDelegate;
}

@property(nonatomic) __weak id <RecentlyClosedTabViewControllerDelegate> recentTabsDelegate; // @synthesize recentTabsDelegate=_recentTabsDelegate;
- (void).cxx_destruct;
- (int)panelType;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)doneButtonTapped;
- (struct CGSize)preferredContentSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)removeAllRecentlyClosedTabDocuments;
- (void)removeRecentlyClosedTabDocument:(id)arg1;
- (void)addRecentlyClosedTabDocument:(id)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

