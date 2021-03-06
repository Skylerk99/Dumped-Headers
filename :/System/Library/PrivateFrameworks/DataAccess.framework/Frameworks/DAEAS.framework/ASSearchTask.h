/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class DASearchQuery;

@interface ASSearchTask : ASTask {

	int _numDownloadedElements;
	DASearchQuery* _query;

}

@property (nonatomic,retain) DASearchQuery * query;                  //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) int numDownloadedElements;              //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
-(id)initWithQuery:(id)arg1 ;
-(id)description;
-(DASearchQuery *)query;
-(void)setQuery:(DASearchQuery *)arg1 ;
-(int)numDownloadedElements;
-(void)setNumDownloadedElements:(int)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
@end

