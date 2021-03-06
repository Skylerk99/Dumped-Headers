/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPEncoder.h>

@class TSPMemoryComponentWriteChannel, NSString;

@interface TSPMemoryEncoder : NSObject <TSPEncoder> {

	BOOL _alwaysDefragmentData;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> metadataDispatchData; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> rootObjectComponentDispatchData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlwaysDefragmentData:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_data>)metadataDispatchData;
-(NSObject*<OS_dispatch_data>)rootObjectComponentDispatchData;
-(id)newRootObjectComponentWriteChannel;
-(id)newMetadataComponentWriteChannel;
-(id)metadataData;
-(id)rootObjectComponentData;
-(id)encodedData;
@end

