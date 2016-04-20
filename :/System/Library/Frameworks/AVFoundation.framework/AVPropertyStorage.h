/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AVPropertyStorage : NSObject {

	NSObject*<OS_dispatch_queue> _storageAccessWorkQueue;
	NSMutableDictionary* _propertyStorage;

}
-(void)willAccessKVOForKey:(id)arg1 ;
-(void)didAccessKVOForKey:(id)arg1 ;
-(BOOL)shouldUsePropertyStorageCacheForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 defaultObjectBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)finalize;
@end

