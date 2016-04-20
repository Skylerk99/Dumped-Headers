/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DASearchQuery.h>

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery {

	BOOL _includePhotos;
	NSString* _searchBase;
	NSString* _searchScope;

}

@property (nonatomic,copy) NSString * searchBase;               //@synthesize searchBase=_searchBase - In the implementation block
@property (nonatomic,copy) NSString * searchScope;              //@synthesize searchScope=_searchScope - In the implementation block
@property (assign,nonatomic) BOOL includePhotos;                //@synthesize includePhotos=_includePhotos - In the implementation block
+(id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4 ;
-(void)setIncludePhotos:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(BOOL)includePhotos;
-(id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4 ;
-(void)setSearchBase:(NSString *)arg1 ;
-(void)setSearchScope:(NSString *)arg1 ;
-(NSString *)searchBase;
-(NSString *)searchScope;
@end

