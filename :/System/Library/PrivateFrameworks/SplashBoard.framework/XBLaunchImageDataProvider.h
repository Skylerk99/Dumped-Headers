/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class XBSnapshotDataProviderContext, XBDisplaySnapshot, NSData, NSString;

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider> {

	XBDisplaySnapshot* _snapshot;
	NSData* _cachedImageData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context; 
-(void)dealloc;
-(XBSnapshotDataProviderContext *)context;
-(id)initWithRequest:(id)arg1 contextID:(unsigned)arg2 ;
-(void)_invalidateSnapshotData;
-(id)fetchImageData:(out CGAffineTransform*)arg1 ;
@end

