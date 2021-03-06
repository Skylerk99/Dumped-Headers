/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSString;

@interface ATAirlock : NSObject {

	NSFileManager* _fm;
	NSString* _basePath;

}
+(id)sharedInstance;
-(id)init;
-(void)evacuateDataclasses:(id)arg1 ;
-(id)artworkPathForDataclass:(id)arg1 artworkIdentifier:(id)arg2 ;
-(id)geniusPathForDataclass:(id)arg1 geniusIdentifier:(id)arg2 ;
-(id)pathForDataclass:(id)arg1 ;
-(void)createAirlockForDataclasses:(id)arg1 ;
-(void)evacuate;
-(void)purgeAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 ;
-(void)copyAssetToAirlock:(id)arg1 ;
-(void)processCompletedAsset:(id)arg1 ;
@end

