/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject {

	NSMutableDictionary* _statementsDictionary;
	ML3StatementCacheList* _nodeList;
	unsigned long long _cacheSize;

}

@property (nonatomic,readonly) unsigned long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
-(void)dealloc;
-(void)clearCache;
-(unsigned long long)cacheSize;
-(id)initWithCacheSize:(unsigned long long)arg1 ;
-(id)cachedStatementForSQL:(id)arg1 ;
-(id)allStatements;
-(void)cacheStatement:(id)arg1 ;
@end

