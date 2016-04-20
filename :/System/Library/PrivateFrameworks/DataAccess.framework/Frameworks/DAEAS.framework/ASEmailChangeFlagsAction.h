/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@interface ASEmailChangeFlagsAction : DAAction {

	BOOL _read;
	BOOL _flagged;
	unsigned long long _changedFlags;

}

@property (assign,nonatomic) BOOL read;                                    //@synthesize read=_read - In the implementation block
@property (assign,nonatomic) BOOL flagged;                                 //@synthesize flagged=_flagged - In the implementation block
@property (assign,nonatomic) unsigned long long changedFlags;              //@synthesize changedFlags=_changedFlags - In the implementation block
-(id)initWithServerID:(id)arg1 read:(BOOL)arg2 flagged:(BOOL)arg3 changedFlags:(unsigned long long)arg4 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(unsigned long long)changedFlags;
-(void)setChangedFlags:(unsigned long long)arg1 ;
-(BOOL)flagged;
-(void)setRead:(BOOL)arg1 ;
-(void)setFlagged:(BOOL)arg1 ;
-(BOOL)read;
@end

