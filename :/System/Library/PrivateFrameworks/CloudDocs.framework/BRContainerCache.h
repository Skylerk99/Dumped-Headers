/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRContainerHelper, OS_dispatch_source, NSObject;
#import <CloudDocs/CloudDocs-Structs.h>
@class NSMutableDictionary, NSObject;

@interface BRContainerCache : NSObject {

	id<BRContainerHelper> _helper;
	NSMutableDictionary* _containersByID;
	BOOL _didFetchAllContainers;
	br_pacer_tRef _invalidationPacer;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	id<NSObject> _containerStatusObserver;

}
+(id)containerCache;
-(id)initWithHelper:(id)arg1 ;
-(id)allContainers;
-(void)dealloc;
-(void)_containerListDidChange;
-(id)documentContainers;
-(void)_invalidate;
-(id)containerByID:(id)arg1 forURL:(id)arg2 ;
-(id)allContainersByID;
-(void)subscribeToContainerStatusUpdate;
-(void)unsubscribeToContainerStatusUpdate;
-(id)_allContainersByIDNoCopy;
@end

