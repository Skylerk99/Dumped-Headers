/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCServerZone, CKShare, BRCItemID, NSString;

@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	BRCServerZone* _serverZone;
	CKShare* _share;
	BRCItemID* _itemID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3 ;
-(void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1 ;
-(void)_modifyShareAccessIfNecessaryGrantingAccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateDocumentWithShareID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performAfterFetchingBaseTokenIfNecessary:(/*^block*/id)arg1 ;
-(unsigned long long)startActivity;
@end

