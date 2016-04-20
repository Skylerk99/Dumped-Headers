/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCForegroundClient.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSString, BRCUserNotification, BRCAccountSession, NSArray, NSURL, CKShareID, CKShareInfo, BRCItemID, BRCLocalContainer, BRCPrivateLocalContainer, BRCXPCClient;

@interface BRCSharingAcceptFlowOperation : _BRCOperation <BRCForegroundClient, BRCOperationSubclass> {

	BRCUserNotification* _userNotification;
	BRCAccountSession* _session;
	NSArray* _acceptationFlow;
	unsigned long long _stepIndex;
	id _logSection;
	NSURL* _shareURL;
	CKShareID* _shareID;
	CKShareInfo* _shareInfo;
	BRCItemID* _sharedItemID;
	NSString* _unsaltedBookmarkData;
	BRCLocalContainer* _localContainer;
	BRCPrivateLocalContainer* _aliasContainer;
	NSURL* _shareDocumentURL;
	NSString* _shareDocumentFileProviderString;
	BRCXPCClient* _xpcClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
+(void)_openiCloudSettings;
+(id)_runningShareIDs;
+(void)_openShareURLInWebBrowser:(id)arg1 withReason:(id)arg2 ;
+(void)_openAppStoreForShareURL:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(NSString *)identifier;
-(void)main;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)_performNextStep;
-(BOOL)_isOwner;
-(BOOL)_isOwnerOrShareAlreadyAccepted;
-(BOOL)_isItemDownloaded;
-(id)initWithShareURL:(id)arg1 client:(id)arg2 session:(id)arg3 ;
-(void)_isURLWellFormed;
-(void)_isAppInstalled;
-(void)_isUserSignedInToiCloudDrive;
-(void)_isAppProfileEnabled;
-(void)_fetchShareInfo;
-(void)_showSharingOpenDialog;
-(void)_acceptShareURL;
-(void)_createNecessaryContainers;
-(void)_waitForSharedItemToSyncDown;
-(void)_waitForFaultToBeOnDisk;
-(void)_downloadDocument;
-(void)_openSharedDocument;
-(unsigned long long)startActivity;
@end

