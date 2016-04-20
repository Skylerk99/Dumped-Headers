/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>

@class PSSpecifier, NSArray, NSMutableDictionary;

@interface SafariStorageSettingsController : PSEditableListController {

	PSSpecifier* _totalUsageSpecifier;
	NSArray* _deleteButtonSpecifiers;
	NSMutableDictionary* _domainSpecifiers;
	NSArray* _sortedDomains;
	BOOL _cancelDomainSpecifierUpdate;

}
+(void)deleteAllData;
-(id)specifiers;
-(void)setEditable:(BOOL)arg1 ;
-(id)_getSpecifierDiskUsage:(id)arg1 ;
-(void)_deleteOriginData:(id)arg1 ;
-(void)_addWebsiteDataRecord:(id)arg1 toDictionary:(id)arg2 ;
-(id)_totalUsageString;
-(void)showAllDomainSpecifiers;
-(void)_updateTotalUsageSpecifier;
-(void)_addDomainSpecifiers;
-(void)_addWebSecurityDomainsToDictionary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_createDomainSpecifiers;
-(void)_showDeleteAllOriginsAlert;
-(void)_deleteAllOrigins;
@end

