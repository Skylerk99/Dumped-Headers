/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_dispatch_semaphore;
@class SBIcon, NSObject, NSString;

@interface SBDeleteIconAlertItem : SBAlertItem <UIAlertViewDelegate> {

	SBIcon* _icon;
	BOOL _checkedDocumentsInCloudState;
	BOOL _appHasDocumentsInCloud;
	BOOL _appHasDocumentsWithPendingUpdates;
	BOOL _askedUserAboutDocumentsDocumentsInCloud;
	BOOL _askedUserAboutDocumentsWithPendingUpdates;
	BOOL _checkedForRelatedData;
	BOOL _finishedCheckingForRelatedData;
	BOOL _appHasHealthKitData;
	BOOL _appHasGameKitData;
	NSObject*<OS_dispatch_semaphore> _healthKitResponseSem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIcon:(id)arg1 ;
-(BOOL)_hasRelatedData;
-(void)_checkDocumentsInCloudStateIfNeeded;
-(void)_startCheckingForRelatedExternalDataIfNeeded;
-(void)_waitForRelatedDataResponsesIfNeeded;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)icon;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

