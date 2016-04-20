//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "InCallServiceApplication.h"

#import "NSURLConnectionDataDelegate.h"

@class NSString;

@interface InCallServiceApplication (Testing) <NSURLConnectionDataDelegate>
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (_Bool)runSwapCameraTestWithOptions:(id)arg1;
- (_Bool)runEndCallTestWithOptions:(id)arg1;
- (_Bool)runIncomingCallTestWithOptions:(id)arg1;
- (_Bool)runOutgoingCallTestWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

