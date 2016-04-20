/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSyncChange <HDSyncObjectCollection>
@property (nonatomic,readonly) HDSyncAnchorRange syncAnchorRange; 
@required
-(void)setObjects:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3;
-(HDSyncAnchorRange)syncAnchorRange;
-(id)requiredAnchorMapWithError:(id*)arg1;

@end

