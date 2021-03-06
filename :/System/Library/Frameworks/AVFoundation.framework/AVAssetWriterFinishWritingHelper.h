/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVAssetWriterHelper.h>

@class NSArray, NSOperation;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {

	NSArray* _finishWritingOperations;
	NSOperation* _transitionToTerminalStatusOperation;

}

@property (nonatomic,readonly) NSOperation * transitionToTerminalStatusOperation;              //@synthesize transitionToTerminalStatusOperation=_transitionToTerminalStatusOperation - In the implementation block
-(id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2 ;
-(NSOperation *)transitionToTerminalStatusOperation;
-(void)_finishWritingOperationsDidFinish;
-(void)dealloc;
-(long long)status;
-(void)cancelWriting;
@end

