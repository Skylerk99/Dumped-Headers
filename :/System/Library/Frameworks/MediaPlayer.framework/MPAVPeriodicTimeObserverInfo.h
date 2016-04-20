/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject;

@interface MPAVPeriodicTimeObserverInfo : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	SCD_Struct_MP9 _interval;

}

@property (nonatomic,copy,readonly) id block;                                   //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP9 interval;                         //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithInterval:(SCD_Struct_MP9)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)block;
-(NSObject*<OS_dispatch_queue>)queue;
-(SCD_Struct_MP9)interval;
@end

