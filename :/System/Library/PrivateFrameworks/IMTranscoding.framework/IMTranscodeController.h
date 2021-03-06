/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoding.framework/IMTranscoding
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMTranscodeController : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 highQualityMaxByteSize:(unsigned long long)arg5 lowQualityMaxByteSize:(unsigned long long)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)_disconnected;
-(BOOL)_connect;
-(void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 highQualityMaxByteSize:(unsigned long long)arg5 lowQualityMaxByteSize:(unsigned long long)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 retries:(int)arg10 completionBlock:(/*^block*/id)arg11 ;
@end

