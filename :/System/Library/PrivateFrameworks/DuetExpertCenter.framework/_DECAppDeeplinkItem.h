/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECItem.h>

@class NSString, NSURL, NSData, NSDictionary;

@interface _DECAppDeeplinkItem : _DECItem {

	NSString* _bundleIdentifier;
	NSString* _title;
	NSString* _activityType;
	NSString* _uniqueIdentifier;
	NSURL* _contentURL;
	NSString* _requiredString;
	NSString* _secondaryString;
	NSData* _optionalData;
	NSDictionary* _presentationAttributes;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * activityType;                            //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * contentURL;                                 //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,readonly) NSString * requiredString;                          //@synthesize requiredString=_requiredString - In the implementation block
@property (nonatomic,readonly) NSString * secondaryString;                         //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,readonly) NSData * optionalData;                              //@synthesize optionalData=_optionalData - In the implementation block
@property (nonatomic,readonly) NSDictionary * presentationAttributes;              //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)appDeeplinkWithBundleIdentifier:(id)arg1 title:(id)arg2 activityType:(id)arg3 uniqueIdentifier:(id)arg4 ;
+(id)appDeeplinkWithBundleIdentifier:(id)arg1 title:(id)arg2 requiredString:(id)arg3 secondaryString:(id)arg4 optionalData:(id)arg5 presentationAttributes:(id)arg6 ;
+(id)appWithBundleIdentifier:(id)arg1 activityType:(id)arg2 title:(id)arg3 uniqueIdentifier:(id)arg4 contentURL:(id)arg5 requiredString:(id)arg6 secondaryString:(id)arg7 optionalData:(id)arg8 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(NSURL *)contentURL;
-(NSString *)secondaryString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(NSString *)activityType;
-(NSString *)uniqueIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 activityType:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 requiredString:(id)arg3 secondaryString:(id)arg4 optionalData:(id)arg5 presentationAttributes:(id)arg6 ;
-(id)initWithBundleIdentifier:(id)arg1 activityType:(id)arg2 title:(id)arg3 uniqueIdentifier:(id)arg4 contentURL:(id)arg5 requiredString:(id)arg6 secondaryString:(id)arg7 optionalData:(id)arg8 ;
-(NSString *)requiredString;
-(NSData *)optionalData;
-(NSDictionary *)presentationAttributes;
@end

