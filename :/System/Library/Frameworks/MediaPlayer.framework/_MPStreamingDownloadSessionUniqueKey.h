/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _MPStreamingDownloadSessionUniqueKey : NSObject {

	NSString* _buyParameters;
	long long _storeAdamID;

}

@property (nonatomic,copy) NSString * buyParameters;              //@synthesize buyParameters=_buyParameters - In the implementation block
@property (assign,nonatomic) long long storeAdamID;               //@synthesize storeAdamID=_storeAdamID - In the implementation block
-(long long)storeAdamID;
-(void)setStoreAdamID:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)arg1 ;
@end

