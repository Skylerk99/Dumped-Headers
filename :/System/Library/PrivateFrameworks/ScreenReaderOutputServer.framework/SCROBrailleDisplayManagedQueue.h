/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject {

	SCRCIndexMap* _stateQueueMap;
	CFDictionaryRef _queueStateDict;
	CFDictionaryRef _displayQueueDict;
	SCRCIndexMap* _tokenDisplayMap;
	unsigned long long _maxActiveQueueSize;

}
-(void)removeDisplay:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_queueForState:(int)arg1 createQueue:(BOOL)arg2 ;
-(void)_fillActiveBrailleDisplayQueue;
-(id)disconnectedDisplays;
-(void)addDisplay:(id)arg1 withState:(int)arg2 ;
-(void)setState:(int)arg1 forDisplay:(id)arg2 ;
-(int)stateForDisplay:(id)arg1 ;
-(id)displayForToken:(int)arg1 ;
-(unsigned long long)displayCountIncludingDisconnectedDisplays:(BOOL)arg1 ;
-(id)primaryDisplay;
-(void)setPrimaryDisplay:(id)arg1 ;
-(unsigned long long)activeQueueMaximumSize;
-(void)setActiveQueueMaximumSize:(unsigned long long)arg1 ;
-(id)activeDisplays;
-(id)activePendingDisplays;
-(id)sleepingDisplays;
-(id)loadingDisplays;
@end

