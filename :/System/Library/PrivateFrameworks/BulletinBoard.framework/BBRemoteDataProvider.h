/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BBDataProvider.h>
#import <libobjc.A.dylib/BBRemoteDataProviderServerProxy.h>

@protocol OS_dispatch_queue, BBRemoteDataProviderClientProxy, BBRemoteDataProviderDelegate;
@class NSString, NSObject;

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy> {

	NSString* _sectionID;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _proxyQueue;
	id<BBRemoteDataProviderClientProxy> _clientProxy;
	BOOL _connected;
	BOOL _serverIsReady;
	NSObject*<OS_dispatch_queue> _serverControlQueue;
	id<BBRemoteDataProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)debugDescription;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)attachmentAspectRatioForRecordID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)primaryAttachmentDataForRecordID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1 ;
-(void)reloadSectionParameters:(id)arg1 ;
-(void)reloadDefaultSectionInfo:(id)arg1 ;
-(void)getClearedInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)setClearedInfo:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(void)setClientProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSectionID:(id)arg1 delegate:(id)arg2 ;
-(void)setServerIsReady:(BOOL)arg1 ;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 ;
-(void)startWatchdog;
-(void)reloadIdentityWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canPerformMigration;
-(void)_logDoesNotRespond:(SEL)arg1 ;
-(void)_sendClientRequest:(/*^block*/id)arg1 ;
-(BOOL)checkResponds:(BOOL)arg1 forSelector:(SEL)arg2 ;
-(void)calloutToServer:(/*^block*/id)arg1 ;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateBulletins;
-(void)modifyBulletin:(id)arg1 ;
-(void)withdrawBulletinsWithRecordID:(id)arg1 ;
-(void)dataProviderDidLoad;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(id)sectionIdentifier;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2 ;
@end

