/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>

@class NSString;

@interface SGLabeledObject : SGObject {

	NSString* _label;
	unsigned long long _extractionType;

}

@property (nonatomic,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionType;              //@synthesize extractionType=_extractionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)localizedLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqualToSuggestion:(id)arg1 ;
-(id)initWithLabel:(id)arg1 extractionType:(unsigned long long)arg2 recordId:(id)arg3 origin:(id)arg4 ;
-(unsigned long long)extractionType;
@end

