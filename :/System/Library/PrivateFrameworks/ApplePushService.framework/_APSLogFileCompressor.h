/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTFileCopierDelegate.h>

@class NSMutableArray;

@interface _APSLogFileCompressor : NSObject <CUTFileCopierDelegate> {

	NSMutableArray* _archivers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)fileCopierDidStart:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg1 ;
-(void)compressPath:(id)arg1 toPath:(id)arg2 ;
@end

