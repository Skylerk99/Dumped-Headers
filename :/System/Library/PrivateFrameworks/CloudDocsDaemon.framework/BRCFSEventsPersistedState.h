/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRCAccountSession, NSUUID;

@interface BRCFSEventsPersistedState : NSObject <NSSecureCoding> {

	BRCAccountSession* _session;
	NSUUID* _streamUUID;
	unsigned long long _latestEventID;
	unsigned long long _rootID;

}

@property (nonatomic,retain) NSUUID * streamUUID;                           //@synthesize streamUUID=_streamUUID - In the implementation block
@property (assign,nonatomic) unsigned long long latestEventID;              //@synthesize latestEventID=_latestEventID - In the implementation block
@property (assign,nonatomic) unsigned long long rootID;                     //@synthesize rootID=_rootID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setLatestEventID:(unsigned long long)arg1 ;
-(void)setStreamUUID:(NSUUID *)arg1 ;
-(void)setRootID:(unsigned long long)arg1 ;
-(NSUUID *)streamUUID;
-(unsigned long long)latestEventID;
-(unsigned long long)rootID;
@end

