/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableSet, NSMutableDictionary, PKPaymentWebServiceContext;

@interface NPKCompanionAgentConnection : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	BOOL _queueAppropriateFailedActions;
	NSMutableSet* _cachedUniqueIDs;
	NSMutableDictionary* _cachedPasses;
	NSMutableDictionary* _connectionAvailableActions;
	PKPaymentWebServiceContext* _connectionUnavailableWebServiceContext;

}

@property (assign,nonatomic) BOOL queueAppropriateFailedActions;                                               //@synthesize queueAppropriateFailedActions=_queueAppropriateFailedActions - In the implementation block
@property (readonly) NSXPCConnection * xpcConnection; 
@property (retain) NSMutableSet * cachedUniqueIDs;                                                             //@synthesize cachedUniqueIDs=_cachedUniqueIDs - In the implementation block
@property (retain) NSMutableDictionary * cachedPasses;                                                         //@synthesize cachedPasses=_cachedPasses - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionAvailableActions;                                 //@synthesize connectionAvailableActions=_connectionAvailableActions - In the implementation block
@property (nonatomic,retain) PKPaymentWebServiceContext * connectionUnavailableWebServiceContext;              //@synthesize connectionUnavailableWebServiceContext=_connectionUnavailableWebServiceContext - In the implementation block
+(BOOL)isSetupAssistantProvisioningSupported;
+(BOOL)isIssuerAppProvisioningSupported;
+(id)watchProvisioningURL;
+(id)watchProvisioningURLForPaymentPass:(id)arg1 ;
-(void)_clearCaches;
-(id)watchPaymentWebService;
-(void)shouldShowWatchOfferForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)noteWatchOfferShownForPaymentPass:(id)arg1 ;
-(void)beginProvisioningFromWatchOfferForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isIssuerAppProvisioningSupported;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)xpcConnection;
-(void)setQueueAppropriateFailedActions:(BOOL)arg1 ;
-(void)paymentPassUniqueIDs:(/*^block*/id)arg1 ;
-(void)removePaymentPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentPassWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)defaultCardUniqueID:(/*^block*/id)arg1 ;
-(void)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDefaultCardUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)savePaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)redownloadAllPaymentPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)noteProvisioningPreflightCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentPassWithDeviceAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePendingUnpairingWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingiCloudSignoutWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleServerPaymentPassesChanged:(id)arg1 ;
-(void)_handleDefaultCardChanged:(id)arg1 ;
-(int)_isApplePaySupportedInCurrentRegion;
-(id)_cachedUniqueIDs;
-(void)_setCachedUniqueIDs:(id)arg1 ;
-(id)_cachedPassForUniqueID:(id)arg1 ;
-(void)_addPassToCache:(id)arg1 ;
-(void)_applyDataAccessorToPass:(id)arg1 ;
-(void)_removePassWithUniqueIDFromCache:(id)arg1 ;
-(void)_savePaymentPass:(id)arg1 atURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)queueAppropriateFailedActions;
-(NSMutableSet *)cachedUniqueIDs;
-(void)setCachedUniqueIDs:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)cachedPasses;
-(void)setCachedPasses:(NSMutableDictionary *)arg1 ;
-(void)consistencyCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)shouldShowApplePaySettingsWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)connectionAvailableActions;
-(void)setConnectionAvailableActions:(NSMutableDictionary *)arg1 ;
-(PKPaymentWebServiceContext *)connectionUnavailableWebServiceContext;
-(void)setConnectionUnavailableWebServiceContext:(PKPaymentWebServiceContext *)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_errorHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)_sharedPaymentWebServiceContextWithCompletion:(/*^block*/id)arg1 ;
-(void)setSharedPaymentWebServiceContext:(id)arg1 ;
-(id)sharedPaymentWebServiceContext;
@end

