/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSHCInfo : NSObject {

	long long _state;
	unsigned short _localCID;
	unsigned short _remoteCID;
	unsigned short _reqCount;
	unsigned _lastSentSeq;
	unsigned _lastSentAck;
	void* _localContext;
	void* _remoteContext;

}

@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned short reqCount;               //@synthesize reqCount=_reqCount - In the implementation block
@property (assign,nonatomic) unsigned short localCID;               //@synthesize localCID=_localCID - In the implementation block
@property (assign,nonatomic) unsigned short remoteCID;              //@synthesize remoteCID=_remoteCID - In the implementation block
@property (assign,nonatomic) unsigned lastSentSeq;                  //@synthesize lastSentSeq=_lastSentSeq - In the implementation block
@property (assign,nonatomic) unsigned lastSentAck;                  //@synthesize lastSentAck=_lastSentAck - In the implementation block
-(void)setLocalContext:(void*)arg1 ;
-(void)setRemoteContext:(void*)arg1 ;
-(unsigned short)reqCount;
-(void)setReqCount:(unsigned short)arg1 ;
-(unsigned short)localCID;
-(void)setLocalCID:(unsigned short)arg1 ;
-(unsigned short)remoteCID;
-(void)setRemoteCID:(unsigned short)arg1 ;
-(unsigned)lastSentSeq;
-(void)setLastSentSeq:(unsigned)arg1 ;
-(unsigned)lastSentAck;
-(void)setLastSentAck:(unsigned)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)invalidate;
-(void*)localContext;
-(void*)remoteContext;
@end

