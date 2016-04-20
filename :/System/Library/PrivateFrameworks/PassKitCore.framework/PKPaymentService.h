/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKXPCServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceExportedInterface.h>

@protocol PKPaymentServiceDelegate;
@class PKXPCService, PKFieldProperties, NSString, PKPaymentWebServiceContext;

@interface PKPaymentService : NSObject <PKXPCServiceDelegate, PKPaymentServiceExportedInterface> {

	PKXPCService* _remoteService;
	id<PKPaymentServiceDelegate> _delegate;

}

@property (nonatomic,readonly) PKFieldProperties * paymentDeviceFieldProperties; 
@property (nonatomic,retain) NSString * defaultPaymentPassUniqueIdentifier; 
@property (nonatomic,retain) PKPaymentWebServiceContext * sharedPaymentWebServiceContext; 
@property (assign,nonatomic) id<PKPaymentServiceDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)contactlessInterfaceCanBePresentedFromSource:(long long)arg1 ;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned long long)arg2 limit:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(NSString *)defaultPaymentPassUniqueIdentifier;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1 ;
-(void)paymentDeviceDidExitField;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1 ;
-(void)contactlessInterfaceDidPresentFromSource:(long long)arg1 ;
-(void)contactlessInterfaceDidDismissFromSource:(long long)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2 ;
-(void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2 ;
-(void)scheduleSetupReminders;
-(void)setDefaultPaymentPassUniqueIdentifier:(NSString *)arg1 ;
-(id)_remoteObjectProxy;
-(void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)deleteMessageWithIdentifier:(id)arg1 ;
-(void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(PKFieldProperties *)paymentDeviceFieldProperties;
-(void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<PKPaymentServiceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKPaymentServiceDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)initializeSecureElementIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadAllPaymentPasses;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)_transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)passbookUIServiceDidLaunch;
-(void)_paymentDeviceFieldPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)_defaultPaymentPassUniqueIdentifier:(/*^block*/id)arg1 ;
-(void)_sharedPaymentWebServiceContextWithCompletion:(/*^block*/id)arg1 ;
-(id)_existingRemoteObjectProxy;
-(void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 ;
-(void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)markAllPaymentApplicationsForDelete;
-(void)simulatePaymentPush;
-(void)setSharedPaymentWebServiceContext:(PKPaymentWebServiceContext *)arg1 ;
-(PKPaymentWebServiceContext *)sharedPaymentWebServiceContext;
-(void)consistencyCheck;
@end

