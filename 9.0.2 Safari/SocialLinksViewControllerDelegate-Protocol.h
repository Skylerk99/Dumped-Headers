//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ContinuousReadingItem, NSURL, NavigationDestination, SocialLinksViewController;

@protocol SocialLinksViewControllerDelegate <NSObject>
- (ContinuousReadingItem *)socialLinksViewControllerCurrentContinuousReadingItem:(SocialLinksViewController *)arg1;
- (void)socialLinksViewControllerSubscribeToCurrentWebFeed:(SocialLinksViewController *)arg1;
- (NSURL *)socialLinksViewControllerCurrentWebFeedURL:(SocialLinksViewController *)arg1;
- (void)socialLinksViewController:(SocialLinksViewController *)arg1 didSelectNavigationDestination:(NavigationDestination *)arg2;
@end

