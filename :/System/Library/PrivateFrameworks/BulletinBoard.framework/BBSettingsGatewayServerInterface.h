/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBSettingsGatewayServerInterface <NSObject>
@required
-(void)getSectionOrderRuleWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPrivilegedSenderTypesWithHandler:(/*^block*/id)arg1;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)setSectionOrderRule:(long long)arg1;
-(void)getSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getBehaviorOverridesWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesEnabledWithHandler:(/*^block*/id)arg1;
-(void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(/*^block*/id)arg1;
-(void)setOrderedSectionIDs:(id)arg1;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
-(void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
-(void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
-(void)setBehaviorOverridesChangeUpdatesEnabled:(BOOL)arg1;
-(void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(BOOL)arg1;
-(void)setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)arg1;
-(void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)arg1;
-(void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(BOOL)arg1;
-(void)setPrivilegedSenderTypesChangeUpdatesEnabled:(BOOL)arg1;
-(void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
-(void)setBehaviorOverrideStatus:(long long)arg1 source:(unsigned long long)arg2;
-(void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1 source:(unsigned long long)arg2;

@end

