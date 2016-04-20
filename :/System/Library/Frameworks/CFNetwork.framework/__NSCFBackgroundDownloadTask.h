/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask {

	BOOL _finished;

}

@property (assign) BOOL finished;              //@synthesize finished=_finished - In the implementation block
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 ;
-(void)_onqueue_didFinishDownloadingToURL:(id)arg1 ;
-(void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 ;
-(void)_onqueue_didResumeAtOffset:(long long)arg1 expectedTotalBytes:(long long)arg2 ;
-(BOOL)finished;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
@end

