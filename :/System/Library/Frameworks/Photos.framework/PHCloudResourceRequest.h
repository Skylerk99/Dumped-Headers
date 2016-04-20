/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, PLCPLDownloadContext, NSManagedObjectID, NSError;

@interface PHCloudResourceRequest : NSOperation {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _downloadFinishedSemaphore;
	/*^block*/id _progressHandler;
	PLCPLDownloadContext* _downloadContext;
	int _requestID;
	NSManagedObjectID* _objectID;
	unsigned long long _cloudResourceType;
	NSError* _error;

}

@property (nonatomic,readonly) int requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                      //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudResourceType;              //@synthesize cloudResourceType=_cloudResourceType - In the implementation block
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
-(id)initWithRequestID:(int)arg1 cloudResourceType:(unsigned long long)arg2 managedObjectID:(id)arg3 progressHandler:(/*^block*/id)arg4 ;
-(void)updateResourceRequestStatusForConnectionLost:(BOOL)arg1 ;
-(unsigned long long)cloudResourceType;
-(int)requestID;
-(NSManagedObjectID *)objectID;
-(NSError *)error;
-(void)cancel;
-(void)main;
-(void)_onQueueAsync:(/*^block*/id)arg1 ;
-(void)_onQueueSync:(/*^block*/id)arg1 ;
@end

