/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTSectionInfoListProvider <NSObject>
@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)reloadWithCompletion:(/*^block*/id)arg1;

@end

