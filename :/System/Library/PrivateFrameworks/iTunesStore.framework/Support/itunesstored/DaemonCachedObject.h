/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface DaemonCachedObject : NSObject {

	NSObject*<OS_dispatch_source> _expirationTimer;
	id _object;
	id object;

}

@property (nonatomic,retain) id object; 
-(void)setExpirationTimer:(id)arg1 ;
-(id)copyExpirationTimer;
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
@end

