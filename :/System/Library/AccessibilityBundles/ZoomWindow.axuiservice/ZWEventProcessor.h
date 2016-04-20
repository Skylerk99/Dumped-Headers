/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <AccessibilityUtilities/AXEventProcessor.h>
#import <ZoomWindow/ZOTFullscreenEventHandlerDelegate.h>
#import <ZoomWindow/ZWLensAutopannerDataSource.h>

@protocol ZWEventProcessorDelegate;
@class ZOTFullscreenEventHandler, SCRCThread, NSString;

@interface ZWEventProcessor : AXEventProcessor <ZOTFullscreenEventHandlerDelegate, ZWLensAutopannerDataSource> {

	id<ZWEventProcessorDelegate> _delegate;
	ZOTFullscreenEventHandler* _fullscreenEventHandler;
	SCRCThread* _hidPostThread;
	CGPoint _currentTouchOffset;

}

@property (assign,nonatomic) id<ZWEventProcessorDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ZOTFullscreenEventHandler * fullscreenEventHandler;              //@synthesize fullscreenEventHandler=_fullscreenEventHandler - In the implementation block
@property (assign,nonatomic) CGPoint currentTouchOffset;                                        //@synthesize currentTouchOffset=_currentTouchOffset - In the implementation block
@property (nonatomic,retain) SCRCThread * hidPostThread;                                        //@synthesize hidPostThread=_hidPostThread - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(CGPoint)currentTouchOffset;
-(void)setHidPostThread:(SCRCThread *)arg1 ;
-(void)setCurrentTouchOffset:(CGPoint)arg1 ;
-(void)_adjustThreadPriority;
-(void)_sendCancelEventToAppDirectlyWithSenderID:(id)arg1 ;
-(void)sendCancelEventToAppDirectlyWithSenderID:(unsigned long long)arg1 ;
-(void)disableSleepTimer:(BOOL)arg1 ;
-(SCRCThread *)hidPostThread;
-(void)resetEventQueue;
-(void)dispatchEventToSystem:(id)arg1 ;
-(void)dispatchEntireEventQueue;
-(CGPoint)offsetForAutopanner:(id)arg1 ;
-(BOOL)offsetValuesAreNormalizedForAutopanner:(id)arg1 ;
-(ZOTFullscreenEventHandler *)fullscreenEventHandler;
-(void)setDelegate:(id<ZWEventProcessorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ZWEventProcessorDelegate>)delegate;
-(BOOL)_handleEvent:(id)arg1 ;
-(id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4 ;
@end

