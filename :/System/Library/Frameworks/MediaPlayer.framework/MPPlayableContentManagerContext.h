/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPPlayableContentManagerContext : NSObject {

	BOOL _contentLimitsEnforced;
	BOOL _endpointAvailable;
	long long _enforcedContentItemsCount;
	long long _enforcedContentTreeDepth;

}

@property (assign,nonatomic) long long enforcedContentItemsCount;              //@synthesize enforcedContentItemsCount=_enforcedContentItemsCount - In the implementation block
@property (assign,nonatomic) long long enforcedContentTreeDepth;               //@synthesize enforcedContentTreeDepth=_enforcedContentTreeDepth - In the implementation block
@property (assign,nonatomic) BOOL contentLimitsEnforced;                       //@synthesize contentLimitsEnforced=_contentLimitsEnforced - In the implementation block
@property (nonatomic,readonly) BOOL contentLimitsEnabled; 
@property (assign,nonatomic) BOOL endpointAvailable;                           //@synthesize endpointAvailable=_endpointAvailable - In the implementation block
-(void)setContentLimitsEnforced:(BOOL)arg1 ;
-(void)setEnforcedContentItemsCount:(long long)arg1 ;
-(void)setEnforcedContentTreeDepth:(long long)arg1 ;
-(void)setEndpointAvailable:(BOOL)arg1 ;
-(BOOL)contentLimitsEnforced;
-(BOOL)contentLimitsEnabled;
-(long long)enforcedContentItemsCount;
-(long long)enforcedContentTreeDepth;
-(BOOL)endpointAvailable;
@end

