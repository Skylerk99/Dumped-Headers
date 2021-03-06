/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DASearchQueryConsumer;
#import <DataAccessExpress/DataAccessExpress-Structs.h>
@class NSString;

@interface DASearchQuery : NSObject {

	int _timeLimit;
	int _state;
	NSString* _searchString;
	id<DASearchQueryConsumer> _consumer;
	NSString* _searchID;
	NSRange _range;

}

@property (nonatomic,copy) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned maxResults; 
@property (assign,nonatomic) int timeLimit;                                          //@synthesize timeLimit=_timeLimit - In the implementation block
@property (assign,nonatomic,__weak) id<DASearchQueryConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,copy) NSString * searchID;                                      //@synthesize searchID=_searchID - In the implementation block
@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
+(id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)searchString;
-(NSRange)range;
-(id)dictionaryRepresentation;
-(void)setConsumer:(id<DASearchQueryConsumer>)arg1 ;
-(id<DASearchQueryConsumer>)consumer;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(void)sendFinishedToConsumerWithError:(id)arg1 ;
-(void)sendResultsToConsumer:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(BOOL)isQueryRunning;
-(void)setMaxResults:(unsigned)arg1 ;
-(unsigned)maxResults;
-(NSString *)searchID;
-(void)setSearchID:(NSString *)arg1 ;
-(void)setTimeLimit:(int)arg1 ;
-(int)timeLimit;
@end

