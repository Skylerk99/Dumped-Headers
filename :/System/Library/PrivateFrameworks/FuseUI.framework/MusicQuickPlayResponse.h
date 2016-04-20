/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface MusicQuickPlayResponse : NSObject {

	long long _containerType;
	NSString* _containerID;
	NSDictionary* _storePlatformDictionary;

}

@property (assign,nonatomic) long long containerType;                             //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,retain) NSString * containerID;                              //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSDictionary * storePlatformDictionary;              //@synthesize storePlatformDictionary=_storePlatformDictionary - In the implementation block
-(void)setContainerID:(NSString *)arg1 ;
-(void)setContainerType:(long long)arg1 ;
-(void)setStorePlatformDictionary:(NSDictionary *)arg1 ;
-(id)initWithStoreDictionary:(id)arg1 ;
-(id)createPlaybackContext;
-(long long)containerType;
-(NSString *)containerID;
-(NSDictionary *)storePlatformDictionary;
@end

