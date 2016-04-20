/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {

	AVPlayerItemErrorLogInternal* _playerItemErrorLog;

}

@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(id)initWithLogArray:(id)arg1 ;
-(id)_errorLogArray;
-(id)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(NSArray *)events;
@end

