/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface SPSearchQuery : NSObject <NSCopying> {

	unsigned long long _queryID;
	NSString* _searchString;
	NSString* _keyboardLanguage;
	NSString* _keyboardPrimaryLanguage;
	BOOL _cancelled;
	BOOL _finished;
	BOOL _internal;
	NSArray* _searchDomains;
	int _nextDomainIndex;
	double _creationTime;
	double _cancellationTime;
	unsigned long long _creationStamp;
	BOOL _dictationStable;
	BOOL _grouped;
	NSDictionary* _dictationResponse;
	long long _maxCount;
	NSArray* _disabledBundles;
	long long _contentFilters;

}

@property (nonatomic,readonly) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) NSString * keyboardLanguage;                     //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,readonly) NSString * keyboardPrimaryLanguage;              //@synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage - In the implementation block
@property (nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) NSArray * searchDomains;                         //@synthesize searchDomains=_searchDomains - In the implementation block
@property (nonatomic,retain) NSDictionary * dictationResponse;                  //@synthesize dictationResponse=_dictationResponse - In the implementation block
@property (assign,nonatomic) BOOL dictationStable;                              //@synthesize dictationStable=_dictationStable - In the implementation block
@property (assign,nonatomic) BOOL grouped;                                      //@synthesize grouped=_grouped - In the implementation block
@property (assign,nonatomic) long long maxCount;                                //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL internal;                                     //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) NSArray * disabledBundles;                         //@synthesize disabledBundles=_disabledBundles - In the implementation block
@property (assign,nonatomic) long long contentFilters;                          //@synthesize contentFilters=_contentFilters - In the implementation block
@property (nonatomic,readonly) double creationTime;                             //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) double cancellationTime;                         //@synthesize cancellationTime=_cancellationTime - In the implementation block
@property (nonatomic,readonly) unsigned long long creationStamp;                //@synthesize creationStamp=_creationStamp - In the implementation block
-(void)setMaxCount:(long long)arg1 ;
-(NSArray *)searchDomains;
-(void)cancel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)cancelled;
-(NSString *)searchString;
-(void)setInternal:(BOOL)arg1 ;
-(BOOL)internal;
-(NSString *)keyboardLanguage;
-(long long)maxCount;
-(double)creationTime;
-(id)initWithSearchString:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 forSearchDomains:(id)arg4 disabledBundles:(id)arg5 ;
-(NSString *)keyboardPrimaryLanguage;
-(NSArray *)disabledBundles;
-(id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 forSearchDomains:(id)arg3 disabledBundles:(id)arg4 ;
-(id)initWithQuery:(id)arg1 domains:(id)arg2 ;
-(double)cancellationTime;
-(NSDictionary *)dictationResponse;
-(void)setDictationResponse:(NSDictionary *)arg1 ;
-(BOOL)dictationStable;
-(void)setDictationStable:(BOOL)arg1 ;
-(BOOL)grouped;
-(void)setGrouped:(BOOL)arg1 ;
-(void)setDisabledBundles:(NSArray *)arg1 ;
-(void)setContentFilters:(long long)arg1 ;
-(unsigned long long)creationStamp;
-(long long)contentFilters;
@end

