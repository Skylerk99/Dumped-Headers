/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _SCNUIKitSourceRegistry : NSObject {

	NSMutableArray* _sources;

}
+(void)registerUIKitSource:(id)arg1 ;
+(void)unregisterUIKitSource:(id)arg1 ;
+(id)sharedInstance;
-(void)remove:(id)arg1 ;
-(void)add:(id)arg1 ;
-(void)apply:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
@end

