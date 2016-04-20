/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface _ATXAppInfo : NSObject {

	NSString* _bundleId;
	NSDate* _lastLaunch;
	NSDate* _lastSpotlightLaunch;

}

@property (nonatomic,retain) NSString * bundleId;                       //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,retain) NSDate * lastLaunch;                       //@synthesize lastLaunch=_lastLaunch - In the implementation block
@property (nonatomic,retain) NSDate * lastSpotlightLaunch;              //@synthesize lastSpotlightLaunch=_lastSpotlightLaunch - In the implementation block
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)initWithBundleId:(id)arg1 lastLaunch:(id)arg2 lastSpotlightLaunch:(id)arg3 ;
-(NSDate *)lastLaunch;
-(NSDate *)lastSpotlightLaunch;
-(void)setLastLaunch:(NSDate *)arg1 ;
-(void)setLastSpotlightLaunch:(NSDate *)arg1 ;
-(id)initWithBundleId:(id)arg1 ;
@end

