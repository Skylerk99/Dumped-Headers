/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface HDUserDefault : NSObject <NSSecureCoding> {

	NSString* _key;
	NSDictionary* _value;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSDictionary * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)key;
-(NSDictionary *)value;
-(void)setValue:(NSDictionary *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
@end

