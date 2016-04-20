/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSString;

@interface HLPURLDataCache : NSObject <NSCopying, NSCoding> {

	unsigned long long _cacheType;
	long long _maxAge;
	unsigned long long _fileSize;
	NSDate* _updatedDate;
	NSString* _identifier;
	NSString* _lastModified;
	NSString* _locale;

}

@property (nonatomic,readonly) BOOL expired; 
@property (assign,nonatomic) unsigned long long cacheType;              //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) long long maxAge;                          //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;               //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSDate * updatedDate;                      //@synthesize updatedDate=_updatedDate - In the implementation block
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                   //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) NSString * locale;                         //@synthesize locale=_locale - In the implementation block
-(void)setLastModified:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(unsigned long long)cacheType;
-(void)setCacheType:(unsigned long long)arg1 ;
-(void)setUpdatedDate:(NSDate *)arg1 ;
-(NSDate *)updatedDate;
-(BOOL)expired;
-(unsigned long long)fileSize;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setMaxAge:(long long)arg1 ;
-(NSString *)lastModified;
-(long long)maxAge;
@end

