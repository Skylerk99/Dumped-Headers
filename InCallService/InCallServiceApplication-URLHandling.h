//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "InCallServiceApplication.h"

@interface InCallServiceApplication (URLHandling)
- (id)remoteStarkAlertOptions;
- (id)remoteAlertOptionsForCall:(id)arg1 url:(id)arg2;
- (void)activateRemoteAlertsForCall:(id)arg1 withURL:(id)arg2;
- (_Bool)shouldSuppressShowingAlertForCall:(id)arg1;
- (void)initiateCallForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureTTYIfNecessaryForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDialRequestURL:(id)arg1;
- (void)handleShowInCallUIURL:(id)arg1;
- (void)applicationOpenURL:(id)arg1;
@end

