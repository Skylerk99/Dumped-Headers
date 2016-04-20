/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableData, NSObject;

@interface NNMKSQLJournal : NSObject {

	NSString* _directoryPath;
	NSMutableData* _currentFileData;
	NSObject*<OS_dispatch_queue> _journalQueue;
	unsigned long long _filesCount;

}

@property (nonatomic,retain) NSString * directoryPath;                               //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,retain) NSMutableData * currentFileData;                        //@synthesize currentFileData=_currentFileData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> journalQueue;              //@synthesize journalQueue=_journalQueue - In the implementation block
@property (assign,nonatomic) unsigned long long filesCount;                          //@synthesize filesCount=_filesCount - In the implementation block
-(id)initWithPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)journalQueue;
-(void)setJournalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)_currentFilesCount;
-(void)flushIfNeeded;
-(id)_sortedJournalFiles;
-(id)_nextFilePath;
-(void)appendSQLStatement:(id)arg1 ;
-(void)mergeUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)directoryPath;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(NSMutableData *)currentFileData;
-(void)setCurrentFileData:(NSMutableData *)arg1 ;
-(unsigned long long)filesCount;
-(void)setFilesCount:(unsigned long long)arg1 ;
-(void)_flush;
@end

