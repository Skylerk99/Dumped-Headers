/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@interface SCROBrailleDisplayHistory : NSObject {

	CFArrayRef _announcements;
	CFArrayRef _unreadSnapshot;
	long long _currentIndex;
	long long _unreadCount;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(BOOL)_moveIndexBy:(long long)arg1 ;
-(void)addString:(id)arg1 ;
-(void)snapshotUnread;
-(void)markSnapshotAsRead;
-(BOOL)hasUnread;
-(id)currentString;
-(BOOL)moveToNext;
-(BOOL)moveToPrevious;
-(BOOL)isOnMostRecent;
-(void)moveToMostRecent;
@end

