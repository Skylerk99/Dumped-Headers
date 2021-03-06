/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUStreamReadChannel.h>

@protocol OS_dispatch_queue;
@class ALAssetRepresentation, ALAssetsLibrary, NSObject, NSString;

@interface TSPAssetReadChannel : NSObject <TSUStreamReadChannel> {

	ALAssetRepresentation* _representation;
	ALAssetsLibrary* _library;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithRepresentation:(id)arg1 library:(id)arg2 ;
-(void)close;
@end

