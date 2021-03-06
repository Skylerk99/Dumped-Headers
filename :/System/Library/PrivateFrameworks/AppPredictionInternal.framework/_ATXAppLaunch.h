/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface _ATXAppLaunch : NSObject {

	NSString* _bundleId;
	NSDate* _date;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * reason;                //@synthesize reason=_reason - In the implementation block
-(id)init;
-(id)description;
-(NSDate *)date;
-(NSString *)bundleId;
-(NSString *)reason;
-(id)initWithBundleId:(id)arg1 date:(id)arg2 reason:(id)arg3 ;
-(BOOL)isEqualToLaunch:(id)arg1 ;
@end

