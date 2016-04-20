/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface ICDispatchGroup : NSObject {

	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(void)enter;
-(id)init;
-(void)leave;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)waitUntilFinishedWithRunLoopProcessingTime:(double)arg1 ;
@end

