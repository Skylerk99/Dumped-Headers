/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/MPDataProvider.bundle/MPDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBDataProvider <BBSectionIdentity>
@optional
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
-(id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;
-(id)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3;
-(id)clearedInfoForBulletins:(id)arg1;
-(id)sectionParameters;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
-(id)primaryAttachmentDataForRecordID:(id)arg1;
-(float)attachmentAspectRatioForRecordID:(id)arg1;
-(void)dataProviderDidLoad;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
-(void)noteSectionInfoDidChange:(id)arg1;
-(void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;
-(void)handleBulletinActionResponse:(id)arg1;
-(BOOL)syncsBulletinDismissal;
-(id)displayNameForFilterID:(id)arg1;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(id)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;

@required
-(id)sortDescriptors;

@end

