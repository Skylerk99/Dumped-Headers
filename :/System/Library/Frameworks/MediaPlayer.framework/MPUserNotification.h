/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableArray;

@interface MPUserNotification : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackInvocationQueue;
	/*^block*/id _willShowNotificationHandler;
	id strongSelf;
	BOOL _isShowing;
	CFRunLoopSourceRef _runLoopSource;
	NSMutableArray* _showingCompletionHandlers;
	CFUserNotificationRef _cfUserNotification;

}

@property (nonatomic,readonly) CFUserNotificationRef cfUserNotification;              //@synthesize cfUserNotification=_cfUserNotification - In the implementation block
@property (nonatomic,copy) id willShowNotificationHandler; 
+(void)_setUserNotification:(id)arg1 forCFUserNotification:(CFUserNotificationRef)arg2 ;
+(id)_userNotificationConversionAccessQueue;
+(id)_userNotificationForCFUserNotification:(CFUserNotificationRef)arg1 ;
-(id)initWithCFUserNotification:(CFUserNotificationRef)arg1 ;
-(void)_cancelSynchronously:(BOOL)arg1 ;
-(id)willShowNotificationHandler;
-(void)setWillShowNotificationHandler:(id)arg1 ;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveResponseWithFlags:(unsigned long long)arg1 ;
-(CFUserNotificationRef)cfUserNotification;
-(void)cancel;
-(void)dealloc;
-(id)init;
@end

