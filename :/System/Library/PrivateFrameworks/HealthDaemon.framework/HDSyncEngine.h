/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSyncEngine <NSObject>
@required
-(BOOL)synchronizeStore:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
-(BOOL)applySyncObjectCollection:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
-(BOOL)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
-(BOOL)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(BOOL)arg3 error:(id*)arg4;
-(BOOL)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
-(void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
-(void)resetStore:(id)arg1;

@end

