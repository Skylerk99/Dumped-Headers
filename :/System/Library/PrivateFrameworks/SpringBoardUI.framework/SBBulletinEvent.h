/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBBulletinEvent : NSObject {

	NSString* _bulletinID;
	/*^block*/id _handler;
	unsigned long long _feed;

}
+(id)eventForBulletin:(id)arg1 feed:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)execute;
-(void)dealloc;
-(id)bulletinID;
-(unsigned long long)feed;
-(id)initWithBulletin:(id)arg1 feed:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
@end

