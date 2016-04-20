/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, SSMetricsConfiguration, SSMetricsPageEvent;

@interface RadioSearchRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	BOOL _excludeFeaturedStations;
	BOOL _shouldProcessCategories;
	NSString* _searchTerm;
	long long _searchCategory;
	unsigned long long _numberOfSearchResults;
	unsigned long long _searchResultsOffset;
	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;

}

@property (nonatomic,readonly) NSString * searchTerm;                                             //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) long long searchCategory;                                            //@synthesize searchCategory=_searchCategory - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSearchResults;                            //@synthesize numberOfSearchResults=_numberOfSearchResults - In the implementation block
@property (assign,nonatomic) unsigned long long searchResultsOffset;                              //@synthesize searchResultsOffset=_searchResultsOffset - In the implementation block
@property (assign,nonatomic) BOOL excludeFeaturedStations;                                        //@synthesize excludeFeaturedStations=_excludeFeaturedStations - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessCategories;                                        //@synthesize shouldProcessCategories=_shouldProcessCategories - In the implementation block
@property (nonatomic,retain,readonly) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) SSMetricsPageEvent * metricsPageEvent;                        //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
-(unsigned long long)numberOfSearchResults;
-(void)cancel;
-(id)init;
-(id)description;
-(long long)searchCategory;
-(id)initWithSearchTerm:(id)arg1 ;
-(void)startWithSearchCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSearchCategory:(long long)arg1 ;
-(unsigned long long)searchResultsOffset;
-(void)setSearchResultsOffset:(unsigned long long)arg1 ;
-(BOOL)excludeFeaturedStations;
-(void)setExcludeFeaturedStations:(BOOL)arg1 ;
-(BOOL)shouldProcessCategories;
-(void)setShouldProcessCategories:(BOOL)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(SSMetricsConfiguration *)metricsConfiguration;
-(void)setNumberOfSearchResults:(unsigned long long)arg1 ;
-(NSString *)searchTerm;
@end

