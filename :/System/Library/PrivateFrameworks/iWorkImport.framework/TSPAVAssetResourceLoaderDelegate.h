/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@protocol OS_dispatch_queue, TSUReadChannel;
@class TSPData, NSObject, NSString;

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	TSPData* _data;
	long long _dataLength;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _requestHandlingQueue;
	id<TSUReadChannel> _readChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_provideContentInformationToLoadingRequest:(id)arg1 ;
-(void)_provideDataToLoadingRequest:(id)arg1 ;
-(void)_provideNextDataBlockToLoadingRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)delegateQueue;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
@end

