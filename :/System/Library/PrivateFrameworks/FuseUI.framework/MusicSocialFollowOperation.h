/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicSocialAbstractOperation.h>

@class NSNumber, NSString;

@interface MusicSocialFollowOperation : MusicSocialAbstractOperation {

	NSNumber* _storeEntityID;
	NSString* _entityType;
	BOOL _follow;

}

@property (nonatomic,copy) NSNumber * storeEntityID;              //@synthesize storeEntityID=_storeEntityID - In the implementation block
-(id)initWithEntityStoreID:(id)arg1 entityType:(id)arg2 shouldFollow:(BOOL)arg3 ;
-(void)processResponse:(id)arg1 response:(id)arg2 ;
-(id)serviceURL:(id)arg1 ;
-(NSNumber *)storeEntityID;
-(void)setStoreEntityID:(NSNumber *)arg1 ;
@end

