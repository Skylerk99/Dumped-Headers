/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/SGObject.h>

@class NSString;

@interface SGName : SGObject {

	NSString* _fullName;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _prefix;
	NSString* _suffix;

}

@property (nonatomic,readonly) NSString * fullName;                //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * firstName;               //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;              //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * prefix;                  //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) NSString * suffix;                  //@synthesize suffix=_suffix - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nameWithFirstName:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3 ;
+(id)nameWithFirstName:(id)arg1 lastName:(id)arg2 withRecordId:(id)arg3 origin:(id)arg4 ;
+(id)nameWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 withRecordId:(id)arg7 origin:(id)arg8 ;
-(NSString *)middleName;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8 ;
-(BOOL)isEqualToName:(id)arg1 ;
-(NSString *)fullName;
-(NSString *)suffix;
-(NSString *)prefix;
@end

