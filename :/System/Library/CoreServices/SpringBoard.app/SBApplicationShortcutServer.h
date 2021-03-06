/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>

@protocol OS_dispatch_queue, SBApplicationShortcutServerDelegate;
@class NSObject;

@interface SBApplicationShortcutServer : FBSystemServiceFacility {

	NSObject*<OS_dispatch_queue> _queue;
	id<SBApplicationShortcutServerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBApplicationShortcutServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)_handleFetchDynamicShortcutItemsMessage:(id)arg1 fromClient:(id)arg2 entitlements:(unsigned long long)arg3 effectiveBundleIdentifier:(id)arg4 ;
-(void)_handleUpdateDynamicShortcutItemsMessage:(id)arg1 fromClient:(id)arg2 entitlements:(unsigned long long)arg3 effectiveBundleIdentifier:(id)arg4 ;
-(void)_checkEntitlementsForMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_sanitizeShortcutItems:(id)arg1 entitlements:(unsigned long long)arg2 ;
-(void)setDelegate:(id<SBApplicationShortcutServerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SBApplicationShortcutServerDelegate>)delegate;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
@end

