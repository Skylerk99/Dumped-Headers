/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _parametersByName;
	NSMutableArray* _parameters;
	NSString* _templateString;

}

@property (nonatomic,copy,readonly) NSString * templateString;              //@synthesize templateString=_templateString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)templateString;
-(id)templateBySubstitutingValues:(id)arg1 ;
-(BOOL)includesParameter:(id)arg1 ;
-(id)URLWithSearchTerms:(id)arg1 ;
-(id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2 ;
-(id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2 ;
@end

