//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHConferenceParticipantCellProtocol.h"
#import "UINavigationBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface PHConferenceParticipantsViewController : UIViewController <UINavigationBarDelegate, UITableViewDataSource, UITableViewDelegate, PHConferenceParticipantCellProtocol>
{
    NSMutableArray *_conferenceParticipantCalls;
    UITableView *_conferenceTable;
}

@property(retain) UITableView *conferenceTable; // @synthesize conferenceTable=_conferenceTable;
@property(retain) NSMutableArray *conferenceParticipantCalls; // @synthesize conferenceParticipantCalls=_conferenceParticipantCalls;
- (void).cxx_destruct;
- (void)dismissAfterPrivate;
- (void)conferenceParticipantCellRequestedTakeCallPrivate:(id)arg1;
- (void)conferenceParticipantCellRequestedEndCall:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)removeCall:(id)arg1;
- (void)callStatusChanged:(id)arg1;
- (void)dismissConferenceView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

