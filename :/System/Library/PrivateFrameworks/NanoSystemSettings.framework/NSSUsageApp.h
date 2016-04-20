/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSSUsageApp : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	unsigned long long _staticSize;
	unsigned long long _dynamicSize;
	unsigned long long _dataSize;
	unsigned long long _totalSize;

}

@property (nonatomic,retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                    //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) unsigned long long staticSize;               //@synthesize staticSize=_staticSize - In the implementation block
@property (assign,nonatomic) unsigned long long dynamicSize;              //@synthesize dynamicSize=_dynamicSize - In the implementation block
@property (assign,nonatomic) unsigned long long dataSize;                 //@synthesize dataSize=_dataSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalSize;                //@synthesize totalSize=_totalSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)dataSize;
-(void)setDataSize:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(unsigned long long)dynamicSize;
-(unsigned long long)staticSize;
-(void)setStaticSize:(unsigned long long)arg1 ;
-(void)setDynamicSize:(unsigned long long)arg1 ;
-(unsigned long long)totalSize;
@end

