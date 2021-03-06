/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBScreenShotter : NSObject {

	BOOL _writingScreenshot;
	unsigned long long _screenshotWriteCount;

}
+(id)sharedInstance;
-(void)saveScreenshotsShowingFlash:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isWritingSnapshot;
-(void)_incrementWriteCount;
-(void)finishedWritingScreenshot:(id)arg1 didFinishSavingWithError:(id)arg2 context:(void*)arg3 ;
-(void)finishedWritingCarScreenshot:(id)arg1 didFinishSavingWithError:(id)arg2 context:(void*)arg3 ;
-(void)_decrementWriteCount;
-(void)saveScreenshot:(BOOL)arg1 ;
@end

