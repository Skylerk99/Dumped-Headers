//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHAlert : NSObject
{
    CDUnknownBlockType _completion;
    struct __CFUserNotification *_userNotification;
}

@property(nonatomic) struct __CFUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)otherResponse;
- (void)alternateResponse;
- (void)defaultResponse;
- (id)otherButtonTitle;
- (id)alternateButtonTitle;
- (id)defaultButtonTitle;
- (id)message;
- (id)title;
- (void)showOnViewController:(id)arg1;
- (void)show;
- (void)dealloc;

@end
