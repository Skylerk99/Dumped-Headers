//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAlert.h"

@class UIAlertController;

@interface PHNetworkUnavailableAlert : PHAlert
{
    UIAlertController *_alertController;
}

+ (id)alertWithCallService:(int)arg1 dialType:(long long)arg2;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void).cxx_destruct;
- (id)initWithCallService:(int)arg1 dialType:(long long)arg2;
- (void)otherResponse;
- (void)alternateResponse;
- (void)defaultResponse;
- (id)otherButtonTitle;
- (id)alternateButtonTitle;
- (id)defaultButtonTitle;
- (id)message;
- (id)title;

@end
