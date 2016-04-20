/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSURL;

@interface YTFeedRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _videos;
	NSURL* _batchURL;
	unsigned _startIndex;
	unsigned _videosPerPage;
	unsigned _totalResults;
	BOOL _invalidatedToken;

}
+(int)partialFeedType;
-(int)parseData:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didParseData;
-(void)loadRequest:(id)arg1 withDelegate:(id)arg2 accountAuthRequired:(BOOL)arg3 ;
@end

