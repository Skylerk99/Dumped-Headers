/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/MCURLListenerListController.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableArray, UIImage, NSSManager, MCProfileInfo, NSArray, NSString;

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate> {

	BOOL _hasFetchedProfilesInfo;
	BOOL _hasFailedFetchingProfilesInfo;
	int _provisioningProfileInstalledToken;
	int _provisioningProfileRemovedToken;
	NSMutableArray* _profileInfo;
	UIImage* _profileListIcon;
	NSSManager* _nssManager;
	MCProfileInfo* _mdmProfileInfo;
	NSArray* _configurationProfilesInfoList;
	NSArray* _enterpriseAppSigners;
	NSArray* _developerAppSigners;

}

@property (nonatomic,retain) NSMutableArray * profileInfo;                         //@synthesize profileInfo=_profileInfo - In the implementation block
@property (nonatomic,retain) UIImage * profileListIcon;                            //@synthesize profileListIcon=_profileListIcon - In the implementation block
@property (nonatomic,retain) NSSManager * nssManager;                              //@synthesize nssManager=_nssManager - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedProfilesInfo;                          //@synthesize hasFetchedProfilesInfo=_hasFetchedProfilesInfo - In the implementation block
@property (assign,nonatomic) BOOL hasFailedFetchingProfilesInfo;                   //@synthesize hasFailedFetchingProfilesInfo=_hasFailedFetchingProfilesInfo - In the implementation block
@property (nonatomic,retain) MCProfileInfo * mdmProfileInfo;                       //@synthesize mdmProfileInfo=_mdmProfileInfo - In the implementation block
@property (nonatomic,retain) NSArray * configurationProfilesInfoList;              //@synthesize configurationProfilesInfoList=_configurationProfilesInfoList - In the implementation block
@property (nonatomic,retain) NSArray * enterpriseAppSigners;                       //@synthesize enterpriseAppSigners=_enterpriseAppSigners - In the implementation block
@property (nonatomic,retain) NSArray * developerAppSigners;                        //@synthesize developerAppSigners=_developerAppSigners - In the implementation block
@property (assign,nonatomic) int provisioningProfileInstalledToken;                //@synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken - In the implementation block
@property (assign,nonatomic) int provisioningProfileRemovedToken;                  //@synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfileInfo:(NSMutableArray *)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_profileListChanged:(id)arg1 ;
-(void)_showProgressIndicator;
-(void)fetchRemoteProfileList;
-(void)_installedApplicationsChanged:(id)arg1 ;
-(void)_appSignerApplicationsChanged:(id)arg1 ;
-(void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2 ;
-(void)setEnterpriseAppSigners:(NSArray *)arg1 ;
-(void)setDeveloperAppSigners:(NSArray *)arg1 ;
-(UIImage *)profileListIcon;
-(id)specifiersForMDMProfileInfo:(id)arg1 configurationProfilesInfo:(id)arg2 enterpriseAppSigners:(id)arg3 developerAppSigners:(id)arg4 ;
-(NSArray *)enterpriseAppSigners;
-(NSArray *)developerAppSigners;
-(void)_hideProgressIndicatorAndShowBackButton:(BOOL)arg1 ;
-(void)setProfileListIcon:(UIImage *)arg1 ;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(BOOL)hasFetchedProfilesInfo;
-(void)setHasFetchedProfilesInfo:(BOOL)arg1 ;
-(BOOL)hasFailedFetchingProfilesInfo;
-(void)setHasFailedFetchingProfilesInfo:(BOOL)arg1 ;
-(MCProfileInfo *)mdmProfileInfo;
-(void)setMdmProfileInfo:(MCProfileInfo *)arg1 ;
-(NSArray *)configurationProfilesInfoList;
-(void)setConfigurationProfilesInfoList:(NSArray *)arg1 ;
-(int)provisioningProfileInstalledToken;
-(void)setProvisioningProfileInstalledToken:(int)arg1 ;
-(int)provisioningProfileRemovedToken;
-(void)setProvisioningProfileRemovedToken:(int)arg1 ;
-(NSMutableArray *)profileInfo;
@end

