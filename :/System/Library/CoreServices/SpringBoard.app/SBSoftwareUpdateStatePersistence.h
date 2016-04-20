/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SBSoftwareUpdateStatePersistence : NSObject {

	unsigned long long _alertFlow;
	NSDate* _nextAlertDate;
	BOOL _downloadWasQueuedRemotely;

}

@property (assign,nonatomic) BOOL downloadWasQueuedRemotely;              //@synthesize downloadWasQueuedRemotely=_downloadWasQueuedRemotely - In the implementation block
@property (assign,nonatomic) unsigned long long alertFlow;                //@synthesize alertFlow=_alertFlow - In the implementation block
@property (nonatomic,retain) NSDate * nextAlertDate;                      //@synthesize nextAlertDate=_nextAlertDate - In the implementation block
-(void)setAlertFlow:(unsigned long long)arg1 ;
-(void)setNextAlertDate:(NSDate *)arg1 ;
-(void)setDownloadWasQueuedRemotely:(BOOL)arg1 ;
-(unsigned long long)alertFlow;
-(NSDate *)nextAlertDate;
-(BOOL)downloadWasQueuedRemotely;
-(void)save;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)_load;
@end

