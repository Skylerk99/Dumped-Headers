/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString, SGPostalAddressComponents;

@interface SGPostalAddress : SGLabeledObject {

	NSString* _cachedAddress;
	long long _cachedAddressDispatchOnceToken;
	NSString* _rawAddress;
	SGPostalAddressComponents* _components;

}

@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSString * rawAddress;                               //@synthesize rawAddress=_rawAddress - In the implementation block
@property (nonatomic,readonly) SGPostalAddressComponents * components;              //@synthesize components=_components - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 origin:(id)arg6 ;
-(NSString *)address;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SGPostalAddressComponents *)components;
-(NSString *)rawAddress;
-(BOOL)isEqualToPostalAddress:(id)arg1 ;
-(id)initWithAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 origin:(id)arg6 ;
@end

