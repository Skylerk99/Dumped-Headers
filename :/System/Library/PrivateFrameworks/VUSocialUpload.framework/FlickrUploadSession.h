/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlickrRemoteSessionProtocol;
@interface FlickrUploadSession : NSObject {

	id<FlickrRemoteSessionProtocol> _remoteSession;

}
+(id)sharedSession;
-(id)init;
-(BOOL)uploadPosts:(id)arg1 error:(id*)arg2 ;
@end

