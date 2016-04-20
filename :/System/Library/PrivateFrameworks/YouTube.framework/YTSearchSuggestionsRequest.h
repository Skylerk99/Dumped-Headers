/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSString;

@interface YTSearchSuggestionsRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _suggestions;
	NSString* _query;

}
-(int)parseData:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)dealloc;
-(void)clearDelegate;
-(void)didParseData;
-(void)didAuthenticate:(id)arg1 ;
-(id)_suggestionsURLForQuery:(id)arg1 ;
-(void)requestSuggestionsWithDelegate:(id)arg1 query:(id)arg2 ;
@end

