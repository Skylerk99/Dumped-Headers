/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBDataProvider.h>

@class NSMutableSet, NSSet, NSBundle, NSString;

@interface SLSocialBulletinDataProvider : NSObject <BBDataProvider> {

	NSMutableSet* _bulletins;
	unsigned long long _bulletinCounter;
	NSSet* _uploadServices;
	NSBundle* _socialBundle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeNotifications;
-(id)_uploadServices;
-(id)_supportedNotifications;
-(id)_uploadServiceForNotificationName:(id)arg1 ;
-(id)_notificationMessageMap;
-(void)_addBulletinWithTitle:(id)arg1 message:(id)arg2 forUploadService:(id)arg3 ;
-(id)_socialBundle;
-(void)_configureSectionSubtypeParameters:(id)arg1 forUploadService:(id)arg2 ;
-(void)handleNotification:(id)arg1 ;
-(void)_createBulletinsForUploadInfoDicts:(id)arg1 uploadService:(id)arg2 ;
-(void)_registerForNotifications;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIconData;
-(id)sectionIdentifier;
@end

