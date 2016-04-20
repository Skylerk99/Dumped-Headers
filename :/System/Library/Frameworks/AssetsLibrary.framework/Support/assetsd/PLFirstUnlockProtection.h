/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/Support/assetsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLFirstUnlockProtection : NSObject {

	BOOL _isLocked;
	NSMutableArray* _pendingBlocks;
	BOOL _isWatchingForUnlock;

}
+(id)sharedInstance;
-(BOOL)checkFirstUnlock;
-(void)performAfterFirstUnlock:(/*^block*/id)arg1 ;
-(void)_performPendingBlocksAfterFirstUnlock;
-(void)dealloc;
-(id)init;
@end

